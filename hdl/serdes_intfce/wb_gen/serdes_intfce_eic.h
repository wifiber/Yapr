/*
  Register definitions for slave core: Serdes interface embedded interrupt controller

  * File           : serdes_intfce_eic.h
  * Author         : auto-generated by wbgen2 from serdes_intfce_eic.wb
  * Created        : Mon May 19 14:32:19 2014
  * Standard       : ANSI C

    THIS FILE WAS GENERATED BY wbgen2 FROM SOURCE FILE serdes_intfce_eic.wb
    DO NOT HAND-EDIT UNLESS IT'S ABSOLUTELY NECESSARY!

*/

#ifndef __WBGEN2_REGDEFS_SERDES_INTFCE_EIC_WB
#define __WBGEN2_REGDEFS_SERDES_INTFCE_EIC_WB

#include <inttypes.h>

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


/* definitions for register: Interrupt disable register */

/* definitions for field: Trigger interrupt in reg: Interrupt disable register */
#define SERDES_INTFCE_EIC_EIC_IDR_TRIG        WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Acquisition interrupt in reg: Interrupt disable register */
#define SERDES_INTFCE_EIC_EIC_IDR_ACQ         WBGEN2_GEN_MASK(1, 1)

/* definitions for register: Interrupt enable register */

/* definitions for field: Trigger interrupt in reg: Interrupt enable register */
#define SERDES_INTFCE_EIC_EIC_IER_TRIG        WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Acquisition interrupt in reg: Interrupt enable register */
#define SERDES_INTFCE_EIC_EIC_IER_ACQ         WBGEN2_GEN_MASK(1, 1)

/* definitions for register: Interrupt mask register */

/* definitions for field: Trigger interrupt in reg: Interrupt mask register */
#define SERDES_INTFCE_EIC_EIC_IMR_TRIG        WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Acquisition interrupt in reg: Interrupt mask register */
#define SERDES_INTFCE_EIC_EIC_IMR_ACQ         WBGEN2_GEN_MASK(1, 1)

/* definitions for register: Interrupt status register */

/* definitions for field: Trigger interrupt in reg: Interrupt status register */
#define SERDES_INTFCE_EIC_EIC_ISR_TRIG        WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Acquisition interrupt in reg: Interrupt status register */
#define SERDES_INTFCE_EIC_EIC_ISR_ACQ         WBGEN2_GEN_MASK(1, 1)

PACKED struct SERDES_INTFCE_EIC_WB {
  /* [0x0]: REG Interrupt disable register */
  uint32_t EIC_IDR;
  /* [0x4]: REG Interrupt enable register */
  uint32_t EIC_IER;
  /* [0x8]: REG Interrupt mask register */
  uint32_t EIC_IMR;
  /* [0xc]: REG Interrupt status register */
  uint32_t EIC_ISR;
};

#endif
