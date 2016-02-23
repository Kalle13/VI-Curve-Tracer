#include "vi_curve_tracer.h"

#ifndef PIO_H
#define PIO_H

#define PIO_PER_OFFSET (0x0000)       //PIO Enable Register PIO_PER Write-only –
#define PIO_PDR_OFFSET (0x0004)       //PIO Disable Register PIO_PDR Write-only –
#define PIO_PSR_OFFSET (0x0008)       //PIO Status Register PIO_PSR Read-only (1)
#define PIO_OER_OFFSET (0x0010)       //Output Enable Register PIO_OER Write-only –
#define PIO_ODR_OFFSET (0x0014)       //Output Disable Register PIO_ODR Write-only –
#define PIO_OSR_OFFSET (0x0018)       //Output Status Register PIO_OSR Read-only 0x0000 0000
#define PIO_IFER_OFFSET (0x0020)      //Glitch Input Filter Enable Register PIO_IFER Write-only –
#define PIO_IFDR_OFFSET (0x0024)      //Glitch Input Filter Disable Register PIO_IFDR Write-only –
#define PIO_IFSR_OFFSET (0x0028)      //Glitch Input Filter Status Register PIO_IFSR Read-only 0x0000 0000
#define PIO_SODR_OFFSET (0x0030)      //Set Output Data Register PIO_SODR Write-only –
#define PIO_CODR_OFFSET (0x0034)      //Clear Output Data Register PIO_CODR Write-only
#define PIO_ODSR_OFFSET (0x0038)      //Output Data Status Register PIO_ODSR
#define PIO_PDSR_OFFSET (0x003C)      //Pin Data Status Register PIO_PDSR Read-only (3)
#define PIO_IER_OFFSET (0x0040)       //Interrupt Enable Register PIO_IER Write-only –
#define PIO_IDR_OFFSET (0x0044)       //Interrupt Disable Register PIO_IDR Write-only –
#define PIO_IMR_OFFSET (0x0048)       //Interrupt Mask Register PIO_IMR Read-only 0x00000000
#define PIO_ISR_OFFSET (0x004C)       //Interrupt Status Register(4) PIO_ISR Read-only 0x00000000
#define PIO_MDER_OFFSET (0x0050)      //Multi-driver Enable Register PIO_MDER Write-only –
#define PIO_MDDR_OFFSET (0x0054)      //Multi-driver Disable Register PIO_MDDR Write-only –
#define PIO_MDSR_OFFSET (0x0058)      //Multi-driver Status Register PIO_MDSR Read-only 0x00000000
#define PIO_PUDR_OFFSET (0x0060)      //Pull-up Disable Register PIO_PUDR Write-only –
#define PIO_PUER_OFFSET (0x0064)      //Pull-up Enable Register PIO_PUER Write-only –
#define PIO_PUSR_OFFSET (0x0068)      //Pad Pull-up Status Register PIO_PUSR Read-only (1)
#define PIO_ABCDSR1_OFFSET (0x0070)   //Peripheral Select Register 1 PIO_ABCDSR1
#define PIO_ABCDSR2_OFFSET (0x0074)   //Peripheral Select Register 2 PIO_ABCDSR2 Read-write 0x00000000
#define PIO_IFSCDR_OFFSET (0x0080)    //Input Filter Slow Clock Disable Register PIO_IFSCDR Write-only –
#define PIO_IFSCER_OFFSET (0x0084)    //Input Filter Slow Clock Enable Register PIO_IFSCER Write-only –
#define PIO_IFSCSR_OFFSET (0x0088)    //Input Filter Slow Clock Status Register PIO_IFSCSR Read-only 0x00000000
#define PIO_SCDR_OFFSET (0x008C)      //Slow Clock Divider Debouncing Register PIO_SCDR Read-write 0x00000000
#define PIO_PPDDR_OFFSET (0x0090)     //Pad Pull-down Disable Register PIO_PPDDR Write-only –
#define PIO_PPDER_OFFSET (0x0094)     //Pad Pull-down Enable Register PIO_PPDER Write-only –
#define PIO_PPDSR_OFFSET (0x0098)     //Pad Pull-down Status Register PIO_PPDSR Read-only (1)
#define PIO_OWER_OFFSET (0x00A0)      //Output Write Enable PIO_OWER Write-only –
#define PIO_OWDR_OFFSET (0x00A4)      //Output Write Disable PIO_OWDR Write-only –
#define PIO_OWSR_OFFSET (0x00A8)      //Output Write Status Register PIO_OWSR Read-only 0x00000000
#define PIO_AIMER_OFFSET (0x00B0)     //Additional Interrupt Modes Enable Register PIO_AIMER Write-only –
#define PIO_AIMDR_OFFSET (0x00B4)     //Additional Interrupt Modes Disables Register PIO_AIMDR Write-only –
#define PIO_AIMMR_OFFSET (0x00B8)     //Additional Interrupt Modes Mask Register PIO_AIMMR Read-only 0x00000000
#define PIO_ESR_OFFSET (0x00C0)       //Edge Select Register PIO_ESR Write-only –
#define PIO_LSR_OFFSET (0x00C4)       //Level Select Register PIO_LSR Write-only –
#define PIO_ELSR_OFFSET (0x00C8)      //Edge/Level Status Register PIO_ELSR Read-only 0x00000000
#define PIO_FELLSR_OFFSET (0x00D0)    //Falling Edge/Low Level Select Register PIO_FELLSR Write-only –
#define PIO_REHLSR_OFFSET (0x00D4)    //Rising Edge/ High Level Select Register PIO_REHLSR Write-only –
#define PIO_FRLHSR_OFFSET (0x00D8)    //Fall/Rise - Low/High Status Register PIO_FRLHSR Read-only 0x00000000
#define PIO_LOCKSR_OFFSET (0x00E0)    //Lock Status PIO_LOCKSR Read-only 0x00000000
#define PIO_WPMR_OFFSET (0x00E4)      //Write Protect Mode Register PIO_WPMR Read-write 0x0
#define PIO_WPSR_OFFSET (0x00E8)      //Write Protect Status Register PIO_WPSR Read-only 0x0
#define PIO_SCHMITT_OFFSET (0x0100)   //Schmitt Trigger Register PIO_SCHMITT Read-write 0x00000000
#define PIO_PCMR_OFFSET (0x150)       //Parallel Capture Mode Register PIO_PCMR Read-write 0x00000000
#define PIO_PCIER_OFFSET (0x154)      //Parallel Capture Interrupt Enable Register PIO_PCIER Write-only –
#define PIO_PCIDR_OFFSET (0x158)      //Parallel Capture Interrupt Disable Register PIO_PCIDR Write-only –
#define PIO_PCIMR_OFFSET (0x15C)      //Parallel Capture Interrupt Mask Register PIO_PCIMR Read-only 0x00000000
#define PIO_PCISR_OFFSET (0x160)      //Parallel Capture Interrupt Status Register PIO_PCISR Read-only 0x00000000
#define PIO_PCRHR_OFFSET (0x164)      //Parallel Capture Reception Holding Register PIO_PCRHR

// PIO Constants
#define PIOA_BASE (0x400E0E00)
#define PIOB_BASE (0x400E1000)
#define PIOA_ID (11)
#define PIOB_ID (12)
#define PA0 (1<<0)
#define PA1 (1<<1)
#define PA2 (1<<2)
#define PA3 (1<<3)
#define PA4 (1<<4)
#define PA5 (1<<5)
#define PA6 (1<<6)
#define PA7 (1<<7)
#define PA8 (1<<8)
#define PA9 (1<<9)
#define PA10 (1<<10)
#define PA11 (1<<11)
#define PA12 (1<<12)
#define PA13 (1<<13)
#define PA14 (1<<14)
#define PA15 (1<<15)
#define LED1_MASK (1<<18)
#define LED2_MASK (1<<17)
#define B1_MASK (1<<19)
#define B2_MASK (1<<20)
#define PA23 (1<<23)
#define PA25 (1<<25)
#define PA26 (1<<26)
#define PA27 (1<<27)
#define PA28 (1<<28)
#define PA29 (1<<29)
#define PA30 (1<<30)
#define PA31 (1<<31)
#define PB0 (1<<0)
#define PB1 (1<<1)
#define PB2 (1<<2)
#define PB3 (1<<3)
#define PB4 (1<<4)
#define PB5 (1<<5)
#define PB12 (1<<12)
#define PB13 (1<<13)
#define PB14 (1<<14)

void pio_write_sync(unsigned int pio_base, unsigned int pio_control_mask, unsigned int pio_on_off_mask);

void pio_write_async(unsigned int pio_base, unsigned int pio_control_mask, unsigned int pio_in_off_mask);

unsigned int pio_read(unsigned int pio_base, int pio_id, unsigned int read_mask);

unsigned int pio_read_edge(unsigned int pio_base, int pio_id, unsigned int read_mask);

#endif
