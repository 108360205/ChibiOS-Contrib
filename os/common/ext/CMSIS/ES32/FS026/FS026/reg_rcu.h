/**********************************************************************************
 *
 * @file    reg_rcu.h
 * @brief   RCU Head File
 *
 * @date    23 Nov 2021
 * @author  AE Team
 * @note
 *          Change Logs:
 *          Date            Author          Notes
 *          23 Nov 2021     Ginger          the first version
 *
 * Copyright (C) Shanghai Eastsoft Microelectronics Co. Ltd. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 **********************************************************************************
 */

#ifndef __RCU_H__
#define __RCU_H__


/******************************************************************************/
/*              Device Specific Peripheral registers structures               */
/******************************************************************************/

/*  Support for anonymous structures and unions.  */
//#pragma anon_unions

/****************** Bit definition for RCU_CON register ************************/

# define  RCU_CON_CSSON_POS 24U
# define  RCU_CON_CSSON_MSK BIT(RCU_CON_CSSON_POS)
# define  RCU_CON_CSSON     RCU_CON_CSSON_MSK

# define  RCU_CON_PLL0RDY_POS 21U
# define  RCU_CON_PLL0RDY_MSK BIT(RCU_CON_PLL0RDY_POS)
# define  RCU_CON_PLL0RDY     RCU_CON_PLL0RDY_MSK

# define  RCU_CON_PLL0ON_POS 20U
# define  RCU_CON_PLL0ON_MSK BIT(RCU_CON_PLL0ON_POS)
# define  RCU_CON_PLL0ON     RCU_CON_PLL0ON_MSK

# define  RCU_CON_HRC48RDY_POS 17U
# define  RCU_CON_HRC48RDY_MSK BIT(RCU_CON_HRC48RDY_POS)
# define  RCU_CON_HRC48RDY     RCU_CON_HRC48RDY_MSK

# define  RCU_CON_HRC48ON_POS 16U
# define  RCU_CON_HRC48ON_MSK BIT(RCU_CON_HRC48ON_POS)
# define  RCU_CON_HRC48ON     RCU_CON_HRC48ON_MSK

# define  RCU_CON_HOSCBYP_POS 6U
# define  RCU_CON_HOSCBYP_MSK BIT(RCU_CON_HOSCBYP_POS)
# define  RCU_CON_HOSCBYP     RCU_CON_HOSCBYP_MSK

# define  RCU_CON_HOSCRDY_POS 5U
# define  RCU_CON_HOSCRDY_MSK BIT(RCU_CON_HOSCRDY_POS)
# define  RCU_CON_HOSCRDY     RCU_CON_HOSCRDY_MSK

# define  RCU_CON_HOSCON_POS 4U
# define  RCU_CON_HOSCON_MSK BIT(RCU_CON_HOSCON_POS)
# define  RCU_CON_HOSCON     RCU_CON_HOSCON_MSK

# define  RCU_CON_HRCRDY_POS 1U
# define  RCU_CON_HRCRDY_MSK BIT(RCU_CON_HRCRDY_POS)
# define  RCU_CON_HRCRDY     RCU_CON_HRCRDY_MSK

# define  RCU_CON_HRCON_POS 0U
# define  RCU_CON_HRCON_MSK BIT(RCU_CON_HRCON_POS)
# define  RCU_CON_HRCON     RCU_CON_HRCON_MSK

/****************** Bit definition for RCU_CFG register ************************/

# define  RCU_CFG_MPRE_POSS 28U
# define  RCU_CFG_MPRE_POSE 30U
# define  RCU_CFG_MPRE_MSK  BITS(RCU_CFG_MPRE_POSS, RCU_CFG_MPRE_POSE)
# define  RCU_CFG_MPRE      RCU_CFG_MPRE_MSK

# define  RCU_CFG_MSW_POSS 24U
# define  RCU_CFG_MSW_POSE 27U
# define  RCU_CFG_MSW_MSK  BITS(RCU_CFG_MSW_POSS, RCU_CFG_MSW_POSE)
# define  RCU_CFG_MSW      RCU_CFG_MSW_MSK

# define  RCU_CFG_PLLSRC_POSS 20U
# define  RCU_CFG_PLLSRC_POSE 21U
# define  RCU_CFG_PLLSRC_MSK  BITS(RCU_CFG_PLLSRC_POSS, RCU_CFG_PLLSRC_POSE)
# define  RCU_CFG_PLLSRC      RCU_CFG_PLLSRC_MSK

# define  RCU_CFG_PREDIV_POSS 16U
# define  RCU_CFG_PREDIV_POSE 19U
# define  RCU_CFG_PREDIV_MSK  BITS(RCU_CFG_PREDIV_POSS, RCU_CFG_PREDIV_POSE)
# define  RCU_CFG_PREDIV      RCU_CFG_PREDIV_MSK

# define  RCU_CFG_PPRE_POSS 12U
# define  RCU_CFG_PPRE_POSE 14U
# define  RCU_CFG_PPRE_MSK  BITS(RCU_CFG_PPRE_POSS, RCU_CFG_PPRE_POSE)
# define  RCU_CFG_PPRE      RCU_CFG_PPRE_MSK

# define  RCU_CFG_HPRE_POSS 8U
# define  RCU_CFG_HPRE_POSE 11U
# define  RCU_CFG_HPRE_MSK  BITS(RCU_CFG_HPRE_POSS, RCU_CFG_HPRE_POSE)
# define  RCU_CFG_HPRE      RCU_CFG_HPRE_MSK

# define  RCU_CFG_SWS_POSS 3U
# define  RCU_CFG_SWS_POSE 5U
# define  RCU_CFG_SWS_MSK  BITS(RCU_CFG_SWS_POSS, RCU_CFG_SWS_POSE)
# define  RCU_CFG_SWS      RCU_CFG_SWS_MSK

# define  RCU_CFG_SW_POSS 0U
# define  RCU_CFG_SW_POSE 2U
# define  RCU_CFG_SW_MSK  BITS(RCU_CFG_SW_POSS, RCU_CFG_SW_POSE)
# define  RCU_CFG_SW      RCU_CFG_SW_MSK

/****************** Bit definition for RCU_PLL0 register ************************/

# define  RCU_PLL0_FK_POSS 12U
# define  RCU_PLL0_FK_POSE 30U
# define  RCU_PLL0_FK_MSK  BITS(RCU_PLL0_FK_POSS, RCU_PLL0_FK_POSE)
# define  RCU_PLL0_FK      RCU_PLL0_FK_MSK

# define  RCU_PLL0_FN_POSS 4U
# define  RCU_PLL0_FN_POSE 11U
# define  RCU_PLL0_FN_MSK  BITS(RCU_PLL0_FN_POSS, RCU_PLL0_FN_POSE)
# define  RCU_PLL0_FN      RCU_PLL0_FN_MSK

# define  RCU_PLL0_FM_POSS 0U
# define  RCU_PLL0_FM_POSE 1U
# define  RCU_PLL0_FM_MSK  BITS(RCU_PLL0_FM_POSS, RCU_PLL0_FM_POSE)
# define  RCU_PLL0_FM      RCU_PLL0_FM_MSK

/****************** Bit definition for RCU_CFG2 register ************************/

# define  RCU_CFG2_SYSFREQ_POSS 8U
# define  RCU_CFG2_SYSFREQ_POSE 15U
# define  RCU_CFG2_SYSFREQ_MSK  BITS(RCU_CFG2_SYSFREQ_POSS, RCU_CFG2_SYSFREQ_POSE)
# define  RCU_CFG2_SYSFREQ      RCU_CFG2_SYSFREQ_MSK

# define  RCU_CFG2_USBSW_POSS 4U
# define  RCU_CFG2_USBSW_POSE 5U
# define  RCU_CFG2_USBSW_MSK  BITS(RCU_CFG2_USBSW_POSS, RCU_CFG2_USBSW_POSE)
# define  RCU_CFG2_USBSW      RCU_CFG2_USBSW_MSK

# define  RCU_CFG2_I2SSW_POSS 0U
# define  RCU_CFG2_I2SSW_POSE 1U
# define  RCU_CFG2_I2SSW_MSK  BITS(RCU_CFG2_I2SSW_POSS, RCU_CFG2_I2SSW_POSE)
# define  RCU_CFG2_I2SSW      RCU_CFG2_I2SSW_MSK

/****************** Bit definition for RCU_IER register ************************/

# define  RCU_IER_CSSHOSC_POS 8U
# define  RCU_IER_CSSHOSC_MSK BIT(RCU_IER_CSSHOSC_POS)
# define  RCU_IER_CSSHOSC     RCU_IER_CSSHOSC_MSK

# define  RCU_IER_PLL0RDY_POS 5U
# define  RCU_IER_PLL0RDY_MSK BIT(RCU_IER_PLL0RDY_POS)
# define  RCU_IER_PLL0RDY     RCU_IER_PLL0RDY_MSK

# define  RCU_IER_HRC48RDY_POS 4U
# define  RCU_IER_HRC48RDY_MSK BIT(RCU_IER_HRC48RDY_POS)
# define  RCU_IER_HRC48RDY     RCU_IER_HRC48RDY_MSK

# define  RCU_IER_HOSCRDY_POS 3U
# define  RCU_IER_HOSCRDY_MSK BIT(RCU_IER_HOSCRDY_POS)
# define  RCU_IER_HOSCRDY     RCU_IER_HOSCRDY_MSK

# define  RCU_IER_HRCRDY_POS 2U
# define  RCU_IER_HRCRDY_MSK BIT(RCU_IER_HRCRDY_POS)
# define  RCU_IER_HRCRDY     RCU_IER_HRCRDY_MSK

# define  RCU_IER_LOSCRDY_POS 1U
# define  RCU_IER_LOSCRDY_MSK BIT(RCU_IER_LOSCRDY_POS)
# define  RCU_IER_LOSCRDY     RCU_IER_LOSCRDY_MSK

# define  RCU_IER_LRCRDY_POS 0U
# define  RCU_IER_LRCRDY_MSK BIT(RCU_IER_LRCRDY_POS)
# define  RCU_IER_LRCRDY     RCU_IER_LRCRDY_MSK

/****************** Bit definition for RCU_IDR register ************************/

# define  RCU_IDR_CSSHOSC_POS 8U
# define  RCU_IDR_CSSHOSC_MSK BIT(RCU_IDR_CSSHOSC_POS)
# define  RCU_IDR_CSSHOSC     RCU_IDR_CSSHOSC_MSK

# define  RCU_IDR_PLL0RDY_POS 5U
# define  RCU_IDR_PLL0RDY_MSK BIT(RCU_IDR_PLL0RDY_POS)
# define  RCU_IDR_PLL0RDY     RCU_IDR_PLL0RDY_MSK

# define  RCU_IDR_HRC48RDY_POS 4U
# define  RCU_IDR_HRC48RDY_MSK BIT(RCU_IDR_HRC48RDY_POS)
# define  RCU_IDR_HRC48RDY     RCU_IDR_HRC48RDY_MSK

# define  RCU_IDR_HOSCRDY_POS 3U
# define  RCU_IDR_HOSCRDY_MSK BIT(RCU_IDR_HOSCRDY_POS)
# define  RCU_IDR_HOSCRDY     RCU_IDR_HOSCRDY_MSK

# define  RCU_IDR_HRCRDY_POS 2U
# define  RCU_IDR_HRCRDY_MSK BIT(RCU_IDR_HRCRDY_POS)
# define  RCU_IDR_HRCRDY     RCU_IDR_HRCRDY_MSK

# define  RCU_IDR_LOSCRDY_POS 1U
# define  RCU_IDR_LOSCRDY_MSK BIT(RCU_IDR_LOSCRDY_POS)
# define  RCU_IDR_LOSCRDY     RCU_IDR_LOSCRDY_MSK

# define  RCU_IDR_LRCRDY_POS 0U
# define  RCU_IDR_LRCRDY_MSK BIT(RCU_IDR_LRCRDY_POS)
# define  RCU_IDR_LRCRDY     RCU_IDR_LRCRDY_MSK

/****************** Bit definition for RCU_IVS register ************************/

# define  RCU_IVS_CSSHOSC_POS 8U
# define  RCU_IVS_CSSHOSC_MSK BIT(RCU_IVS_CSSHOSC_POS)
# define  RCU_IVS_CSSHOSC     RCU_IVS_CSSHOSC_MSK

# define  RCU_IVS_PLL0RDY_POS 5U
# define  RCU_IVS_PLL0RDY_MSK BIT(RCU_IVS_PLL0RDY_POS)
# define  RCU_IVS_PLL0RDY     RCU_IVS_PLL0RDY_MSK

# define  RCU_IVS_HRC48RDY_POS 4U
# define  RCU_IVS_HRC48RDY_MSK BIT(RCU_IVS_HRC48RDY_POS)
# define  RCU_IVS_HRC48RDY     RCU_IVS_HRC48RDY_MSK

# define  RCU_IVS_HOSCRDY_POS 3U
# define  RCU_IVS_HOSCRDY_MSK BIT(RCU_IVS_HOSCRDY_POS)
# define  RCU_IVS_HOSCRDY     RCU_IVS_HOSCRDY_MSK

# define  RCU_IVS_HRCRDY_POS 2U
# define  RCU_IVS_HRCRDY_MSK BIT(RCU_IVS_HRCRDY_POS)
# define  RCU_IVS_HRCRDY     RCU_IVS_HRCRDY_MSK

# define  RCU_IVS_LOSCRDY_POS 1U
# define  RCU_IVS_LOSCRDY_MSK BIT(RCU_IVS_LOSCRDY_POS)
# define  RCU_IVS_LOSCRDY     RCU_IVS_LOSCRDY_MSK

# define  RCU_IVS_LRCRDY_POS 0U
# define  RCU_IVS_LRCRDY_MSK BIT(RCU_IVS_LRCRDY_POS)
# define  RCU_IVS_LRCRDY     RCU_IVS_LRCRDY_MSK

/****************** Bit definition for RCU_RIF register ************************/

# define  RCU_RIF_CSSHOSC_POS 8U
# define  RCU_RIF_CSSHOSC_MSK BIT(RCU_RIF_CSSHOSC_POS)
# define  RCU_RIF_CSSHOSC     RCU_RIF_CSSHOSC_MSK

# define  RCU_RIF_PLL0RDY_POS 5U
# define  RCU_RIF_PLL0RDY_MSK BIT(RCU_RIF_PLL0RDY_POS)
# define  RCU_RIF_PLL0RDY     RCU_RIF_PLL0RDY_MSK

# define  RCU_RIF_HRC48RDY_POS 4U
# define  RCU_RIF_HRC48RDY_MSK BIT(RCU_RIF_HRC48RDY_POS)
# define  RCU_RIF_HRC48RDY     RCU_RIF_HRC48RDY_MSK

# define  RCU_RIF_HOSCRDY_POS 3U
# define  RCU_RIF_HOSCRDY_MSK BIT(RCU_RIF_HOSCRDY_POS)
# define  RCU_RIF_HOSCRDY     RCU_RIF_HOSCRDY_MSK

# define  RCU_RIF_HRCRDY_POS 2U
# define  RCU_RIF_HRCRDY_MSK BIT(RCU_RIF_HRCRDY_POS)
# define  RCU_RIF_HRCRDY     RCU_RIF_HRCRDY_MSK

# define  RCU_RIF_LOSCRDY_POS 1U
# define  RCU_RIF_LOSCRDY_MSK BIT(RCU_RIF_LOSCRDY_POS)
# define  RCU_RIF_LOSCRDY     RCU_RIF_LOSCRDY_MSK

# define  RCU_RIF_LRCRDY_POS 0U
# define  RCU_RIF_LRCRDY_MSK BIT(RCU_RIF_LRCRDY_POS)
# define  RCU_RIF_LRCRDY     RCU_RIF_LRCRDY_MSK

/****************** Bit definition for RCU_IFM register ************************/

# define  RCU_IFM_CSSHOSC_POS 8U
# define  RCU_IFM_CSSHOSC_MSK BIT(RCU_IFM_CSSHOSC_POS)
# define  RCU_IFM_CSSHOSC     RCU_IFM_CSSHOSC_MSK

# define  RCU_IFM_PLL0RDY_POS 5U
# define  RCU_IFM_PLL0RDY_MSK BIT(RCU_IFM_PLL0RDY_POS)
# define  RCU_IFM_PLL0RDY     RCU_IFM_PLL0RDY_MSK

# define  RCU_IFM_HRC48RDY_POS 4U
# define  RCU_IFM_HRC48RDY_MSK BIT(RCU_IFM_HRC48RDY_POS)
# define  RCU_IFM_HRC48RDY     RCU_IFM_HRC48RDY_MSK

# define  RCU_IFM_HOSCRDY_POS 3U
# define  RCU_IFM_HOSCRDY_MSK BIT(RCU_IFM_HOSCRDY_POS)
# define  RCU_IFM_HOSCRDY     RCU_IFM_HOSCRDY_MSK

# define  RCU_IFM_HRCRDY_POS 2U
# define  RCU_IFM_HRCRDY_MSK BIT(RCU_IFM_HRCRDY_POS)
# define  RCU_IFM_HRCRDY     RCU_IFM_HRCRDY_MSK

# define  RCU_IFM_LOSCRDY_POS 1U
# define  RCU_IFM_LOSCRDY_MSK BIT(RCU_IFM_LOSCRDY_POS)
# define  RCU_IFM_LOSCRDY     RCU_IFM_LOSCRDY_MSK

# define  RCU_IFM_LRCRDY_POS 0U
# define  RCU_IFM_LRCRDY_MSK BIT(RCU_IFM_LRCRDY_POS)
# define  RCU_IFM_LRCRDY     RCU_IFM_LRCRDY_MSK

/****************** Bit definition for RCU_ICR register ************************/

# define  RCU_ICR_CSSHOSC_POS 8U
# define  RCU_ICR_CSSHOSC_MSK BIT(RCU_ICR_CSSHOSC_POS)
# define  RCU_ICR_CSSHOSC     RCU_ICR_CSSHOSC_MSK

# define  RCU_ICR_PLL0RDY_POS 5U
# define  RCU_ICR_PLL0RDY_MSK BIT(RCU_ICR_PLL0RDY_POS)
# define  RCU_ICR_PLL0RDY     RCU_ICR_PLL0RDY_MSK

# define  RCU_ICR_HRC48RDY_POS 4U
# define  RCU_ICR_HRC48RDY_MSK BIT(RCU_ICR_HRC48RDY_POS)
# define  RCU_ICR_HRC48RDY     RCU_ICR_HRC48RDY_MSK

# define  RCU_ICR_HOSCRDY_POS 3U
# define  RCU_ICR_HOSCRDY_MSK BIT(RCU_ICR_HOSCRDY_POS)
# define  RCU_ICR_HOSCRDY     RCU_ICR_HOSCRDY_MSK

# define  RCU_ICR_HRCRDY_POS 2U
# define  RCU_ICR_HRCRDY_MSK BIT(RCU_ICR_HRCRDY_POS)
# define  RCU_ICR_HRCRDY     RCU_ICR_HRCRDY_MSK

# define  RCU_ICR_LOSCRDY_POS 1U
# define  RCU_ICR_LOSCRDY_MSK BIT(RCU_ICR_LOSCRDY_POS)
# define  RCU_ICR_LOSCRDY     RCU_ICR_LOSCRDY_MSK

# define  RCU_ICR_LRCRDY_POS 0U
# define  RCU_ICR_LRCRDY_MSK BIT(RCU_ICR_LRCRDY_POS)
# define  RCU_ICR_LRCRDY     RCU_ICR_LRCRDY_MSK

/****************** Bit definition for RCU_AHBRST register ************************/

# define  RCU_AHBRST_MBISTEN_POS 31U
# define  RCU_AHBRST_MBISTEN_MSK BIT(RCU_AHBRST_MBISTEN_POS)
# define  RCU_AHBRST_MBISTEN     RCU_AHBRST_MBISTEN_MSK

# define  RCU_AHBRST_GPDEN_POS 19U
# define  RCU_AHBRST_GPDEN_MSK BIT(RCU_AHBRST_GPDEN_POS)
# define  RCU_AHBRST_GPDEN     RCU_AHBRST_GPDEN_MSK

# define  RCU_AHBRST_GPCEN_POS 18U
# define  RCU_AHBRST_GPCEN_MSK BIT(RCU_AHBRST_GPCEN_POS)
# define  RCU_AHBRST_GPCEN     RCU_AHBRST_GPCEN_MSK

# define  RCU_AHBRST_GPBEN_POS 17U
# define  RCU_AHBRST_GPBEN_MSK BIT(RCU_AHBRST_GPBEN_POS)
# define  RCU_AHBRST_GPBEN     RCU_AHBRST_GPBEN_MSK

# define  RCU_AHBRST_GPAEN_POS 16U
# define  RCU_AHBRST_GPAEN_MSK BIT(RCU_AHBRST_GPAEN_POS)
# define  RCU_AHBRST_GPAEN     RCU_AHBRST_GPAEN_MSK

# define  RCU_AHBRST_CALCEN_POS 15U
# define  RCU_AHBRST_CALCEN_MSK BIT(RCU_AHBRST_CALCEN_POS)
# define  RCU_AHBRST_CALCEN     RCU_AHBRST_CALCEN_MSK

# define  RCU_AHBRST_USBEN_POS 14U
# define  RCU_AHBRST_USBEN_MSK BIT(RCU_AHBRST_USBEN_POS)
# define  RCU_AHBRST_USBEN     RCU_AHBRST_USBEN_MSK

# define  RCU_AHBRST_AESEN_POS 13U
# define  RCU_AHBRST_AESEN_MSK BIT(RCU_AHBRST_AESEN_POS)
# define  RCU_AHBRST_AESEN     RCU_AHBRST_AESEN_MSK

# define  RCU_AHBRST_CRCEN_POS 12U
# define  RCU_AHBRST_CRCEN_MSK BIT(RCU_AHBRST_CRCEN_POS)
# define  RCU_AHBRST_CRCEN     RCU_AHBRST_CRCEN_MSK

# define  RCU_AHBRST_MSWDEN_POS 11U
# define  RCU_AHBRST_MSWDEN_MSK BIT(RCU_AHBRST_MSWDEN_POS)
# define  RCU_AHBRST_MSWDEN     RCU_AHBRST_MSWDEN_MSK

# define  RCU_AHBRST_CSUEN_POS 10U
# define  RCU_AHBRST_CSUEN_MSK BIT(RCU_AHBRST_CSUEN_POS)
# define  RCU_AHBRST_CSUEN     RCU_AHBRST_CSUEN_MSK

# define  RCU_AHBRST_KBCUEN_POS 7U
# define  RCU_AHBRST_KBCUEN_MSK BIT(RCU_AHBRST_KBCUEN_POS)
# define  RCU_AHBRST_KBCUEN     RCU_AHBRST_KBCUEN_MSK

# define  RCU_AHBRST_RTCEN_POS 6U
# define  RCU_AHBRST_RTCEN_MSK BIT(RCU_AHBRST_RTCEN_POS)
# define  RCU_AHBRST_RTCEN     RCU_AHBRST_RTCEN_MSK

# define  RCU_AHBRST_DMA1EN_POS 0U
# define  RCU_AHBRST_DMA1EN_MSK BIT(RCU_AHBRST_DMA1EN_POS)
# define  RCU_AHBRST_DMA1EN     RCU_AHBRST_DMA1EN_MSK

/****************** Bit definition for RCU_APB1RST register ************************/

# define  RCU_APB1RST_I2C2EN_POS 22U
# define  RCU_APB1RST_I2C2EN_MSK BIT(RCU_APB1RST_I2C2EN_POS)
# define  RCU_APB1RST_I2C2EN     RCU_APB1RST_I2C2EN_MSK

# define  RCU_APB1RST_I2C1EN_POS 21U
# define  RCU_APB1RST_I2C1EN_MSK BIT(RCU_APB1RST_I2C1EN_POS)
# define  RCU_APB1RST_I2C1EN     RCU_APB1RST_I2C1EN_MSK

# define  RCU_APB1RST_UART4EN_POS 19U
# define  RCU_APB1RST_UART4EN_MSK BIT(RCU_APB1RST_UART4EN_POS)
# define  RCU_APB1RST_UART4EN     RCU_APB1RST_UART4EN_MSK

# define  RCU_APB1RST_UART3EN_POS 18U
# define  RCU_APB1RST_UART3EN_MSK BIT(RCU_APB1RST_UART3EN_POS)
# define  RCU_APB1RST_UART3EN     RCU_APB1RST_UART3EN_MSK

# define  RCU_APB1RST_UART2EN_POS 17U
# define  RCU_APB1RST_UART2EN_MSK BIT(RCU_APB1RST_UART2EN_POS)
# define  RCU_APB1RST_UART2EN     RCU_APB1RST_UART2EN_MSK

# define  RCU_APB1RST_SPI3EN_POS 15U
# define  RCU_APB1RST_SPI3EN_MSK BIT(RCU_APB1RST_SPI3EN_POS)
# define  RCU_APB1RST_SPI3EN     RCU_APB1RST_SPI3EN_MSK

# define  RCU_APB1RST_SPI2EN_POS 14U
# define  RCU_APB1RST_SPI2EN_MSK BIT(RCU_APB1RST_SPI2EN_POS)
# define  RCU_APB1RST_SPI2EN     RCU_APB1RST_SPI2EN_MSK

# define  RCU_APB1RST_WWDTEN_POS 11U
# define  RCU_APB1RST_WWDTEN_MSK BIT(RCU_APB1RST_WWDTEN_POS)
# define  RCU_APB1RST_WWDTEN     RCU_APB1RST_WWDTEN_MSK

# define  RCU_APB1RST_BS16T1EN_POS 4U
# define  RCU_APB1RST_BS16T1EN_MSK BIT(RCU_APB1RST_BS16T1EN_POS)
# define  RCU_APB1RST_BS16T1EN     RCU_APB1RST_BS16T1EN_MSK

# define  RCU_APB1RST_GP16C4T3EN_POS 3U
# define  RCU_APB1RST_GP16C4T3EN_MSK BIT(RCU_APB1RST_GP16C4T3EN_POS)
# define  RCU_APB1RST_GP16C4T3EN     RCU_APB1RST_GP16C4T3EN_MSK

# define  RCU_APB1RST_GP16C4T2EN_POS 2U
# define  RCU_APB1RST_GP16C4T2EN_MSK BIT(RCU_APB1RST_GP16C4T2EN_POS)
# define  RCU_APB1RST_GP16C4T2EN     RCU_APB1RST_GP16C4T2EN_MSK

# define  RCU_APB1RST_GP16C4T1EN_POS 1U
# define  RCU_APB1RST_GP16C4T1EN_MSK BIT(RCU_APB1RST_GP16C4T1EN_POS)
# define  RCU_APB1RST_GP16C4T1EN     RCU_APB1RST_GP16C4T1EN_MSK

# define  RCU_APB1RST_GP32C4T1EN_POS 0U
# define  RCU_APB1RST_GP32C4T1EN_MSK BIT(RCU_APB1RST_GP32C4T1EN_POS)
# define  RCU_APB1RST_GP32C4T1EN     RCU_APB1RST_GP32C4T1EN_MSK

/****************** Bit definition for RCU_APB2RST register ************************/

# define  RCU_APB2RST_CMPEN_POS 23U
# define  RCU_APB2RST_CMPEN_MSK BIT(RCU_APB2RST_CMPEN_POS)
# define  RCU_APB2RST_CMPEN     RCU_APB2RST_CMPEN_MSK

# define  RCU_APB2RST_GP16C2T4EN_POS 19U
# define  RCU_APB2RST_GP16C2T4EN_MSK BIT(RCU_APB2RST_GP16C2T4EN_POS)
# define  RCU_APB2RST_GP16C2T4EN     RCU_APB2RST_GP16C2T4EN_MSK

# define  RCU_APB2RST_GP16C2T3EN_POS 18U
# define  RCU_APB2RST_GP16C2T3EN_MSK BIT(RCU_APB2RST_GP16C2T3EN_POS)
# define  RCU_APB2RST_GP16C2T3EN     RCU_APB2RST_GP16C2T3EN_MSK

# define  RCU_APB2RST_GP16C2T2EN_POS 17U
# define  RCU_APB2RST_GP16C2T2EN_MSK BIT(RCU_APB2RST_GP16C2T2EN_POS)
# define  RCU_APB2RST_GP16C2T2EN     RCU_APB2RST_GP16C2T2EN_MSK

# define  RCU_APB2RST_GP16C2T1EN_POS 16U
# define  RCU_APB2RST_GP16C2T1EN_MSK BIT(RCU_APB2RST_GP16C2T1EN_POS)
# define  RCU_APB2RST_GP16C2T1EN     RCU_APB2RST_GP16C2T1EN_MSK

# define  RCU_APB2RST_UART1EN_POS 14U
# define  RCU_APB2RST_UART1EN_MSK BIT(RCU_APB2RST_UART1EN_POS)
# define  RCU_APB2RST_UART1EN     RCU_APB2RST_UART1EN_MSK

# define  RCU_APB2RST_SPI1EN_POS 12U
# define  RCU_APB2RST_SPI1EN_MSK BIT(RCU_APB2RST_SPI1EN_POS)
# define  RCU_APB2RST_SPI1EN     RCU_APB2RST_SPI1EN_MSK

# define  RCU_APB2RST_AD16C4T1EN_POS 11U
# define  RCU_APB2RST_AD16C4T1EN_MSK BIT(RCU_APB2RST_AD16C4T1EN_POS)
# define  RCU_APB2RST_AD16C4T1EN     RCU_APB2RST_AD16C4T1EN_MSK

# define  RCU_APB2RST_ADCEN_POS 9U
# define  RCU_APB2RST_ADCEN_MSK BIT(RCU_APB2RST_ADCEN_POS)
# define  RCU_APB2RST_ADCEN     RCU_APB2RST_ADCEN_MSK

/****************** Bit definition for RCU_AHBEN register ************************/

# define  RCU_AHBEN_MBISTEN_POS 31U
# define  RCU_AHBEN_MBISTEN_MSK BIT(RCU_AHBEN_MBISTEN_POS)
# define  RCU_AHBEN_MBISTEN     RCU_AHBEN_MBISTEN_MSK

# define  RCU_AHBEN_GPDEN_POS 19U
# define  RCU_AHBEN_GPDEN_MSK BIT(RCU_AHBEN_GPDEN_POS)
# define  RCU_AHBEN_GPDEN     RCU_AHBEN_GPDEN_MSK

# define  RCU_AHBEN_GPCEN_POS 18U
# define  RCU_AHBEN_GPCEN_MSK BIT(RCU_AHBEN_GPCEN_POS)
# define  RCU_AHBEN_GPCEN     RCU_AHBEN_GPCEN_MSK

# define  RCU_AHBEN_GPBEN_POS 17U
# define  RCU_AHBEN_GPBEN_MSK BIT(RCU_AHBEN_GPBEN_POS)
# define  RCU_AHBEN_GPBEN     RCU_AHBEN_GPBEN_MSK

# define  RCU_AHBEN_GPAEN_POS 16U
# define  RCU_AHBEN_GPAEN_MSK BIT(RCU_AHBEN_GPAEN_POS)
# define  RCU_AHBEN_GPAEN     RCU_AHBEN_GPAEN_MSK

# define  RCU_AHBEN_CALCEN_POS 15U
# define  RCU_AHBEN_CALCEN_MSK BIT(RCU_AHBEN_CALCEN_POS)
# define  RCU_AHBEN_CALCEN     RCU_AHBEN_CALCEN_MSK

# define  RCU_AHBEN_USBEN_POS 14U
# define  RCU_AHBEN_USBEN_MSK BIT(RCU_AHBEN_USBEN_POS)
# define  RCU_AHBEN_USBEN     RCU_AHBEN_USBEN_MSK

# define  RCU_AHBEN_AESEN_POS 13U
# define  RCU_AHBEN_AESEN_MSK BIT(RCU_AHBEN_AESEN_POS)
# define  RCU_AHBEN_AESEN     RCU_AHBEN_AESEN_MSK

# define  RCU_AHBEN_CRCEN_POS 12U
# define  RCU_AHBEN_CRCEN_MSK BIT(RCU_AHBEN_CRCEN_POS)
# define    RCU_AHBEN_CRCEN     RCU_AHBEN_CRCEN_MSK

# define  RCU_AHBEN_MSWDEN_POS 11U
# define  RCU_AHBEN_MSWDEN_MSK BIT(RCU_AHBEN_MSWDEN_POS)
# define  RCU_AHBEN_MSWDEN     RCU_AHBEN_MSWDEN_MSK

# define  RCU_AHBEN_CSUEN_POS 10U
# define  RCU_AHBEN_CSUEN_MSK BIT(RCU_AHBEN_CSUEN_POS)
# define  RCU_AHBEN_CSUEN     RCU_AHBEN_CSUEN_MSK

# define  RCU_AHBEN_KBCUEN_POS 7U
# define  RCU_AHBEN_KBCUEN_MSK BIT(RCU_AHBEN_KBCUEN_POS)
# define  RCU_AHBEN_KBCUEN     RCU_AHBEN_KBCUEN_MSK

# define  RCU_AHBEN_RTCEN_POS 6U
# define  RCU_AHBEN_RTCEN_MSK BIT(RCU_AHBEN_RTCEN_POS)
# define  RCU_AHBEN_RTCEN     RCU_AHBEN_RTCEN_MSK

# define  RCU_AHBEN_DMA1EN_POS 0U
# define  RCU_AHBEN_DMA1EN_MSK BIT(RCU_AHBEN_DMA1EN_POS)
# define  RCU_AHBEN_DMA1EN     RCU_AHBEN_DMA1EN_MSK

/****************** Bit definition for RCU_APB1EN register ************************/

# define  RCU_APB1EN_I2C2EN_POS 22U
# define  RCU_APB1EN_I2C2EN_MSK BIT(RCU_APB1EN_I2C2EN_POS)
# define  RCU_APB1EN_I2C2EN     RCU_APB1EN_I2C2EN_MSK

# define  RCU_APB1EN_I2C1EN_POS 21U
# define  RCU_APB1EN_I2C1EN_MSK BIT(RCU_APB1EN_I2C1EN_POS)
# define  RCU_APB1EN_I2C1EN     RCU_APB1EN_I2C1EN_MSK

# define  RCU_APB1EN_UART4EN_POS 19U
# define  RCU_APB1EN_UART4EN_MSK BIT(RCU_APB1EN_UART4EN_POS)
# define  RCU_APB1EN_UART4EN     RCU_APB1EN_UART4EN_MSK

# define  RCU_APB1EN_UART3EN_POS 18U
# define  RCU_APB1EN_UART3EN_MSK BIT(RCU_APB1EN_UART3EN_POS)
# define  RCU_APB1EN_UART3EN     RCU_APB1EN_UART3EN_MSK

# define  RCU_APB1EN_UART2EN_POS 17U
# define  RCU_APB1EN_UART2EN_MSK BIT(RCU_APB1EN_UART2EN_POS)
# define  RCU_APB1EN_UART2EN     RCU_APB1EN_UART2EN_MSK

# define  RCU_APB1EN_SPI3EN_POS 15U
# define  RCU_APB1EN_SPI3EN_MSK BIT(RCU_APB1EN_SPI3EN_POS)
# define  RCU_APB1EN_SPI3EN     RCU_APB1EN_SPI3EN_MSK

# define  RCU_APB1EN_SPI2EN_POS 14U
# define  RCU_APB1EN_SPI2EN_MSK BIT(RCU_APB1EN_SPI2EN_POS)
# define  RCU_APB1EN_SPI2EN     RCU_APB1EN_SPI2EN_MSK

# define  RCU_APB1EN_WWDTEN_POS 11U
# define  RCU_APB1EN_WWDTEN_MSK BIT(RCU_APB1EN_WWDTEN_POS)
# define  RCU_APB1EN_WWDTEN     RCU_APB1EN_WWDTEN_MSK

# define  RCU_APB1EN_BS16T1EN_POS 4U
# define  RCU_APB1EN_BS16T1EN_MSK BIT(RCU_APB1EN_BS16T1EN_POS)
# define  RCU_APB1EN_BS16T1EN     RCU_APB1EN_BS16T1EN_MSK

# define  RCU_APB1EN_GP16C4T3EN_POS 3U
# define  RCU_APB1EN_GP16C4T3EN_MSK BIT(RCU_APB1EN_GP16C4T3EN_POS)
# define  RCU_APB1EN_GP16C4T3EN     RCU_APB1EN_GP16C4T3EN_MSK

# define  RCU_APB1EN_GP16C4T2EN_POS 2U
# define  RCU_APB1EN_GP16C4T2EN_MSK BIT(RCU_APB1EN_GP16C4T2EN_POS)
# define  RCU_APB1EN_GP16C4T2EN     RCU_APB1EN_GP16C4T2EN_MSK

# define  RCU_APB1EN_GP16C4T1EN_POS 1U
# define  RCU_APB1EN_GP16C4T1EN_MSK BIT(RCU_APB1EN_GP16C4T1EN_POS)
# define  RCU_APB1EN_GP16C4T1EN     RCU_APB1EN_GP16C4T1EN_MSK

# define  RCU_APB1EN_GP32C4T1EN_POS 0U
# define  RCU_APB1EN_GP32C4T1EN_MSK BIT(RCU_APB1EN_GP32C4T1EN_POS)
# define  RCU_APB1EN_GP32C4T1EN     RCU_APB1EN_GP32C4T1EN_MSK

/****************** Bit definition for RCU_APB2EN register ************************/

# define  RCU_APB2EN_CMPEN_POS 23U
# define  RCU_APB2EN_CMPEN_MSK BIT(RCU_APB2EN_CMPEN_POS)
# define  RCU_APB2EN_CMPEN     RCU_APB2EN_CMPEN_MSK

# define  RCU_APB2EN_GP16C2T4EN_POS 19U
# define  RCU_APB2EN_GP16C2T4EN_MSK BIT(RCU_APB2EN_GP16C2T4EN_POS)
# define  RCU_APB2EN_GP16C2T4EN     RCU_APB2EN_GP16C2T4EN_MSK

# define  RCU_APB2EN_GP16C2T3EN_POS 18U
# define  RCU_APB2EN_GP16C2T3EN_MSK BIT(RCU_APB2EN_GP16C2T3EN_POS)
# define  RCU_APB2EN_GP16C2T3EN     RCU_APB2EN_GP16C2T3EN_MSK

# define  RCU_APB2EN_GP16C2T2EN_POS 17U
# define  RCU_APB2EN_GP16C2T2EN_MSK BIT(RCU_APB2EN_GP16C2T2EN_POS)
# define  RCU_APB2EN_GP16C2T2EN     RCU_APB2EN_GP16C2T2EN_MSK

# define  RCU_APB2EN_GP16C2T1EN_POS 16U
# define  RCU_APB2EN_GP16C2T1EN_MSK BIT(RCU_APB2EN_GP16C2T1EN_POS)
# define  RCU_APB2EN_GP16C2T1EN     RCU_APB2EN_GP16C2T1EN_MSK

# define  RCU_APB2EN_UART1EN_POS 14U
# define  RCU_APB2EN_UART1EN_MSK BIT(RCU_APB2EN_UART1EN_POS)
# define  RCU_APB2EN_UART1EN     RCU_APB2EN_UART1EN_MSK

# define  RCU_APB2EN_SPI1EN_POS 12U
# define  RCU_APB2EN_SPI1EN_MSK BIT(RCU_APB2EN_SPI1EN_POS)
# define  RCU_APB2EN_SPI1EN     RCU_APB2EN_SPI1EN_MSK

# define  RCU_APB2EN_AD16C4T1EN_POS 11U
# define  RCU_APB2EN_AD16C4T1EN_MSK BIT(RCU_APB2EN_AD16C4T1EN_POS)
# define  RCU_APB2EN_AD16C4T1EN     RCU_APB2EN_AD16C4T1EN_MSK

# define  RCU_APB2EN_ADCEN_POS 9U
# define  RCU_APB2EN_ADCEN_MSK BIT(RCU_APB2EN_ADCEN_POS)
# define  RCU_APB2EN_ADCEN     RCU_APB2EN_ADCEN_MSK

/****************** Bit definition for RCU_AHBSL register ************************/

# define  RCU_AHBSL_MBISTEN_POS 31U
# define  RCU_AHBSL_MBISTEN_MSK BIT(RCU_AHBSL_MBISTEN_POS)
# define  RCU_AHBSL_MBISTEN     RCU_AHBSL_MBISTEN_MSK

# define  RCU_AHBSL_GPDEN_POS 19U
# define  RCU_AHBSL_GPDEN_MSK BIT(RCU_AHBSL_GPDEN_POS)
# define  RCU_AHBSL_GPDEN     RCU_AHBSL_GPDEN_MSK

# define  RCU_AHBSL_GPCEN_POS 18U
# define  RCU_AHBSL_GPCEN_MSK BIT(RCU_AHBSL_GPCEN_POS)
# define  RCU_AHBSL_GPCEN     RCU_AHBSL_GPCEN_MSK

# define  RCU_AHBSL_GPBEN_POS 17U
# define  RCU_AHBSL_GPBEN_MSK BIT(RCU_AHBSL_GPBEN_POS)
# define  RCU_AHBSL_GPBEN     RCU_AHBSL_GPBEN_MSK

# define  RCU_AHBSL_GPAEN_POS 16U
# define  RCU_AHBSL_GPAEN_MSK BIT(RCU_AHBSL_GPAEN_POS)
# define  RCU_AHBSL_GPAEN     RCU_AHBSL_GPAEN_MSK

# define  RCU_AHBSL_CALCEN_POS 15U
# define  RCU_AHBSL_CALCEN_MSK BIT(RCU_AHBSL_CALCEN_POS)
# define  RCU_AHBSL_CALCEN     RCU_AHBSL_CALCEN_MSK

# define  RCU_AHBSL_USBEN_POS 14U
# define  RCU_AHBSL_USBEN_MSK BIT(RCU_AHBSL_USBEN_POS)
# define  RCU_AHBSL_USBEN     RCU_AHBSL_USBEN_MSK

# define  RCU_AHBSL_AESEN_POS 13U
# define  RCU_AHBSL_AESEN_MSK BIT(RCU_AHBSL_AESEN_POS)
# define  RCU_AHBSL_AESEN     RCU_AHBSL_AESEN_MSK

# define  RCU_AHBSL_CRCEN_POS 12U
# define  RCU_AHBSL_CRCEN_MSK BIT(RCU_AHBSL_CRCEN_POS)
# define  RCU_AHBSL_CRCEN     RCU_AHBSL_CRCEN_MSK

# define  RCU_AHBSL_MSWDEN_POS 11U
# define  RCU_AHBSL_MSWDEN_MSK BIT(RCU_AHBSL_MSWDEN_POS)
# define  RCU_AHBSL_MSWDEN     RCU_AHBSL_MSWDEN_MSK

# define  RCU_AHBSL_CSUEN_POS 10U
# define  RCU_AHBSL_CSUEN_MSK BIT(RCU_AHBSL_CSUEN_POS)
# define  RCU_AHBSL_CSUEN     RCU_AHBSL_CSUEN_MSK

# define  RCU_AHBSL_KBCUEN_POS 7U
# define  RCU_AHBSL_KBCUEN_MSK BIT(RCU_AHBSL_KBCUEN_POS)
# define  RCU_AHBSL_KBCUEN     RCU_AHBSL_KBCUEN_MSK

# define  RCU_AHBSL_RTCEN_POS 6U
# define  RCU_AHBSL_RTCEN_MSK BIT(RCU_AHBSL_RTCEN_POS)
# define  RCU_AHBSL_RTCEN     RCU_AHBSL_RTCEN_MSK

# define  RCU_AHBSL_DMA1EN_POS 0U
# define  RCU_AHBSL_DMA1EN_MSK BIT(RCU_AHBSL_DMA1EN_POS)
# define  RCU_AHBSL_DMA1EN     RCU_AHBSL_DMA1EN_MSK

/****************** Bit definition for RCU_APB1SL register ************************/

# define  RCU_APB1SL_I2C2EN_POS 22U
# define  RCU_APB1SL_I2C2EN_MSK BIT(RCU_APB1SL_I2C2EN_POS)
# define  RCU_APB1SL_I2C2EN     RCU_APB1SL_I2C2EN_MSK

# define  RCU_APB1SL_I2C1EN_POS 21U
# define  RCU_APB1SL_I2C1EN_MSK BIT(RCU_APB1SL_I2C1EN_POS)
# define  RCU_APB1SL_I2C1EN     RCU_APB1SL_I2C1EN_MSK

# define  RCU_APB1SL_UART4EN_POS 19U
# define  RCU_APB1SL_UART4EN_MSK BIT(RCU_APB1SL_UART4EN_POS)
# define  RCU_APB1SL_UART4EN     RCU_APB1SL_UART4EN_MSK

# define  RCU_APB1SL_UART3EN_POS 18U
# define  RCU_APB1SL_UART3EN_MSK BIT(RCU_APB1SL_UART3EN_POS)
# define  RCU_APB1SL_UART3EN     RCU_APB1SL_UART3EN_MSK

# define  RCU_APB1SL_UART2EN_POS 17U
# define  RCU_APB1SL_UART2EN_MSK BIT(RCU_APB1SL_UART2EN_POS)
# define  RCU_APB1SL_UART2EN     RCU_APB1SL_UART2EN_MSK

# define  RCU_APB1SL_SPI3EN_POS 15U
# define  RCU_APB1SL_SPI3EN_MSK BIT(RCU_APB1SL_SPI3EN_POS)
# define  RCU_APB1SL_SPI3EN     RCU_APB1SL_SPI3EN_MSK

# define  RCU_APB1SL_SPI2EN_POS 14U
# define  RCU_APB1SL_SPI2EN_MSK BIT(RCU_APB1SL_SPI2EN_POS)
# define  RCU_APB1SL_SPI2EN     RCU_APB1SL_SPI2EN_MSK

# define  RCU_APB1SL_WWDTEN_POS 11U
# define  RCU_APB1SL_WWDTEN_MSK BIT(RCU_APB1SL_WWDTEN_POS)
# define  RCU_APB1SL_WWDTEN     RCU_APB1SL_WWDTEN_MSK

# define  RCU_APB1SL_BS16T1EN_POS 4U
# define  RCU_APB1SL_BS16T1EN_MSK BIT(RCU_APB1SL_BS16T1EN_POS)
# define  RCU_APB1SL_BS16T1EN     RCU_APB1SL_BS16T1EN_MSK

# define  RCU_APB1SL_GP16C4T3EN_POS 3U
# define  RCU_APB1SL_GP16C4T3EN_MSK BIT(RCU_APB1SL_GP16C4T3EN_POS)
# define  RCU_APB1SL_GP16C4T3EN     RCU_APB1SL_GP16C4T3EN_MSK

# define  RCU_APB1SL_GP16C4T2EN_POS 2U
# define  RCU_APB1SL_GP16C4T2EN_MSK BIT(RCU_APB1SL_GP16C4T2EN_POS)
# define  RCU_APB1SL_GP16C4T2EN     RCU_APB1SL_GP16C4T2EN_MSK

# define  RCU_APB1SL_GP16C4T1EN_POS 1U
# define  RCU_APB1SL_GP16C4T1EN_MSK BIT(RCU_APB1SL_GP16C4T1EN_POS)
# define  RCU_APB1SL_GP16C4T1EN     RCU_APB1SL_GP16C4T1EN_MSK

# define  RCU_APB1SL_GP32C4T1EN_POS 0U
# define  RCU_APB1SL_GP32C4T1EN_MSK BIT(RCU_APB1SL_GP32C4T1EN_POS)
# define  RCU_APB1SL_GP32C4T1EN     RCU_APB1SL_GP32C4T1EN_MSK

/****************** Bit definition for RCU_APB2SL register ************************/

# define  RCU_APB2SL_CMPEN_POS 23U
# define  RCU_APB2SL_CMPEN_MSK BIT(RCU_APB2SL_CMPEN_POS)
# define  RCU_APB2SL_CMPEN     RCU_APB2SL_CMPEN_MSK

# define  RCU_APB2SL_GP16C2T4EN_POS 19U
# define  RCU_APB2SL_GP16C2T4EN_MSK BIT(RCU_APB2SL_GP16C2T4EN_POS)
# define  RCU_APB2SL_GP16C2T4EN     RCU_APB2SL_GP16C2T4EN_MSK

# define  RCU_APB2SL_GP16C2T3EN_POS 18U
# define  RCU_APB2SL_GP16C2T3EN_MSK BIT(RCU_APB2SL_GP16C2T3EN_POS)
# define  RCU_APB2SL_GP16C2T3EN     RCU_APB2SL_GP16C2T3EN_MSK

# define  RCU_APB2SL_GP16C2T2EN_POS 17U
# define  RCU_APB2SL_GP16C2T2EN_MSK BIT(RCU_APB2SL_GP16C2T2EN_POS)
# define  RCU_APB2SL_GP16C2T2EN     RCU_APB2SL_GP16C2T2EN_MSK

# define  RCU_APB2SL_GP16C2T1EN_POS 16U
# define  RCU_APB2SL_GP16C2T1EN_MSK BIT(RCU_APB2SL_GP16C2T1EN_POS)
# define  RCU_APB2SL_GP16C2T1EN     RCU_APB2SL_GP16C2T1EN_MSK

# define  RCU_APB2SL_UART1EN_POS 14U
# define  RCU_APB2SL_UART1EN_MSK BIT(RCU_APB2SL_UART1EN_POS)
# define  RCU_APB2SL_UART1EN     RCU_APB2SL_UART1EN_MSK

# define  RCU_APB2SL_SPI1EN_POS 12U
# define  RCU_APB2SL_SPI1EN_MSK BIT(RCU_APB2SL_SPI1EN_POS)
# define  RCU_APB2SL_SPI1EN     RCU_APB2SL_SPI1EN_MSK

# define  RCU_APB2SL_AD16C4T1EN_POS 11U
# define  RCU_APB2SL_AD16C4T1EN_MSK BIT(RCU_APB2SL_AD16C4T1EN_POS)
# define  RCU_APB2SL_AD16C4T1EN     RCU_APB2SL_AD16C4T1EN_MSK

# define  RCU_APB2SL_ADCEN_POS 9U
# define  RCU_APB2SL_ADCEN_MSK BIT(RCU_APB2SL_ADCEN_POS)
# define  RCU_APB2SL_ADCEN     RCU_APB2SL_ADCEN_MSK

/****************** Bit definition for RCU_LCON register ************************/

# define  RCU_LCON_LOSCBYP_POS 10U
# define  RCU_LCON_LOSCBYP_MSK BIT(RCU_LCON_LOSCBYP_POS)
# define  RCU_LCON_LOSCBYP     RCU_LCON_LOSCBYP_MSK

# define  RCU_LCON_LOSCRDY_POS 9U
# define  RCU_LCON_LOSCRDY_MSK BIT(RCU_LCON_LOSCRDY_POS)
# define  RCU_LCON_LOSCRDY     RCU_LCON_LOSCRDY_MSK

# define  RCU_LCON_LOSCON_POS 8U
# define  RCU_LCON_LOSCON_MSK BIT(RCU_LCON_LOSCON_POS)
# define  RCU_LCON_LOSCON     RCU_LCON_LOSCON_MSK

# define  RCU_LCON_LRCRDY_POS 1U
# define  RCU_LCON_LRCRDY_MSK BIT(RCU_LCON_LRCRDY_POS)
# define  RCU_LCON_LRCRDY     RCU_LCON_LRCRDY_MSK

# define  RCU_LCON_LRCON_POS 0U
# define  RCU_LCON_LRCON_MSK BIT(RCU_LCON_LRCON_POS)
# define  RCU_LCON_LRCON     RCU_LCON_LRCON_MSK

/****************** Bit definition for RCU_RSTF register ************************/

# define  RCU_RSTF_LPRSTF_POS 23U
# define  RCU_RSTF_LPRSTF_MSK BIT(RCU_RSTF_LPRSTF_POS)
# define  RCU_RSTF_LPRSTF     RCU_RSTF_LPRSTF_MSK

# define  RCU_RSTF_WWDTRSTF_POS 22U
# define  RCU_RSTF_WWDTRSTF_MSK BIT(RCU_RSTF_WWDTRSTF_POS)
# define  RCU_RSTF_WWDTRSTF     RCU_RSTF_WWDTRSTF_MSK

# define  RCU_RSTF_IWDTRSTF_POS 21U
# define  RCU_RSTF_IWDTRSTF_MSK BIT(RCU_RSTF_IWDTRSTF_POS)
# define  RCU_RSTF_IWDTRSTF     RCU_RSTF_IWDTRSTF_MSK

# define  RCU_RSTF_SWRSTF_POS 20U
# define  RCU_RSTF_SWRSTF_MSK BIT(RCU_RSTF_SWRSTF_POS)
# define  RCU_RSTF_SWRSTF     RCU_RSTF_SWRSTF_MSK

# define  RCU_RSTF_OBLRSTF_POS 19U
# define  RCU_RSTF_OBLRSTF_MSK BIT(RCU_RSTF_OBLRSTF_POS)
# define  RCU_RSTF_OBLRSTF     RCU_RSTF_OBLRSTF_MSK

# define  RCU_RSTF_NRSTF_POS 18U
# define  RCU_RSTF_NRSTF_MSK BIT(RCU_RSTF_NRSTF_POS)
# define  RCU_RSTF_NRSTF     RCU_RSTF_NRSTF_MSK

# define  RCU_RSTF_BORRSTF_POS 17U
# define  RCU_RSTF_BORRSTF_MSK BIT(RCU_RSTF_BORRSTF_POS)
# define  RCU_RSTF_BORRSTF     RCU_RSTF_BORRSTF_MSK

# define  RCU_RSTF_PORRSTF_POS 16U
# define  RCU_RSTF_PORRSTF_MSK BIT(RCU_RSTF_PORRSTF_POS)
# define  RCU_RSTF_PORRSTF     RCU_RSTF_PORRSTF_MSK

# define  RCU_RSTF_CLRFLG_POS 15U
# define  RCU_RSTF_CLRFLG_MSK BIT(RCU_RSTF_CLRFLG_POS)
# define  RCU_RSTF_CLRFLG     RCU_RSTF_CLRFLG_MSK

/****************** Bit definition for RCU_CKTRIM register ************************/

# define  RCU_CKTRIM_HRC48UE_POS 31U
# define  RCU_CKTRIM_HRC48UE_MSK BIT(RCU_CKTRIM_HRC48UE_POS)
# define  RCU_CKTRIM_HRC48UE     RCU_CKTRIM_HRC48UE_MSK

# define  RCU_CKTRIM_HRC48SEL_POS 30U
# define  RCU_CKTRIM_HRC48SEL_MSK BIT(RCU_CKTRIM_HRC48SEL_POS)
# define  RCU_CKTRIM_HRC48SEL     RCU_CKTRIM_HRC48SEL_MSK

# define  RCU_CKTRIM_HRCSEL_POS 28U
# define  RCU_CKTRIM_HRCSEL_MSK BIT(RCU_CKTRIM_HRCSEL_POS)
# define  RCU_CKTRIM_HRCSEL     RCU_CKTRIM_HRCSEL_MSK

# define  RCU_CKTRIM_HRC48TRIM_POSS 16U
# define  RCU_CKTRIM_HRC48TRIM_POSE 24U
# define  RCU_CKTRIM_HRC48TRIM_MSK  BITS(RCU_CKTRIM_HRC48TRIM_POSS, RCU_CKTRIM_HRC48TRIM_POSE)
# define  RCU_CKTRIM_HRC48TRIM      RCU_CKTRIM_HRC48TRIM_MSK

# define  RCU_CKTRIM_HRCTRIM_POSS 8U
# define  RCU_CKTRIM_HRCTRIM_POSE 15U
# define  RCU_CKTRIM_HRCTRIM_MSK  BITS(RCU_CKTRIM_HRCTRIM_POSS, RCU_CKTRIM_HRCTRIM_POSE)
# define  RCU_CKTRIM_HRCTRIM      RCU_CKTRIM_HRCTRIM_MSK

typedef struct
{
    __IO uint32_t CON;                      // 0x000
    __IO uint32_t CFG;                      // 0x004
    __IO uint32_t PLL0;                     // 0x008
    __IO uint32_t CFG2;                     // 0x00c
    __O  uint32_t IER;                      // 0x010
    __O  uint32_t IDR;                      // 0x014
    __I  uint32_t IVS;                      // 0x018
    __I  uint32_t RIF;                      // 0x01c
    __I  uint32_t IFM;                      // 0x020
    __O  uint32_t ICR;                      // 0x024
    __IO uint32_t RESERVED0[2];             // 0x028-0x02c
    __IO uint32_t AHBRST;                   // 0x030
    __IO uint32_t APB1RST;                  // 0x034
    __IO uint32_t APB2RST;                  // 0x038
    __IO uint32_t AHBEN;                    // 0x03c
    __IO uint32_t APB1EN;                   // 0x040
    __IO uint32_t APB2EN;                   // 0x044
    __IO uint32_t AHBSL;                    // 0x048
    __IO uint32_t APB1SL;                   // 0x04c
    __IO uint32_t APB2SL;                   // 0x050
    __IO uint32_t RESERVED1[3];             // 0x054-0x05c
    __IO uint32_t LCON;                     // 0x060
    __IO uint32_t RSTF;                     // 0x064
    __IO uint32_t RESERVED2[10];            // 0x068-0x08c
    __IO uint32_t CKTRIM;                   // 0x090 
} RCU_TypeDef;


#endif
