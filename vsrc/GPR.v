module GPR(
    input Wena, clk, rst,
    input [4:0] Wsel,
    input [31:0] data_in,
    input [4:0] Rsel1, Rsel2,
    output reg [31:0] data_out1,
    output reg [31:0] data_out2
);
    reg [31:0] GPR [0:31];
    assign GPR [0] = 32'b0;

    always@(posedge clk)begin
        if (rst)  begin
            for(int i = 0; i < 32; i = i + 1)
                GPR[i] <= 32'b0;
        end
        else if(Wena && Wsel != 5'b0) begin
            GPR [Wsel] <= data_in;
        end
    end

    assign data_out1 = (Rsel1 == 5'b0) ? 32'b0 : GPR[Rsel1];
    assign data_out2 = (Rsel2 == 5'b0) ? 32'b0 : GPR[Rsel2];
endmodule
