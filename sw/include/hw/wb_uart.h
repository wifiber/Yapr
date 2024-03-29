/*
  Register definitions for slave core: Simple Wishbone UART

  * File           : ../../../../software/include/hw/wb_uart.h
  * Author         : auto-generated by wbgen2 from uart.wb
  * Created        : Mon Feb 21 22:25:02 2011
  * Standard       : ANSI C

    THIS FILE WAS GENERATED BY wbgen2 FROM SOURCE FILE uart.wb
    DO NOT HAND-EDIT UNLESS IT'S ABSOLUTELY NECESSARY!

*/

#ifndef __WBGEN2_REGDEFS_UART_WB
#define __WBGEN2_REGDEFS_UART_WB

#include "../../include/std/inttypes.h"

#if defined( __GNUC__)
#define PACKED __attribute__ ((packed))
#else
#error "Unsupported compiler?"
#endif

#ifndef __WBGEN2_MACROS_DEFINED__
#define __WBGEN2_MACROS_DEFINED__
#define WBGEN2_GEN_MASK(offset, size) (((1<<(size))-1) << (offset))
#define WBGEN2_GEN_WRITE(value, offset, size) (((value) & ((1<<(size))-1)) << (offset))
#define WBGEN2_GEN_READ(reg, offset, size) (((reg) >> (offset)) & ((1<<(size))-1))
#define WBGEN2_SIGN_EXTEND(value, bits) (((value) & (1<<bits) ? ~((1<<(bits))-1): 0 ) | (value))
#endif

/* definitions for register: Status Register */

/* definitions for field: TX busy in reg: Status Register */
#define UART_SR_TX_BUSY                       WBGEN2_GEN_MASK(0, 1)

/* definitions for field: RX ready in reg: Status Register */
#define UART_SR_RX_RDY                        WBGEN2_GEN_MASK(1, 1)

/* definitions for register: Baudrate control register */

/* definitions for register: Transmit data regsiter */

/* definitions for field: Transmit data in reg: Transmit data regsiter */
#define UART_TDR_TX_DATA_MASK                 WBGEN2_GEN_MASK(0, 8)
#define UART_TDR_TX_DATA_SHIFT                0
#define UART_TDR_TX_DATA_W(value)             WBGEN2_GEN_WRITE(value, 0, 8)
#define UART_TDR_TX_DATA_R(reg)               WBGEN2_GEN_READ(reg, 0, 8)

/* definitions for register: Receive data regsiter */

/* definitions for field: Received data in reg: Receive data regsiter */
#define UART_RDR_RX_DATA_MASK                 WBGEN2_GEN_MASK(0, 8)
#define UART_RDR_RX_DATA_SHIFT                0
#define UART_RDR_RX_DATA_W(value)             WBGEN2_GEN_WRITE(value, 0, 8)
#define UART_RDR_RX_DATA_R(reg)               WBGEN2_GEN_READ(reg, 0, 8)
/* [0x0]: REG Status Register */
#define UART_REG_SR 0x00000000
/* [0x4]: REG Baudrate control register */
#define UART_REG_BCR 0x00000004
/* [0x8]: REG Transmit data regsiter */
#define UART_REG_TDR 0x00000008
/* [0xc]: REG Receive data regsiter */
#define UART_REG_RDR 0x0000000c

PACKED struct UART_WB {
	/* [0x0]: REG Status Register */
	uint32_t SR;
	/* [0x4]: REG Baudrate control register */
	uint32_t BCR;
	/* [0x8]: REG Transmit data regsiter */
	uint32_t TDR;
	/* [0xc]: REG Receive data regsiter */
	uint32_t RDR;
};

#endif
