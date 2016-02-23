#ifndef VI_CURVE_TRACER_H
#define VI_CURVE_TRACER_H

#include "adc.h"
#include "dac.h"
#include "lcd.h"
#include "pio.h"
#include "pmc.h"
#include "spi.h"

extern int g_4_bit_operation; // global variable for LCD 4-bit operation

// SPI structure (needed for global variable g_spi_map)
typedef struct S_SPI_PIO{
						int clock_phase;
						int clock_polarity;
						int word_size;
						int begin_delay;
						int end_delay;
						int data_delay;	
						} T_SPI_PIO;
						
extern T_SPI_PIO g_spi_map[]; // global array of type T_SPI_PIO

#endif
