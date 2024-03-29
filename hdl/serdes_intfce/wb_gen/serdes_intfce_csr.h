/*
  Register definitions for slave core: SERDES intfce core registers

  * File           : serdes_intfce_csr.h
  * Author         : auto-generated by wbgen2 from serdes_intfce_csr.wb
  * Created        : Thu Jul  2 22:54:21 2015
  * Standard       : ANSI C

    THIS FILE WAS GENERATED BY wbgen2 FROM SOURCE FILE serdes_intfce_csr.wb
    DO NOT HAND-EDIT UNLESS IT'S ABSOLUTELY NECESSARY!

*/

#ifndef __WBGEN2_REGDEFS_SERDES_INTFCE_CSR_WB
#define __WBGEN2_REGDEFS_SERDES_INTFCE_CSR_WB

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


/* definitions for register: Control */

/* definitions for field: Tx Dis in reg: Control */
#define SERDES_INTFCE_CTRL_TX_DIS             WBGEN2_GEN_MASK(0, 1)

/* definitions for field: PRBS Ena in reg: Control */
#define SERDES_INTFCE_CTRL_PRBS_ENA           WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Test Write Enable in reg: Control */
#define SERDES_INTFCE_CTRL_TST_WR_ENA         WBGEN2_GEN_MASK(2, 1)

/* definitions for field: PRBS Cnt Rst in reg: Control */
#define SERDES_INTFCE_CTRL_CNT_CLR            WBGEN2_GEN_MASK(3, 1)

/* definitions for field: Marker Type in reg: Control */
#define SERDES_INTFCE_CTRL_MKR_TYPE           WBGEN2_GEN_MASK(4, 1)

/* definitions for field: LED Test in reg: Control */
#define SERDES_INTFCE_CTRL_LED_TEST           WBGEN2_GEN_MASK(5, 1)

/* definitions for field: Clear Faults in reg: Control */
#define SERDES_INTFCE_CTRL_CLR_FAULTS         WBGEN2_GEN_MASK(6, 1)

/* definitions for field: GTP Reset in reg: Control */
#define SERDES_INTFCE_CTRL_GTP_RST            WBGEN2_GEN_MASK(8, 1)

/* definitions for field: Rx Reset in reg: Control */
#define SERDES_INTFCE_CTRL_RX_RST             WBGEN2_GEN_MASK(9, 1)

/* definitions for field: Tx Reset in reg: Control */
#define SERDES_INTFCE_CTRL_TX_RST             WBGEN2_GEN_MASK(10, 1)

/* definitions for field: CDR Reset in reg: Control */
#define SERDES_INTFCE_CTRL_CDR_RST            WBGEN2_GEN_MASK(11, 1)

/* definitions for field: Align Rx in reg: Control */
#define SERDES_INTFCE_CTRL_ALIGN              WBGEN2_GEN_MASK(12, 1)

/* definitions for field: Rx Buf Reset in reg: Control */
#define SERDES_INTFCE_CTRL_RX_BUF_RST         WBGEN2_GEN_MASK(13, 1)

/* definitions for register: Status */

/* definitions for field: SFP LOS in reg: Status */
#define SERDES_INTFCE_STA_SFP_LOS             WBGEN2_GEN_MASK(0, 1)

/* definitions for field: SFP PRSNT in reg: Status */
#define SERDES_INTFCE_STA_SFP_PRSNT           WBGEN2_GEN_MASK(1, 1)

/* definitions for field: FMC PRSNT in reg: Status */
#define SERDES_INTFCE_STA_FMC_PRSNT           WBGEN2_GEN_MASK(2, 1)

/* definitions for field: Rx Buf Status in reg: Status */
#define SERDES_INTFCE_STA_RX_STAT_MASK        WBGEN2_GEN_MASK(8, 3)
#define SERDES_INTFCE_STA_RX_STAT_SHIFT       8
#define SERDES_INTFCE_STA_RX_STAT_W(value)    WBGEN2_GEN_WRITE(value, 8, 3)
#define SERDES_INTFCE_STA_RX_STAT_R(reg)      WBGEN2_GEN_READ(reg, 8, 3)

/* definitions for field: Rx LOS in reg: Status */
#define SERDES_INTFCE_STA_RX_LOS_MASK         WBGEN2_GEN_MASK(11, 2)
#define SERDES_INTFCE_STA_RX_LOS_SHIFT        11
#define SERDES_INTFCE_STA_RX_LOS_W(value)     WBGEN2_GEN_WRITE(value, 11, 2)
#define SERDES_INTFCE_STA_RX_LOS_R(reg)       WBGEN2_GEN_READ(reg, 11, 2)

/* definitions for field: Rx Clock Corr Cnt in reg: Status */
#define SERDES_INTFCE_STA_RX_CLK_CORR_MASK    WBGEN2_GEN_MASK(13, 3)
#define SERDES_INTFCE_STA_RX_CLK_CORR_SHIFT   13
#define SERDES_INTFCE_STA_RX_CLK_CORR_W(value) WBGEN2_GEN_WRITE(value, 13, 3)
#define SERDES_INTFCE_STA_RX_CLK_CORR_R(reg)  WBGEN2_GEN_READ(reg, 13, 3)

/* definitions for field: Rx Aligned in reg: Status */
#define SERDES_INTFCE_STA_ALIGNED             WBGEN2_GEN_MASK(16, 1)

/* definitions for field: FIFO Full in reg: Status */
#define SERDES_INTFCE_STA_FIFO_FULL           WBGEN2_GEN_MASK(24, 1)

/* definitions for register: PRBS Err Cnt */

/* definitions for register: Test Mem Addr */

/* definitions for register: Test Mem Data */

/* definitions for field: Data in reg: Test Mem Data */
#define SERDES_INTFCE_TEST_MEM_DAT_DATA_MASK  WBGEN2_GEN_MASK(0, 16)
#define SERDES_INTFCE_TEST_MEM_DAT_DATA_SHIFT 0
#define SERDES_INTFCE_TEST_MEM_DAT_DATA_W(value) WBGEN2_GEN_WRITE(value, 0, 16)
#define SERDES_INTFCE_TEST_MEM_DAT_DATA_R(reg) WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Data Is K in reg: Test Mem Data */
#define SERDES_INTFCE_TEST_MEM_DAT_ISK_MASK   WBGEN2_GEN_MASK(16, 2)
#define SERDES_INTFCE_TEST_MEM_DAT_ISK_SHIFT  16
#define SERDES_INTFCE_TEST_MEM_DAT_ISK_W(value) WBGEN2_GEN_WRITE(value, 16, 2)
#define SERDES_INTFCE_TEST_MEM_DAT_ISK_R(reg) WBGEN2_GEN_READ(reg, 16, 2)

/* definitions for field: Marker in reg: Test Mem Data */
#define SERDES_INTFCE_TEST_MEM_DAT_MARKER     WBGEN2_GEN_MASK(18, 1)

/* definitions for register: Line Rate */

/* definitions for register: Acq Page Size */

/* definitions for register: Acq Page Addr */

/* definitions for register: Acq Marker Addr */

PACKED struct SERDES_INTFCE_WB {
  /* [0x0]: REG Control */
  uint32_t CTRL;
  /* [0x4]: REG Status */
  uint32_t STA;
  /* [0x8]: REG PRBS Err Cnt */
  uint32_t PRBS_ERR_CNT;
  /* [0xc]: REG Test Mem Addr */
  uint32_t TEST_MEM_ADDR;
  /* [0x10]: REG Test Mem Data */
  uint32_t TEST_MEM_DAT;
  /* [0x14]: REG Line Rate */
  uint32_t LINE_RATE;
  /* [0x18]: REG Acq Page Size */
  uint32_t ACQ_PAGE_SIZE;
  /* [0x1c]: REG Acq Page Addr */
  uint32_t ACQ_PAGE_ADDR;
  /* [0x20]: REG Acq Marker Addr */
  uint32_t ACQ_MARKER_ADDR;
};

#endif
