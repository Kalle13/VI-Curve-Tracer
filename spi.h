#include "vi_curve_tracer.h"

#ifndef SPI_H
#define SPI_H

// SPI User Interface Register Offsets
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

// Generic serial transmission properties (for PIO serial protocol)
#define C1_CPOL (0) // Slave 1 clock phase
#define C1_CPHA (0) // Slave 1 clock polarity
#define C1_WORD_SIZE (8) // Slave 1 word size
#define C1_BEGIN_TRANSFER_DELAY (0xFF) // Slave 1 delay before beginning data transmission
#define C1_SERIAL_DATA_DELAY (0xFF) // Slave 1 delay between consecutive bits
#define C1_END_TRANSFER_DELAY (0xFF) // Slave 1 delay after data transmission

// Serial data transmission properties specific to MCP41XXX digital potentiometers
#define MCP41XXX_CPOL (0) // MCP41XXX clock phase
#define MCP41XXX_CPHA (0) // MCP41XXX clock polarity
#define MCP41XXX_WORD_SIZE (16) // MCP41XXX word size
#define MCP41XXX_BEGIN_TRANSFER_DELAY (0xFF) // MCP41XXX delay before beginning data transmission
#define MCP41XXX_SERIAL_DATA_DELAY (0xFF) // MCP41XXX delay between consecutive bits
#define MCP41XXX_END_TRANSFER_DELAY (0xFF) // MCP41XXX delay after data transmission

// Serial data transmission properties specific to 74LS595 LCD interface (4-bit LCD operation)
#define LCD_CPOL (0) // LCD clock phase
#define LCD_CPHA (0) // LCD clock polarity
#define LCD_WORD_SIZE (7) // LCD word size
#define LCd_BEGIN_TRANSFER_DELAY (0xFF) // LCD delay before beginning data transmission
#define LCD_SERIAL_DATA_DELAY (0xFF) // LCD delay between consecutive bits
#define LCD_END_TRANSFER_DELAY (0xFF) // LCD delay after data transmission

// Slave assignment
#define MCP41050_CS (0)
#define MCP41010_CS (1)
#define LCD_CS (2)

// MCP41XXX Command Byte masks
#define WRITE_DATA_MASK (0x11)
#define SHUTDOWN_MASK (0x21)
#define NOP_MASK (0x0)

// SPI configuration (configure specific SPI data transmission properties for each slave)
void spi_config(int slave_number, int clock_phase, int clock_polarity, int word_size,
				int begin_delay, int end_delay, int data_delay);

// SPI data transmit function: provide serial data (one word at a time) and slave number
void spi_transmit(unsigned int serial_data, int slave_select_number);



#endif
