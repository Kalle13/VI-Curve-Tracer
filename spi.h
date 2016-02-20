#include "vi_curve_tracer.h"

#ifndef SPI_H
#define SPI_H

#define SPI_CR_OFFSET (0x00)    //Control Register SPI_CR Write-only ---
#define SPI_MR_OFFSET (0x04)    //Mode Register SPI_MR Read-write 0x0
#define SPI_RDR_OFFSET (0x08)   //Receive Data Register SPI_RDR Read-only 0x0
#define SPI_TDR_OFFSET (0x0C)   //Transmit Data Register SPI_TDR Write-only ---
#define SPI_SR_OFFSET (0x10)    //Status Register SPI_SR Read-only 0x000000F0
#define SPI_IER_OFFSET (0x14)   //Interrupt Enable Register SPI_IER Write-only ---
#define SPI_IDR_OFFSET (0x18)   //Interrupt Disable Register SPI_IDR Write-only ---
#define SPI_IMR_OFFSET (0x1C)   //Interrupt Mask Register SPI_IMR Read-only 0x0
#define SPI_CSR0_OFFSET (0x30) //Chip Select Register 0 SPI_CSR0 Read-write 0x0
#define SPI_CSR1_OFFSET (0x34)  //Chip Select Register 1 SPI_CSR1 Read-write 0x0
#define SPI_CSR2_OFFSET (0x38)  //Chip Select Register 2 SPI_CSR2 Read-write 0x0
#define SPI_CSR3_OFFSET (0x3C)  //Chip Select Register 3 SPI_CSR3 Read-write 0x0
#define SPI_WPMR_OFFSET (0xE4)  //Write Protection Control Register SPI_WPMR Read-write 0x0
#define SPI_WPSR_OFFSET (0xE8)  //Write Protection Status Register SPI_WPSR Read-only 0x0

#endif