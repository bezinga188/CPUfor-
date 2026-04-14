module PC(
    input clk, rst, 
    input sel,
    input [31:0] jalrin,
    output reg [31:0] addrout
);
    always@(posedge clk)begin
        if(rst)begin
            addrout <= 32'h80000000;
        end
        else if(sel)begin
            addrout <= jalrin;
        end
        else if(!sel)begin
            addrout <= addrout + 32'd4;
        end
        else begin
            addrout <= 32'b0;
        end
    end
endmodule
