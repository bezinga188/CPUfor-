module CU(
    input [31:0] inst,
    output reg GPRwena, aluinv, alusral, btype, j, memwena,
    output [1:0] alusel, GPRwsel,
    output [2:0] alufsel, memsel, 
    output [4:0] GPRrsel1, GPRsel2, GPRwregsel,
    output [6:0] opcode,
    output [31:0] GPRdata_in, imm_out
); //由于寄存器选择位置统一，所以直接赋值，是否输出有ena信号决定
    always@(*)begin
        GPRrsel1 = inst[19:15];
        GPRsel2 = inst[24:20]; 
        GPRwregsel = inst[11:7];
        alufsel = inst[14:12];
        opcode = inst[6:0];
        memsel = inst[14:12];

        GPRwena = 0;
        GPRdata_in = 0;//?
        alusel = 2'b10;
        aluinv = 0;
        alusral = 0;
        imm_out = 0;
        GPRwsel = 0;
        memwena = 0;
        btype = 0;
        j = 0;

        case(inst[6:0])
            7'b0110111:begin //lui DONE
                GPRwena = 1;//from CU
                GPRwsel = 2'b01;
                GPRdata_in = {inst[31:12], 12'b0};
            end
            7'b0010111:begin //AUIPC(U-type) DONE
                GPRwena = 1; //from alu
                GPRwsel = 2'b10;
                alusel = 2'b00;
                imm_out = {inst[31:12], 12'b0}; 
            end
            7'b1101111:begin //JAL(J-type) DONE
                GPRwena = 1; //from PC
                GPRwsel = 2'b00;
                alusel = 2'b00;
                j = 1;
                imm_out = {{12{inst[31]}}, inst[19:12], inst[20], inst[30:21], 1'b0};
            end
            7'b1100111:begin //JALR(I-type) DONE
                GPRwena = 1; //from pc
                GPRwsel = 2'b00;
                alusel = 2'b10;
                j = 1;
                imm_out = {{20{inst[31]}}, inst[31:20]};
            end
            7'b1100011:begin //b-type
                alusel = 2'b11;
                btype = 1; //pcsel去top里写
                imm_out = {{20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0};
            end
            7'b0000011:begin //Lxx(I-type) DONE
                alusel = 2'b10;
                GPRwsel = 2'b11; //from mem
                GPRwena = 1;
                imm_out = {{20{inst[31]}}, inst[31:20]};
            end
            7'b0100011:begin //Sx(S-type) DONE
                alusel = 2'b10;
                memwena = 1;
                imm_out = {{20{inst[31]}}, inst[31:25], inst[11:7]};
            end
            7'b0010011:begin //I-type DONE
                imm_out = {{20{inst[31]}}, inst[31:20]};
                alusel = 2'b10;
                GPRwsel = 2'b10;
                GPRwena = 1;
            end
            7'b0110011:begin //R-type DONE
                alusel = 2'b11;
                GPRwsel = 2'b10;
                GPRwena = 1;
                alusral = inst[30];
            end
            default:;//试试什么都不写
        endcase
    end

endmodule
