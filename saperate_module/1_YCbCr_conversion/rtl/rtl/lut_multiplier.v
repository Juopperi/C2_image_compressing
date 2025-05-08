module lut_multiplier #(
    parameter INPUT_WIDTH = 8,
    parameter FIXED_POINT_LENGTH = 32,
    parameter SCALE = 16
)(
    input [INPUT_WIDTH-1:0] data_in,
    input [3:0] coef_select,  // Select which coefficient to use
    output [FIXED_POINT_LENGTH-1:0] result
);

    // Pre-computed multiplication results for each coefficient
    // We implement this as a ROM/LUT structure
    reg [FIXED_POINT_LENGTH-1:0] result_lut;
    
    wire [INPUT_WIDTH+3:0] lut_addr = {coef_select, data_in}; // Combine coefficient select and data for lookup
    
    // Implement the lookup table as a ROM
    always @(*) begin
        case (coef_select)
            // n299 = 0.299 * 2^SCALE coefficient (0)
            4'd0: begin
                case (data_in)
                    // Generated values for 0.299 * data_in * 2^SCALE
                    8'd0:   result_lut = {FIXED_POINT_LENGTH{1'b0}};
                    8'd1:   result_lut = 32'd19595; // 0.299 * 1 * 2^16
                    8'd2:   result_lut = 32'd39190; // 0.299 * 2 * 2^16
                    8'd3:   result_lut = 32'd58785; // 0.299 * 3 * 2^16
                    8'd4:   result_lut = 32'd78380; // and so on...
                    8'd5:   result_lut = 32'd97975;
                    8'd6:   result_lut = 32'd117570;
                    8'd7:   result_lut = 32'd137165;
                    8'd8:   result_lut = 32'd156760;
                    8'd9:   result_lut = 32'd176355;
                    8'd10:  result_lut = 32'd195950;
                    8'd11:  result_lut = 32'd215545;
                    8'd12:  result_lut = 32'd235140;
                    8'd13:  result_lut = 32'd254735;
                    8'd14:  result_lut = 32'd274330;
                    8'd15:  result_lut = 32'd293925;
                    // Additional values can be added for input_width > 4 bits
                    // For full 8-bit input, we would need 256 entries per coefficient
                    // A more complete implementation would generate these values
                    // For brevity, showing first 16 entries and then default
                    default: begin
                        // For values not explicitly listed, compute on-the-fly
                        // 0.299 * 2^16 = 19595.264
                        result_lut = data_in * 32'd19595;
                    end
                endcase
            end
            
            // n587 = 0.587 * 2^SCALE coefficient (1)
            4'd1: begin
                case (data_in)
                    8'd0:   result_lut = {FIXED_POINT_LENGTH{1'b0}};
                    8'd1:   result_lut = 32'd38469; // 0.587 * 1 * 2^16
                    8'd2:   result_lut = 32'd76938; // 0.587 * 2 * 2^16
                    8'd3:   result_lut = 32'd115407; // 0.587 * 3 * 2^16
                    8'd4:   result_lut = 32'd153876;
                    8'd5:   result_lut = 32'd192345;
                    8'd6:   result_lut = 32'd230814;
                    8'd7:   result_lut = 32'd269283;
                    8'd8:   result_lut = 32'd307752;
                    8'd9:   result_lut = 32'd346221;
                    8'd10:  result_lut = 32'd384690;
                    8'd11:  result_lut = 32'd423159;
                    8'd12:  result_lut = 32'd461628;
                    8'd13:  result_lut = 32'd500097;
                    8'd14:  result_lut = 32'd538566;
                    8'd15:  result_lut = 32'd577035;
                    default: begin
                        // 0.587 * 2^16 = 38469.632
                        result_lut = data_in * 32'd38469;
                    end
                endcase
            end
            
            // n114 = 0.114 * 2^SCALE coefficient (2)
            4'd2: begin
                case (data_in)
                    8'd0:   result_lut = {FIXED_POINT_LENGTH{1'b0}};
                    8'd1:   result_lut = 32'd7471; // 0.114 * 1 * 2^16
                    8'd2:   result_lut = 32'd14942; // 0.114 * 2 * 2^16
                    8'd3:   result_lut = 32'd22413; // 0.114 * 3 * 2^16
                    8'd4:   result_lut = 32'd29884;
                    8'd5:   result_lut = 32'd37355;
                    8'd6:   result_lut = 32'd44826;
                    8'd7:   result_lut = 32'd52297;
                    8'd8:   result_lut = 32'd59768;
                    8'd9:   result_lut = 32'd67239;
                    8'd10:  result_lut = 32'd74710;
                    8'd11:  result_lut = 32'd82181;
                    8'd12:  result_lut = 32'd89652;
                    8'd13:  result_lut = 32'd97123;
                    8'd14:  result_lut = 32'd104594;
                    8'd15:  result_lut = 32'd112065;
                    default: begin
                        // 0.114 * 2^16 = 7471.104
                        result_lut = data_in * 32'd7471;
                    end
                endcase
            end
            
            // n1687 = 0.1687 * 2^SCALE coefficient (3)
            4'd3: begin
                case (data_in)
                    8'd0:   result_lut = {FIXED_POINT_LENGTH{1'b0}};
                    8'd1:   result_lut = 32'd11055; // 0.1687 * 1 * 2^16
                    8'd2:   result_lut = 32'd22110; // 0.1687 * 2 * 2^16
                    8'd3:   result_lut = 32'd33165; // 0.1687 * 3 * 2^16
                    8'd4:   result_lut = 32'd44220;
                    8'd5:   result_lut = 32'd55275;
                    8'd6:   result_lut = 32'd66330;
                    8'd7:   result_lut = 32'd77385;
                    8'd8:   result_lut = 32'd88440;
                    8'd9:   result_lut = 32'd99495;
                    8'd10:  result_lut = 32'd110550;
                    8'd11:  result_lut = 32'd121605;
                    8'd12:  result_lut = 32'd132660;
                    8'd13:  result_lut = 32'd143715;
                    8'd14:  result_lut = 32'd154770;
                    8'd15:  result_lut = 32'd165825;
                    default: begin
                        // 0.1687 * 2^16 = 11054.899
                        result_lut = data_in * 32'd11055;
                    end
                endcase
            end
            
            // n3313 = 0.3313 * 2^SCALE coefficient (4)
            4'd4: begin
                case (data_in)
                    8'd0:   result_lut = {FIXED_POINT_LENGTH{1'b0}};
                    8'd1:   result_lut = 32'd21709; // 0.3313 * 1 * 2^16
                    8'd2:   result_lut = 32'd43418; // 0.3313 * 2 * 2^16
                    8'd3:   result_lut = 32'd65127; // 0.3313 * 3 * 2^16
                    8'd4:   result_lut = 32'd86836;
                    8'd5:   result_lut = 32'd108545;
                    8'd6:   result_lut = 32'd130254;
                    8'd7:   result_lut = 32'd151963;
                    8'd8:   result_lut = 32'd173672;
                    8'd9:   result_lut = 32'd195381;
                    8'd10:  result_lut = 32'd217090;
                    8'd11:  result_lut = 32'd238799;
                    8'd12:  result_lut = 32'd260508;
                    8'd13:  result_lut = 32'd282217;
                    8'd14:  result_lut = 32'd303926;
                    8'd15:  result_lut = 32'd325635;
                    default: begin
                        // 0.3313 * 2^16 = 21709.6
                        result_lut = data_in * 32'd21710;
                    end
                endcase
            end
            
            // n5 = 0.5 * 2^SCALE coefficient (5)
            4'd5: begin
                case (data_in)
                    8'd0:   result_lut = {FIXED_POINT_LENGTH{1'b0}};
                    8'd1:   result_lut = 32'd32768; // 0.5 * 1 * 2^16
                    8'd2:   result_lut = 32'd65536; // 0.5 * 2 * 2^16
                    8'd3:   result_lut = 32'd98304; // 0.5 * 3 * 2^16
                    8'd4:   result_lut = 32'd131072;
                    8'd5:   result_lut = 32'd163840;
                    8'd6:   result_lut = 32'd196608;
                    8'd7:   result_lut = 32'd229376;
                    8'd8:   result_lut = 32'd262144;
                    8'd9:   result_lut = 32'd294912;
                    8'd10:  result_lut = 32'd327680;
                    8'd11:  result_lut = 32'd360448;
                    8'd12:  result_lut = 32'd393216;
                    8'd13:  result_lut = 32'd425984;
                    8'd14:  result_lut = 32'd458752;
                    8'd15:  result_lut = 32'd491520;
                    default: begin
                        // 0.5 * 2^16 = 32768
                        result_lut = data_in * 32'd32768;
                    end
                endcase
            end
            
            // n4187 = 0.4187 * 2^SCALE coefficient (6)
            4'd6: begin
                case (data_in)
                    8'd0:   result_lut = {FIXED_POINT_LENGTH{1'b0}};
                    8'd1:   result_lut = 32'd27429; // 0.4187 * 1 * 2^16
                    8'd2:   result_lut = 32'd54858; // 0.4187 * 2 * 2^16
                    8'd3:   result_lut = 32'd82287; // 0.4187 * 3 * 2^16
                    8'd4:   result_lut = 32'd109716;
                    8'd5:   result_lut = 32'd137145;
                    8'd6:   result_lut = 32'd164574;
                    8'd7:   result_lut = 32'd192003;
                    8'd8:   result_lut = 32'd219432;
                    8'd9:   result_lut = 32'd246861;
                    8'd10:  result_lut = 32'd274290;
                    8'd11:  result_lut = 32'd301719;
                    8'd12:  result_lut = 32'd329148;
                    8'd13:  result_lut = 32'd356577;
                    8'd14:  result_lut = 32'd384006;
                    8'd15:  result_lut = 32'd411435;
                    default: begin
                        // 0.4187 * 2^16 = 27429.273
                        result_lut = data_in * 32'd27429;
                    end
                endcase
            end
            
            // n0813 = 0.0813 * 2^SCALE coefficient (7)
            4'd7: begin
                case (data_in)
                    8'd0:   result_lut = {FIXED_POINT_LENGTH{1'b0}};
                    8'd1:   result_lut = 32'd5326; // 0.0813 * 1 * 2^16
                    8'd2:   result_lut = 32'd10652; // 0.0813 * 2 * 2^16
                    8'd3:   result_lut = 32'd15978; // 0.0813 * 3 * 2^16
                    8'd4:   result_lut = 32'd21304;
                    8'd5:   result_lut = 32'd26630;
                    8'd6:   result_lut = 32'd31956;
                    8'd7:   result_lut = 32'd37282;
                    8'd8:   result_lut = 32'd42608;
                    8'd9:   result_lut = 32'd47934;
                    8'd10:  result_lut = 32'd53260;
                    8'd11:  result_lut = 32'd58586;
                    8'd12:  result_lut = 32'd63912;
                    8'd13:  result_lut = 32'd69238;
                    8'd14:  result_lut = 32'd74564;
                    8'd15:  result_lut = 32'd79890;
                    default: begin
                        // 0.0813 * 2^16 = 5325.5
                        result_lut = data_in * 32'd5326;
                    end
                endcase
            end
            
            // n128 = 128 * 2^SCALE coefficient (8)
            4'd8: begin
                result_lut = 32'd8388608; // 128 * 2^16
            end
            
            default: result_lut = 0;
        endcase
    end
    
    // Assign the result
    assign result = result_lut;
    
endmodule 