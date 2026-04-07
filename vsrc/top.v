module top (
    input wire clk,
    input wire rst_n
);//检查端口位数是否对齐，是否存在输入连输出、一输出多输入的情况
    wire GPRwena;
    wire [4:0] GPRrsel1, GPRrsel2, GPRwregsel;
    wire [31:0] GPRread1, GPRread2;
    reg [31:0] GPRdata_in; 
    
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

    /* verilator lint_off UNUSED */
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

    wire [31:0] memdata_in, memdata_out;
    assign memdata_in = GPRread2;

    wire [31:0] instout;

    assign CUinst = instout;

    CU my_cu(
        .inst(CUinst),
        .GPRwena(GPRwena),
        .aluinv(aluinvert),
        .alusral(alusral),
        .btype(btype),
        .j(j),
        .memwena(memwena),
        .alusel(alusel),
        .GPRwregsel(GPRwregsel),
        .GPRwsel(GPRwsel),
        .alufsel(alufsel),
        .memsel(memsel),
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

    mem my_mem (.clk(clk),
        .wena(memwena),
        .func3in(memsel),
        .addr(alurslt[15:0]),
        .datain(memdata_in),
        .dataout(memdata_out)
    );

    ireg my_ireg (.addr(addrout[13:0]),
        .inst(instout)
    );
endmodule
