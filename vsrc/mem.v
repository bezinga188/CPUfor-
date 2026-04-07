module mem(
    input clk, wena,
    input [2:0] func3in,
    input [15:0] addr,//rs1
    input [31:0] datain,
    output reg [31:0] dataout
);//用字寻址而非字节寻址，确认比赛允许

    reg [31:0] mem [0:16383];
    wire [13:0] addrin;
    reg [4:0] lb, sb;
    reg [4:0] lh, sh;
//这段代码通过下次的lint就加上lintoff
    always@(*)begin
        lb = 8*addr[1:0];
        sb = lb;
        sh = 16*addr[1:0];
        lh = sh;
    end

    assign addrin = addr[15:2];
    reg [31:0] _unused_ok;

    always@(posedge clk)begin
        if(wena) begin
            case(func3in)
                3'b000: begin
                    mem[addrin][sb[4:0] +: 8] <= datain[7:0];
                end
                3'b001: begin
                    mem[addrin][sh[4:0] +: 16] <= datain[15:0];
                end
                3'b010: begin
                    mem[addrin] <= datain;
                end
                default: mem[addrin] <= mem[addrin];
            endcase
        end
        else begin
            mem[addrin] <= mem[addrin];
        end
    end

    always@(*) begin
        case(func3in)
            3'b000 : dataout = {{24{mem[addrin][7+lb]}}, mem[addrin][lb[4:0] +: 8]};
            3'b001 : dataout = {{16{mem[addrin][15+lh]}}, mem[addrin][lh[4:0] +: 16]};
            3'b010 : dataout = mem[addrin];
            3'b100 : dataout = {24'b0, mem[addrin][lb[4:0] +: 8]};
            3'b101 : dataout = {16'b0, mem[addrin][lh[4:0] +: 16]};
            default: dataout = 0;
        endcase
    end
endmodule
