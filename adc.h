#ifndef ADC_H
#define ADC_H

#define ADC_CR_OFFSET (0x00)       //Control Register ADC_CR Write-only –
#define ADC_MR_OFFSET (0x04)       //Mode Register ADC_MR Read-write 0x00000000
#define ADC_SEQR1_OFFSET (0x08)    //Channel Sequence Register 1 ADC_SEQR1 Read-write 0x00000000
#define ADC_SEQR2_OFFSET (0x0C)    //Channel Sequence Register 2 ADC_SEQR2 Read-write 0x00000000
#define ADC_CHER_OFFSET (0x10)     //Channel Enable Register ADC_CHER Write-only –
#define ADC_CHDR_OFFSET (0x14)     //Channel Disable Register ADC_CHDR Write-only –
#define ADC_CHSR_OFFSET (0x18)     //Channel Status Register ADC_CHSR Read-only 0x00000000
#define ADC_LCDR_OFFSET (0x20)     //Last Converted Data Register ADC_LCDR Read-only 0x00000000
#define ADC_IER_OFFSET (0x24)      //Interrupt Enable Register ADC_IER Write-only –
#define ADC_IDR_OFFSET (0x28)      //Interrupt Disable Register ADC_IDR Write-only –
#define ADC_IMR_OFFSET (0x2C)      //Interrupt Mask Register ADC_IMR Read-only 0x00000000
#define ADC_ISR_OFFSET (0x30)      //Interrupt Status Register ADC_ISR Read-only 0x00000000
#define ADC_OVER_OFFSET (0x3C)     //Overrun Status Register ADC_OVER Read-only 0x00000000
#define ADC_EMR_OFFSET (0x40)      //Extended Mode Register ADC_EMR Read-write 0x00000000
#define ADC_CWR_OFFSET (0x44)      //Compare Window Register ADC_CWR Read-write 0x00000000
#define ADC_CGR_OFFSET (0x48)      //Channel Gain Register ADC_CGR Read-write 0x00000000
#define ADC_COR_OFFSET (0x4C)      //Channel Offset Register ADC_COR Read-write 0x00000000
#define ADC_CDR0_OFFSET (0x50)     //Channel Data Register 0 ADC_CDR0 Read-only 0x00000000
#define ADC_CDR1_OFFSET (0x54)     //Channel Data Register 1 ADC_CDR1 Read-only 0x00000000
#define ADC_CDR2_OFFSET (0x58)     //Channel Data Register 2 ADC_CDR1 Read-only 0x00000000
#define ADC_CDR3_OFFSET (0x5c)     //Channel Data Register 3 ADC_CDR1 Read-only 0x00000000
#define ADC_CDR4_OFFSET (0x60)     //Channel Data Register 4 ADC_CDR1 Read-only 0x00000000
#define ADC_CDR5_OFFSET (0x64)     //Channel Data Register 5 ADC_CDR1 Read-only 0x00000000
#define ADC_CDR6_OFFSET (0x68)     //Channel Data Register 6 ADC_CDR1 Read-only 0x00000000
#define ADC_CDR7_OFFSET (0x6c)     //Channel Data Register 7 ADC_CDR1 Read-only 0x00000000
#define ADC_CDR8_OFFSET (0x70)     //Channel Data Register 8 ADC_CDR1 Read-only 0x00000000
#define ADC_CDR9_OFFSET (0x74)     //Channel Data Register 9 ADC_CDR1 Read-only 0x00000000
#define ADC_CDR10_OFFSET (0x78)    //Channel Data Register 10 ADC_CDR1 Read-only 0x00000000
#define ADC_CDR11_OFFSET (0x7c)    //Channel Data Register 11 ADC_CDR1 Read-only 0x00000000
#define ADC_CDR12_OFFSET (0x80)    //Channel Data Register 12 ADC_CDR1 Read-only 0x00000000
#define ADC_CDR13_OFFSET (0x84)    //Channel Data Register 13 ADC_CDR1 Read-only 0x00000000
#define ADC_CDR14_OFFSET (0x8c)    //Channel Data Register 14 ADC_CDR14 Read-only 0x00000000
#define ADC_ACR_OFFSET (0x94)      //Analog Control Register ADC_ACR Read-write 0x00000100
#define ADC_WPMR_OFFSET (0xE4)     //Write Protect Mode Register ADC_WPMR Read-write 0x00000000
#define ADC_WPSR_OFFSET (0xE8)     //Write Protect Status Register ADC_WPSR



#endif
