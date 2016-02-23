#include "vi_curve_tracer.h"

void pio_write_sync(unsigned int piox_base, unsigned int pio_control_mask, unsigned int on_off_mask)
{
	*((unsigned int*)(piox_base + PIO_PER_OFFSET)) = control_mask;
	*((unsigned int*)(piox_base + PIO_OER_OFFSET)) = control_mask;
	*((unsigned int*)(piox_base + PIO_OWER_OFFSET)) = control_mask;
	*((unsigned int*)(piox_base + PIO_ODSR_OFFSET)) = on_off_mask; 
	*((unsigned int*)(piox_base + PIO_OWDR_OFFSET)) = control_mask;
}

void pio_write_async(unsigned int piox_base, unsigned int pio_control_mask, unsigned int on_off_mask)
{
	*((unsigned int*)(piox_base + PIO_PER_OFFSET)) = control_mask;
	*((unsigned int*)(piox_base + PIO_OER_OFFSET)) = control_mask;
	*((unsigned int*)(piox_base + PIO_SODR_OFFSET)) = on_off_mask;
	*((unsigned int*)(piox_base + PIO_CODR_OFFSET)) = control_mask ^ on_off_mask;
}

unsigned int pio_read(unsigned int piox_base, int piox_id, unsigned int read_mask)
{
	*((unsigned int*)(piox_base + PIO_PER_OFFSET)) = read_mask;
	*((unsigned int*)(piox_base + PIO_ODR_OFFSET)) = read_mask;
	*((unsigned int*)(PMC_BASE + PMC_PCER0_OFFSET)) = 1 << piox_id;
	return(*((unsigned int*)(piox_base + PIO_PDSR_OFFSET)) & read_mask);
}

unsigned int pio_rising_edge_detect(unsigned int piox_base, int piox_id, unsigned int read_mask)
{
	*((unsigned int*)(piox_base + PIO_PER_OFFSET)) = read_mask;			// enable pio control of pins
	*((unsigned int*)(piox_base + PIO_ODR_OFFSET)) = read_mask;			// disable pins as outputs
	*((unsigned int*)(PMC_BASE + PMC_PCER0_OFFSET)) = 1 << piox_id;		// enable PMC peripheral clock 0
	*((unsigned int*)(piox_base + PIO_IER_OFFSET)) = read_mask;			// enable interrupt for read_mask
	*((unsigned int*)(piox_base + PIO_AIMER_OFFSET)) = read_mask;		// enable additional interrupt mode for positive edge detection
	*((unsigned int*)(piox_base + PIO_ESR_OFFSET)) = read_mask;			// enable edge detection
	*((unsigned int*)(piox_base + PIO_REHLSR_OFFSET)) = read_mask;		// enable detection of rising edges
	return(*((unsigned int)(piox_base + PIO_ISR_OFFSET)) & read_mask);	// return result of interrupt status register (mask out read pins)
}
