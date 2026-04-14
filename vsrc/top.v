//创建define.v，声明宏定义，用来代替可能打错的二进制
//`include define.v
module top (
    input wire clk,
    input wire rst_n,
    input [31:0] instin, prdata,
    output [31:0] addr, paddr, pwdata,
    output halt, 
    output reg p_wen,
    output [2:0] pmask
);
    //链接外设
    assign pmask = alufsel;
    assign pwdata = GPRread2;
    assign paddr = alurslt;
    wire [31:0] memdata_out;
    assign memdata_out = prdata;
    assign CUinst = instin;
    wire pwen;
    //实现地址空间的写使能
    always@(*)begin
        if(pwen)begin
            if(alurslt[21:2]==20'h80008)begin//外设SEG
                p_wen = 1;
            end
            else if(alurslt[21:2]==20'h80010)begin//LED
                p_wen = 1;
            end
            else if(alurslt[21:2]==20'h80014)begin//couter
                p_wen = 1;
            end
            else if(alurslt[20])begin//DRAM
                p_wen = 1;
            end
            else begin//don't give a shit
                p_wen = 0;
            end
        end
        else begin
            p_wen = 0;
        end
    end
            
    wire GPRwena;
    wire [4:0] GPRrsel1, GPRrsel2, GPRwregsel;
    wire [31:0] GPRread1, GPRread2;
    reg [31:0] GPRdata_in; 
    
    // for ebreak
    wire is_break = (CUinst == 32'h00100073);
    assign halt = is_break;

    //GPR input select
    always@(*)begin
        GPRdata_in = 0;
        case(GPRwsel)
            2'b00 : GPRdata_in = addrout + 4;
            2'b01 : GPRdata_in = CUgprdirect;
            2'b10 : GPRdata_in = alurslt;
            2'b11 : GPRdata_in = memdata_out;
        endcase
        PCjalrin = alurslt;
    end

    reg PCsel; //btype, alurslt[0], j
    reg [31:0] PCjalrin, addrout;
    assign addr = addrout;

    /* verilator lint_off UNUSED */
    //pc跳转使能
    always@(*)begin
        if(btype && alubout[0] || j)begin
            PCsel = 1;
        end
        else begin
            PCsel = 0;
        end
    end
    /* verilator lint_off UNUSED */
    wire [31:0] CUinst;
    wire aluinvert, alusral, btype, memwena, j;
    wire [1:0] alusel, GPRwsel;
    wire [2:0] alufsel, memsel;
    wire [6:0] opcode;
    wire [31:0] imm_out, CUgprdirect;

    wire [31:0] alurslt, alubout;

    CU my_cu(
        .inst(CUinst),
        .GPRwena(GPRwena),
        .aluinv(aluinvert),
        .alusral(alusral),
        .btype(btype),
        .j(j),
        .pwen(pwen),
        .alusel(alusel),
        .GPRwregsel(GPRwregsel),
        .GPRwsel(GPRwsel),
        .alufsel(alufsel),
        .GPRrsel1(GPRrsel1),
        .GPRsel2(GPRrsel2),
        .opcode(opcode),
        .GPRdata_in(CUgprdirect),
        .imm_out(imm_out)
    );

    GPR my_GPR(.clk(clk),
        .rst(rst_n),
        .Wena(GPRwena), 
        .Wsel(GPRwregsel), 
        .Rsel1(GPRrsel1), 
        .Rsel2(GPRrsel2),
        .data_in(GPRdata_in),
        .data_out1(GPRread1),
        .data_out2(GPRread2)
    );

    PC my_PC(.clk(clk),
        .rst(rst_n),
        .sel(PCsel),
        .jalrin(PCjalrin),
        .addrout(addrout)
    );

    alu my_alu(.sral(alusral),
        .invert(aluinvert),
        .sel(alufsel),
        .insel(alusel),
        .opcode(opcode),
        .imm_in(imm_out),
        .rs1in(GPRread1),
        .rs2in(GPRread2),
        .pcin(addrout),
        .rslt(alurslt),
        .bout(alubout)
    );

endmodule
