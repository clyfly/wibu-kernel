/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 MediaTek Inc.
 */
#ifndef __CONN_INFRA_CFG_REGS_H__
#define __CONN_INFRA_CFG_REGS_H__

#define CONN_INFRA_CFG_BASE                                    0x18001000

#define CONN_INFRA_CFG_IP_VERSION_ADDR                         (CONN_INFRA_CFG_BASE + 0x000)
#define CONN_INFRA_CFG_GPS_PWRCTRL0_ADDR                       (CONN_INFRA_CFG_BASE + 0x020C)
#define CONN_INFRA_CFG_EMI_CTL_TOP_ADDR                        (CONN_INFRA_CFG_BASE + 0x0410)
#define CONN_INFRA_CFG_EMI_CTL_WF_ADDR                         (CONN_INFRA_CFG_BASE + 0x0414)
#define CONN_INFRA_CFG_EMI_CTL_BT_ADDR                         (CONN_INFRA_CFG_BASE + 0x0418)
#define CONN_INFRA_CFG_EMI_CTL_GPS_ADDR                        (CONN_INFRA_CFG_BASE + 0x041C)
#define CONN_INFRA_CFG_EMI_CTL_GPS_L1_ADDR                     (CONN_INFRA_CFG_BASE + 0X0420)
#define CONN_INFRA_CFG_CONN_INFRA_CONN2GPS_SLP_CTRL_ADDR       (CONN_INFRA_CFG_BASE + 0x0570)
#define CONN_INFRA_CFG_GALS_CONN2GPS_SLP_STATUS_ADDR           (CONN_INFRA_CFG_BASE + 0x0574)
#define CONN_INFRA_CFG_CONN_INFRA_GPS2CONN_SLP_CTRL_ADDR       (CONN_INFRA_CFG_BASE + 0x0580)
#define CONN_INFRA_CFG_GALS_GPS2CONN_SLP_STATUS_ADDR           (CONN_INFRA_CFG_BASE + 0x0584)


#define CONN_INFRA_CFG_CONN_HW_VER_RO_CONN_HW_VERSION_ADDR     CONN_INFRA_CFG_IP_VERSION_ADDR
#define CONN_INFRA_CFG_CONN_HW_VER_RO_CONN_HW_VERSION_MASK     0xFFFFFFFF
#define CONN_INFRA_CFG_CONN_HW_VER_RO_CONN_HW_VERSION_SHFT     0

#define CONN_INFRA_CFG_GPS_PWRCTRL0_GPS_FUNCTION_EN_ADDR       CONN_INFRA_CFG_GPS_PWRCTRL0_ADDR
#define CONN_INFRA_CFG_GPS_PWRCTRL0_GPS_FUNCTION_EN_MASK       0x00000001
#define CONN_INFRA_CFG_GPS_PWRCTRL0_GPS_FUNCTION_EN_SHFT       0

#define CONN_INFRA_CFG_EMI_CTL_TOP_EMI_REQ_TOP_ADDR            CONN_INFRA_CFG_EMI_CTL_TOP_ADDR
#define CONN_INFRA_CFG_EMI_CTL_TOP_EMI_REQ_TOP_MASK            0x00000001
#define CONN_INFRA_CFG_EMI_CTL_TOP_EMI_REQ_TOP_SHFT            0

#define CONN_INFRA_CFG_EMI_CTL_GPS_EMI_REQ_GPS_ADDR            CONN_INFRA_CFG_EMI_CTL_GPS_ADDR
#define CONN_INFRA_CFG_EMI_CTL_GPS_EMI_REQ_GPS_MASK            0x00000001
#define CONN_INFRA_CFG_EMI_CTL_GPS_EMI_REQ_GPS_SHFT            0

#define CONN_CFG_EMI_CTL_GPS_L1_INFRA_REQ_GPS_L1_ADDR          CONN_INFRA_CFG_EMI_CTL_GPS_L1_ADDR
#define CONN_CFG_EMI_CTL_GPS_L1_INFRA_REQ_GPS_L1_MASK          0x00000020
#define CONN_CFG_EMI_CTL_GPS_L1_INFRA_REQ_GPS_L1_SHFT          5

#define CONN_INFRA_CFG_CONN_INFRA_CONN2GPS_SLP_CTRL_CFG_CONN2GPS_GALS_RX_SLP_PROT_SW_EN_ADDR \
	CONN_INFRA_CFG_CONN_INFRA_CONN2GPS_SLP_CTRL_ADDR
#define CONN_INFRA_CFG_CONN_INFRA_CONN2GPS_SLP_CTRL_CFG_CONN2GPS_GALS_RX_SLP_PROT_SW_EN_MASK 0x00000010
#define CONN_INFRA_CFG_CONN_INFRA_CONN2GPS_SLP_CTRL_CFG_CONN2GPS_GALS_RX_SLP_PROT_SW_EN_SHFT 4
#define CONN_INFRA_CFG_CONN_INFRA_CONN2GPS_SLP_CTRL_CFG_CONN2GPS_GALS_TX_SLP_PROT_SW_EN_ADDR \
	CONN_INFRA_CFG_CONN_INFRA_CONN2GPS_SLP_CTRL_ADDR
#define CONN_INFRA_CFG_CONN_INFRA_CONN2GPS_SLP_CTRL_CFG_CONN2GPS_GALS_TX_SLP_PROT_SW_EN_MASK 0x00000001
#define CONN_INFRA_CFG_CONN_INFRA_CONN2GPS_SLP_CTRL_CFG_CONN2GPS_GALS_TX_SLP_PROT_SW_EN_SHFT 0

#define CONN_CFG_GALS_CONN2GPS_SLP_STATUS_CONN2GPS_GALS_CTRL_PROT_RX_RDY_ADDR \
	CONN_INFRA_CFG_GALS_CONN2GPS_SLP_STATUS_ADDR
#define CONN_CFG_GALS_CONN2GPS_SLP_STATUS_CONN2GPS_GALS_CTRL_PROT_RX_RDY_MASK 0x00400000
#define CONN_CFG_GALS_CONN2GPS_SLP_STATUS_CONN2GPS_GALS_CTRL_PROT_RX_RDY_SHFT 22

#define CONN_CFG_GALS_CONN2GPS_SLP_STATUS_CONN2GPS_GALS_CTRL_PROT_TX_RDY_ADDR \
	CONN_INFRA_CFG_GALS_CONN2GPS_SLP_STATUS_ADDR
#define CONN_CFG_GALS_CONN2GPS_SLP_STATUS_CONN2GPS_GALS_CTRL_PROT_TX_RDY_MASK 0x00800000
#define CONN_CFG_GALS_CONN2GPS_SLP_STATUS_CONN2GPS_GALS_CTRL_PROT_TX_RDY_SHFT 23

#define CONN_INFRA_CFG_CONN_INFRA_GPS2CONN_SLP_CTRL_CFG_GPS2CONN_GALS_RX_SLP_PROT_SW_EN_ADDR \
	CONN_INFRA_CFG_CONN_INFRA_GPS2CONN_SLP_CTRL_ADDR
#define CONN_INFRA_CFG_CONN_INFRA_GPS2CONN_SLP_CTRL_CFG_GPS2CONN_GALS_RX_SLP_PROT_SW_EN_MASK 0x00000010
#define CONN_INFRA_CFG_CONN_INFRA_GPS2CONN_SLP_CTRL_CFG_GPS2CONN_GALS_RX_SLP_PROT_SW_EN_SHFT 4
#define CONN_INFRA_CFG_CONN_INFRA_GPS2CONN_SLP_CTRL_CFG_GPS2CONN_GALS_TX_SLP_PROT_SW_EN_ADDR \
	CONN_INFRA_CFG_CONN_INFRA_GPS2CONN_SLP_CTRL_ADDR
#define CONN_INFRA_CFG_CONN_INFRA_GPS2CONN_SLP_CTRL_CFG_GPS2CONN_GALS_TX_SLP_PROT_SW_EN_MASK 0x00000001
#define CONN_INFRA_CFG_CONN_INFRA_GPS2CONN_SLP_CTRL_CFG_GPS2CONN_GALS_TX_SLP_PROT_SW_EN_SHFT 0

#define CONN_CFG_GALS_GPS2CONN_SLP_STATUS_GPS2CONN_GALS_CTRL_PROT_RX_RDY_ADDR \
	CONN_INFRA_CFG_GALS_GPS2CONN_SLP_STATUS_ADDR
#define CONN_CFG_GALS_GPS2CONN_SLP_STATUS_GPS2CONN_GALS_CTRL_PROT_RX_RDY_MASK 0x00400000
#define CONN_CFG_GALS_GPS2CONN_SLP_STATUS_GPS2CONN_GALS_CTRL_PROT_RX_RDY_SHFT 22

#define CONN_CFG_GALS_GPS2CONN_SLP_STATUS_GPS2CONN_GALS_CTRL_PROT_TX_RDY_ADDR \
	CONN_INFRA_CFG_GALS_GPS2CONN_SLP_STATUS_ADDR
#define CONN_CFG_GALS_GPS2CONN_SLP_STATUS_GPS2CONN_GALS_CTRL_PROT_TX_RDY_MASK 0x00800000
#define CONN_CFG_GALS_GPS2CONN_SLP_STATUS_GPS2CONN_GALS_CTRL_PROT_TX_RDY_SHFT 23

#endif /* __CONN_INFRA_CFG_REGS_H__ */

