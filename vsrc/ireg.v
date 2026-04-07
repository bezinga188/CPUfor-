module ireg(
    input [13:0] addr,
    output [31:0] inst
);
    reg [31:0] rom [0:4095];

    initial begin
        $readmemh("program.hex",rom);
    end

    wire [11:0] word_addr = addr[13:2];

    /* verilator lint_off UNUSED */
    wire [1:0] _unused_ok = addr[1:0]; // 显式接出来，标记为已使用（且不报警告）
    /* verilator lint_on UNUSED */

    assign inst = rom[word_addr];

endmodule
