module alu(
    input wire invert, sral,//1对应SRL，0对应SRA， 对应fuction7
    input wire [2:0] sel, //function3
    input wire [1:0] insel, 
    input wire [6:0] opcode,
    input wire [31:0] imm_in,
    input wire [31:0] rs1in, rs2in, pcin,
    output reg [31:0] rslt, bout
);

    wire [31:0] rs1;
    wire [31:0] in1, in2;

    assign rs1 = (insel[1])? rs1in:pcin;
    assign in1 = (insel[0])? rs2in:imm_in;
    assign in2 = (invert)? ~in1:in1;

    wire [63:0] sra_full = { {32{rs1[31]}}, rs1 } >> in2[4:0];
    /* verilator lint_off UNUSED */
    wire [31:0] _unused_ok = sra_full[63:32];
    /* verilator lint_on UNUSED */

    always@(*)begin//这里可以改成用私有协议方式用一个case搞定
        bout = 0;
        if (opcode == 7'b0010011 || opcode == 7'b0110011)begin   //算数指令 
            case(sel)
            3'b000 : rslt = (sral)? (rs1 - in2):(rs1 + in2);
            3'b001 : rslt = rs1 << in2[4:0];
            3'b010 : rslt = {31'b0, ($signed(rs1) < $signed(in2))};
            3'b011 : rslt = {31'b0, (rs1 < in2)};
            3'b100 : rslt = rs1 ^ in2;
            3'b101 : rslt = (sral)? (sra_full[31:0]):(rs1 >> in2[4:0]);
            3'b110 : rslt = rs1 | in2;
            3'b111 : rslt = rs1 & in2;
            endcase
        end

        else if(opcode == 7'b1100111)begin //jalr
            rslt = (rs1 + in2) & (~1);
        end

        else if (opcode==7'b1100011)begin //分支指令
            case(sel)
                3'b000 : bout = (rs1 == in2)? 32'b1:32'b0;
                3'b001 : bout = (rs1 == in2)? 32'b0:32'b1;
                3'b100 : bout = ($signed(rs1) < $signed(in2))? 32'b1:32'b0;
                3'b101 : bout = ($signed(rs1) >= $signed(in2))? 32'b1:32'b0;
                3'b110 : bout = (rs1 < in2)? 32'b1:32'b0;
                3'b111 : bout = (rs1 >= in2)? 32'b1:32'b0;
                default : bout = 32'b0;
            endcase
            rslt = pcin + imm_in;
        end

        else begin
            rslt = rs1 + in2;
        end
    end

endmodule
