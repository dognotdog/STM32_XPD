/**
  ******************************************************************************
  * @file    xpd_syscfg.h
  * @author  Benedek Kupper
  * @version V0.1
  * @date    2017-02-07
  * @brief   STM32 eXtensible Peripheral Drivers System Configuration Module
  *
  *  This file is part of STM32_XPD.
  *
  *  STM32_XPD is free software: you can redistribute it and/or modify
  *  it under the terms of the GNU General Public License as published by
  *  the Free Software Foundation, either version 3 of the License, or
  *  (at your option) any later version.
  *
  *  STM32_XPD is distributed in the hope that it will be useful,
  *  but WITHOUT ANY WARRANTY; without even the implied warranty of
  *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  *  GNU General Public License for more details.
  *
  *  You should have received a copy of the GNU General Public License
  *  along with STM32_XPD.  If not, see <http://www.gnu.org/licenses/>.
  */
#ifndef SYSCFG_REG_BIT

#ifdef SYSCFG_BB
#define SYSCFG_REG_BIT(_REG_NAME_, _BIT_NAME_) (SYSCFG_BB->_REG_NAME_._BIT_NAME_)
#else
#define SYSCFG_REG_BIT(_REG_NAME_, _BIT_NAME_) (SYSCFG->_REG_NAME_.b._BIT_NAME_)
#endif /* SYSCFG_BB */

#endif /* SYSCFG_REG_BIT */

#if defined(XPD_DMA_API)
#ifdef SYSCFG_CFGR1_DMA_RMP

/* Defines for macro functionality */
#ifdef SYSCFG_CFGR1_ADC24_DMA_RMP
/* DMA 2 */
#define DMA_RMP_ADC2_CH1        0U
#define DMA_RMP_ADC2_CH3        (SYSCFG_CFGR1_ADC24_DMA_RMP)
#define DMA_RMP_ADC2_BIT        (SYSCFG_CFGR1_ADC24_DMA_RMP)
#define DMA_RMP_ADC4_CH2        0U
#define DMA_RMP_ADC4_CH4        (SYSCFG_CFGR1_ADC24_DMA_RMP)
#define DMA_RMP_ADC4_BIT        (SYSCFG_CFGR1_ADC24_DMA_RMP)
#endif

#ifdef SYSCFG_CFGR1_DAC2Ch1_DMA_RMP
/* DMA 1 */
#define DMA_RMP_DAC2Ch1_CH_     0U
#define DMA_RMP_DAC2Ch1_CH5     (SYSCFG_CFGR1_DAC2Ch1_DMA_RMP)
#define DMA_RMP_DAC2Ch1_BIT     (SYSCFG_CFGR1_DAC2Ch1_DMA_RMP)
#elif defined(SYSCFG_CFGR1_TIM18DAC2Ch1_DMA_RMP)
/* DMA 1 */
#define DMA_RMP_DAC2Ch1_CH_     0U
#define DMA_RMP_DAC2Ch1_CH5     (SYSCFG_CFGR1_TIM18DAC2Ch1_DMA_RMP)
#define DMA_RMP_DAC2Ch1_BIT     (SYSCFG_CFGR1_TIM18DAC2Ch1_DMA_RMP)
#define DMA_RMP_TIM18_CH_       0U
#define DMA_RMP_TIM18_CH5       (SYSCFG_CFGR1_TIM18DAC2Ch1_DMA_RMP)
#define DMA_RMP_TIM18_BIT       (SYSCFG_CFGR1_TIM18DAC2Ch1_DMA_RMP)
#endif

#ifdef SYSCFG_CFGR1_TIM16_DMA_RMP
/* DMA 1 */
#define DMA_RMP_TIM16_CH3       0U
#define DMA_RMP_TIM16_CH6       (SYSCFG_CFGR1_TIM16_DMA_RMP)
#define DMA_RMP_TIM16_BIT       (SYSCFG_CFGR1_TIM16_DMA_RMP)
#endif

#ifdef SYSCFG_CFGR1_TIM17_DMA_RMP
/* DMA 1 */
#define DMA_RMP_TIM17_CH1       0U
#define DMA_RMP_TIM17_CH7       (SYSCFG_CFGR1_TIM17_DMA_RMP)
#define DMA_RMP_TIM17_BIT       (SYSCFG_CFGR1_TIM17_DMA_RMP)
#endif

#ifdef SYSCFG_CFGR1_TIM6DAC1Ch1_DMA_RMP
/* DMA 1 */
#define DMA_RMP_DAC1Ch1_CH_     0U
#define DMA_RMP_DAC1Ch1_CH3     (SYSCFG_CFGR1_TIM6DAC1Ch1_DMA_RMP)
#define DMA_RMP_DAC1Ch1_BIT     (SYSCFG_CFGR1_TIM6DAC1Ch1_DMA_RMP)
#define DMA_RMP_TIM6_CH_        0U
#define DMA_RMP_TIM6_CH3        (SYSCFG_CFGR1_TIM6DAC1Ch1_DMA_RMP)
#define DMA_RMP_TIM6_BIT        (SYSCFG_CFGR1_TIM6DAC1Ch1_DMA_RMP)
#endif

#ifdef SYSCFG_CFGR1_TIM7DAC1Ch2_DMA_RMP
/* DMA 1 */
#define DMA_RMP_DAC1Ch2_CH_     0U
#define DMA_RMP_DAC1Ch2_CH3     (SYSCFG_CFGR1_TIM7DAC1Ch2_DMA_RMP)
#define DMA_RMP_DAC1Ch2_BIT     (SYSCFG_CFGR1_TIM7DAC1Ch2_DMA_RMP)
#define DMA_RMP_TIM7_CH_        0U
#define DMA_RMP_TIM7_CH3        (SYSCFG_CFGR1_TIM7DAC1Ch2_DMA_RMP)
#define DMA_RMP_TIM7_BIT        (SYSCFG_CFGR1_TIM7DAC1Ch2_DMA_RMP)
#endif

#ifdef SYSCFG_CFGR3_DMA_RMP

#ifdef SYSCFG_CFGR3_ADC2_DMA_RMP
/* DMA 1 */
#define DMA_RMP_ADC2_CH2        (0x03000000 | SYSCFG_CFGR3_ADC2_DMA_RMP_0)
#define DMA_RMP_ADC2_CH4        (0x03000000 | SYSCFG_CFGR3_ADC2_DMA_RMP)
#define DMA_RMP_ADC2_BIT        (0x03000000 | SYSCFG_CFGR3_ADC2_DMA_RMP)
#endif

#ifdef SYSCFG_CFGR3_SPI1_RX_DMA_RMP
/* DMA 1 */
#define DMA_RMP_SPI1_RX_CH2     (0x03000000 | SYSCFG_CFGR3_SPI1_RX_DMA_RMP)
#define DMA_RMP_SPI1_RX_CH4     (0x03000000 | SYSCFG_CFGR3_SPI1_RX_DMA_RMP_0)
#define DMA_RMP_SPI1_RX_CH6     (0x03000000 | SYSCFG_CFGR3_SPI1_RX_DMA_RMP_1)
#define DMA_RMP_SPI1_RX_BIT     (0x03000000 | SYSCFG_CFGR3_SPI1_RX_DMA_RMP)
#endif

#ifdef SYSCFG_CFGR3_SPI1_TX_DMA_RMP
/* DMA 1 */
#define DMA_RMP_SPI1_TX_CH3     (0x03000000 | SYSCFG_CFGR3_SPI1_TX_DMA_RMP)
#define DMA_RMP_SPI1_TX_CH5     (0x03000000 | SYSCFG_CFGR3_SPI1_TX_DMA_RMP_0)
#define DMA_RMP_SPI1_TX_CH7     (0x03000000 | SYSCFG_CFGR3_SPI1_TX_DMA_RMP_1)
#define DMA_RMP_SPI1_TX_BIT     (0x03000000 | SYSCFG_CFGR3_SPI1_TX_DMA_RMP)
#endif

#ifdef SYSCFG_CFGR3_SPI1_RX_DMA_RMP
/* DMA 1 */
#define DMA_RMP_I2C1_RX_CH3     (0x03000000 | SYSCFG_CFGR3_I2C1_RX_DMA_RMP_0)
#define DMA_RMP_I2C1_RX_CH5     (0x03000000 | SYSCFG_CFGR3_I2C1_RX_DMA_RMP_1)
#define DMA_RMP_I2C1_RX_CH7     (0x03000000 | SYSCFG_CFGR3_I2C1_RX_DMA_RMP)
#define DMA_RMP_I2C1_RX_BIT     (0x03000000 | SYSCFG_CFGR3_I2C1_RX_DMA_RMP)
#endif

#ifdef SYSCFG_CFGR3_I2C1_TX_DMA_RMP
/* DMA 1 */
#define DMA_RMP_I2C1_TX_CH2     (0x03000000 | SYSCFG_CFGR3_I2C1_TX_DMA_RMP_0)
#define DMA_RMP_I2C1_TX_CH4     (0x03000000 | SYSCFG_CFGR3_I2C1_TX_DMA_RMP_1)
#define DMA_RMP_I2C1_TX_CH6     (0x03000000 | SYSCFG_CFGR3_I2C1_TX_DMA_RMP)
#define DMA_RMP_I2C1_TX_BIT     (0x03000000 | SYSCFG_CFGR3_I2C1_TX_DMA_RMP)
#endif

/**
 * @brief  Sets the DMA remapping for the given request source.
 * @param  SOURCE: source of DMA request
 * @param  CHANNEL: specifies the DMA channel number to remap to [1..7].
 */
#define XPD_DMA_SourceRemap(SOURCE, CHANNEL)                    \
    (MODIFY_REG(((__IO uint32_t *)SYSCFG)[DMA_RMP_##SOURCE##_BIT >> 24], DMA_RMP_##SOURCE##_BIT & 0xFFFFFF, DMA_RMP_##SOURCE##_CH##CHANNEL))

#else

/**
 * @brief  Sets the DMA remapping for the given request source.
 * @param  SOURCE: source of DMA request
 * @param  CHANNEL: specifies the DMA channel number to remap to [1..7].
 */
#define XPD_DMA_SourceRemap(SOURCE, CHANNEL)                    \
    (MODIFY_REG(SYSCFG->CFGR1.w, DMA_RMP_##SOURCE##_BIT, DMA_RMP_##SOURCE##_CH##CHANNEL))

#endif

#endif /* SYSCFG_CFGR1_DMA_RMP */

#elif defined(XPD_USB_API)

#ifdef SYSCFG_CFGR1_USB_IT_RMP
/**
 * @brief  Enables or disables the USB interrupt remapping.
 * @param  NEWSTATE: the new remap setting
 */
#define XPD_USB_ITRemap(NEWSTATE)                                \
    (SYSCFG_REG_BIT(CFGR1, USB_IT_RMP) = (NEWSTATE))
#endif

#endif
