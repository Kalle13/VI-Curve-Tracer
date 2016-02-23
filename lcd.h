#ifndef LCD_H
#define LCD_H

// LCD configuration variable masks
#define INCREMENT (0x2) // Cursor move direction; increment
#define DECREMENT (0x0) // Cursor move direction; decrement
#define AUTO_DISPLAY_SHIFT (0x1) // Automatic display shift
#define NO_AUTO_SHIFT (0x0) // No automatic display shift
#define DISPLAY_ON (0x4) // turn display on
#define DISPLAY_OFF (0x0) // turn display off
#define CURSOR_ON (0x2) // turn cursor on 
#define CURSOR_OFF (0x0) // turn cursor off
#define CURSOR_BLINK (0x1) // turn cursor blink on
#define CURSOR_BLINK_OFF (0x0) // turn cursor blink off
#define DISPLAY_SHIFT (0x8) // Shift display or move cursor; shift display
#define CURSOR_MOVE (0x0) // Shift display or move cursor; move cursor
#define SHIFT_RIGHT (0x4) // Shift display/Move cursor direction; right
#define SHIFT_LEFT (0x0) // Shift display/Move cursor direction; left
#define 4_BIT (0x0) // Use 4-bit operation/interface
#define 8_BIT (0x10) // Use 8-bit operation/interface
#define TWO_LINE (0x8) // Set number of display lines to two
#define ONE_LINE (0x0) // Set number of display lines to one
#define TEN_DOTS (0x4) // Set character font to 5x10 dots
#define SEVEN_DOTS (0x0) // Set character font to 5x7 dots

// LCD function masks
#define CLEAR_DISPLAY (0x1)
#define CURSOR_HOME (0x2)
#define ENTRY_MODE_SET (0x4)
#define DISPLAY_CONTROL (0x8)
#define CURSOR_DISPLAY_SHIFT (0x10)
#define FUNCTION_SET (0x20)

// LCD data/instruction variables
#define DATA (1)
#define INSTRUCTION (0)

// LCD configuration function
void lcd_config(unsigned int inc_dec, unsigned int display_shift, unsigned int display_on_off, unsigned int cursor_on_off,
				unsigned int cursor_blink, unsigned int display_cursor_move, unsigned int shift_right_left, 
				unsigned int interface_number_of_bits, unsigned int number_of_lines, unsigned int number_of_dots);
				
// LCD data write function				
void lcd_data_write(char *lcd_message);

// LCD instruction write function
void lcd_instruction_write(unsigned int instruction);

#endif
