`define data_length 64

module log_print (
    input reset,
    input clock,
    // input [`data_length * 32 - 1:0]gpr_wire,
    input [`data_length - 1:0]pc,
    // input [`data_length - 1:0]debug_pc,
    input inst_commit,
    input [`data_length - 1:0]write_data,
    input cpu_ebreak_sign
);  
    reg [31:0] counter;
    reg [31:0] last_counter;
    integer  fd ;
    initial begin
        $display ("open file successfully");
        fd =   $fopen("/home/ddddddd/my_learn/cpu_relative/ysyx-workbench/npc/vsrc/v_lib/log_file.txt","w");
        if(fd == 0 ) begin
            $display ("could not open this file!");
            $stop;
        end
        counter = 0;
        $display ("open file successfully");
    end
    
    always @(posedge clock) begin
         if(inst_commit) begin
             $fwrite(fd,"pc ->  %h write_data -> %h \n",pc[31:0],write_data);
             if(pc < 64'h30000000) begin
                 $stop;
             end 
         end
        if(cpu_ebreak_sign) begin
            $stop;
        end
        counter <= counter + 32'b1; 
        if(counter >= 400000000) begin
            $fclose(fd);
            $stop;
        end
        if(counter >= last_counter + 32'h2fffff) begin
            last_counter <= counter;
            $display ("");
        end
    

        
  end

endmodule
