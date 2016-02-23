#include "vi_curve_tracer.h"

typedef struct S_SPI_PIO{
						int clock_phase;
						int clock_polarity;
						int word_size;
						int begin_delay;
						int end_delay;
						int data_delay;	
						} T_SPI_PIO;

T_SPI_PIO g_spi_map[4] = {0};					
						
// SPI configuration (configure specific SPI data transmission properties for each slave)
void spi_config(int slave_number, int clock_phase, int clock_polarity, int word_size,
				int begin_delay, int end_delay, int data_delay)
{
	g_spi_map[slave_number].clock_phase = clock_phase;
	g_spi_map[slave_number].clock_polarity = clock_polarity;
	g_spi_map[slave_number].word_size = word_size;
	g_spi_map[slave_number].begin_delay = begin_delay;
	g_spi_map[slave_number].end_delay = end_delay;
	g_spi_map[slave_number].data_delay = data_delay;
}
				
// SPI data transmit function: provide serial data (one word at a time) and slave number
void spi_transmit(unsigned int serial_data, int slave_select_number)
{
	// slave_select_number will cause a particular PIO pin to be activated
	// serial_data will be transmitted according to properties listed in S_SPI_PIO structure
}
