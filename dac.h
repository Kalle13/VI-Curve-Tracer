#include "vi_curve_tracer.h"

#ifndef DAC_H
#define DAC_H

#define DACC_CR_OFFSET (0x00)     //Control Register DACC_CR Write-only –
#define DACC_MR_OFFSET (0x04)     //Mode Register DACC_MR Read-write 0x00000000
#define DACC_CHER_OFFSET (0x10)   //Channel Enable Register DACC_CHER Write-only –
#define DACC_CHDR_OFFSET (0x14)   //Channel Disable Register DACC_CHDR Write-only –
#define DACC_CHSR_OFFSET (0x18)   //Channel Status Register DACC_CHSR Read-only 0x00000000
#define DACC_CDR_OFFSET (0x20)    //Conversion Data Register DACC_CDR Write-only 0x00000000
#define DACC_IER_OFFSET (0x24)    //Interrupt Enable Register DACC_IER Write-only –
#define DACC_IDR_OFFSET (0x28)    //Interrupt Disable Register DACC_IDR Write-only –
#define DACC_IMR_OFFSET (0x2C)    //Interrupt Mask Register DACC_IMR Read-only 0x00000000
#define DACC_ISR_OFFSET (0x30)    //Interrupt Status Register DACC_ISR Read-only 0x00000000
#define DACC_ACR_OFFSET (0x94)    //Analog Current Register DACC_ACR Read-write 0x00000000
#define DACC_WPMR_OFFSET (0xE4)   //Write Protect Mode register DACC_WPMR Read-write 0x00000000
#define DACC_WPSR_OFFSET (0xE8)   //Write Protect Status register DACC_WPSR


#endif