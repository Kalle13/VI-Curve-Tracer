#include "vi_curve_tracer.h"

int g_4_bit_operation = 0;

void lcd_config(unsigned int inc_dec, unsigned int display_shift, unsigned int display_on_off, unsigned int cursor_on_off,
				unsigned int cursor_blink, unsigned int display_cursor_move, unsigned int shift_right_left, 
				unsigned int interface_number_of_bits, unsigned int number_of_lines, unsigned int number_of_dots)
{
	unsigned int entry_mode_set = 0;
	unsigned int display_control = 0;
	unsigned int cursor_display_shift = 0;
	unsigned int function_set = 0;
	
	entry_mode_set = ENTRY_MODE_SET | inc_dec | display_shift;
	display_control = DISPLAY_CONTROL | display_on_off | cursor_on_off | cursor_blink;
	cursor_display_shift = CURSOR_DISPLAY_SHIFT | display_cursor_move | shift_right_left;
	function_set = FUNCTION_SET | interface_number_of_bits | number_of_lines | number_of_dots;
	
	if(!interface_number_of_bits)
	{
		g_4_bit_operation = 1;
	}
	
	lcd_instruction_write(entry_mode_set);
	lcd_instruction_write(display_control);
	lcd_instruction_write(cursor_display_shift);
	lcd_instruction_write(function_set);
	
}
				
void lcd_data_write(char *lcd_message)
{
	volatile int i = 0, j = 0;
	volatile int enable = 0; // lcd enable (E) input
	volatile int register_set = 0; // register set (RS) input for data(1)/instruction(0) registers
	volatile int light = 0; // lcd backlight (LITE) enable(1)/disable(0)
	volatile int sclk = 0; // serial clock output
	volatile int pclk = 0; // parallel clock output
	volatile char character_mask = 0xff;
	
	if(g_4_bit_operation)
	{
		for(j=0;j<=strlen(lcd_message);j++)
		{
			character_mask &= lcd_message;	// Write first eight bits of lcd_message to mask
			for(i=0;i<=4;i++)
			{
				// Use SPI protocol to transmit data (need SPI function(s))
			
			}	
		}
		
		
	}
	if(!g_4_bit_operation)
	{
		
		
	}
}

// Transmit: 2x4-bit instruction, enable (E) input pulse, register set (RS) input, and backlight input (LITE) 
void lcd_instruction_write(unsigned int instruction)
{
	volatile int enable = 0;
	volatile int register_set = 0; // register set (RS) input for data(1)/instruction(0) registers
	volatile int light = 0;
	
	
	
}
