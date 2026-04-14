module GPR(
    input Wena, clk, rst,
    input [4:0] Wsel,
    input [31:0] data_in,
    input [4:0] Rsel1, Rsel2,
    output [31:0] data_out1,
    output [31:0] data_out2
);
    reg [31:0] GPR [0:31];

    always@(posedge clk)begin
        if (rst) begin
            // 同步复位功能
            integer i;
            for (i = 0; i < 32; i = i + 1) begin
                GPR[i] <= 32'b0;
            end
        end
        else if(Wena && Wsel != 5'b0) begin
            GPR [Wsel] <= data_in;
        end
    end

    //引出寄存器值用以difftest
    //import "DPI-C" function void set_gpr_ptr(input logic [31:0] a []);
    //initial begin 
        //set_gpr_ptr(GPR);
    //end

    assign data_out1 = (Rsel1 == 5'b0) ? 32'b0 : GPR[Rsel1];
    assign data_out2 = (Rsel1 == 5'b0) ? 32'b0 : GPR[Rsel2];
endmodule
