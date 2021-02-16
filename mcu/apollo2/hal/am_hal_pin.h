//*****************************************************************************
//
//  am_hal_pin.h
//! @file
//! @brief Macros for configuring specific pins.
//!
//! @addtogroup pin2 PIN definitions for Apollo2.
//! @ingroup apollo2hal
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
// Copyright (c) 2020, Ambiq Micro, Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
// this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright
// notice, this list of conditions and the following disclaimer in the
// documentation and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its
// contributors may be used to endorse or promote products derived from this
// software without specific prior written permission.
//
// Third party software included in this distribution is subject to the
// additional license terms as defined in the /docs/licenses directory.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//
// This is part of revision 2.5.1 of the AmbiqSuite Development Package.
//
//*****************************************************************************

#ifndef AM_HAL_PIN_H
#define AM_HAL_PIN_H

//*****************************************************************************
//
// Pin definition helper macros.
//
//*****************************************************************************
#define AM_HAL_PIN_DIR_INPUT      (AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_DIR_OUTPUT     (AM_HAL_GPIO_OUT_PUSHPULL)
#define AM_HAL_PIN_DIR_OPENDRAIN  (AM_HAL_GPIO_OUT_OPENDRAIN)
#define AM_HAL_PIN_DIR_3STATE     (AM_HAL_GPIO_OUT_3STATE)

//*****************************************************************************
//
// Pin definition helper macros.
//
//*****************************************************************************
#define AM_HAL_PIN_DISABLE        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_INPUT          (AM_HAL_GPIO_FUNC(3) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_OUTPUT         (AM_HAL_GPIO_FUNC(3) | AM_HAL_PIN_DIR_OUTPUT)
#define AM_HAL_PIN_OPENDRAIN      (AM_HAL_GPIO_FUNC(3) | AM_HAL_PIN_DIR_OPENDRAIN)
#define AM_HAL_PIN_3STATE         (AM_HAL_GPIO_FUNC(3) | AM_HAL_PIN_DIR_3STATE)

//*****************************************************************************
//
// Pin definition macros.
//
//*****************************************************************************
#define AM_HAL_PIN_0_SLSCL        (AM_HAL_GPIO_FUNC(0) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_0_SLSCK        (AM_HAL_GPIO_FUNC(1) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_0_CLKOUT       (AM_HAL_GPIO_FUNC(2))
#define AM_HAL_PIN_0_GPIO         (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_0_MxSCKLB      (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_0_M2SCK        (AM_HAL_GPIO_FUNC(5) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_0_MxSCLLB      (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_0_M2SCL        (AM_HAL_GPIO_FUNC(7) | AM_HAL_PIN_DIR_OPENDRAIN | AM_HAL_GPIO_INPEN)

#define AM_HAL_PIN_1_SLSDA        (AM_HAL_GPIO_FUNC(0) | AM_HAL_PIN_DIR_OPENDRAIN | AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_1_SLMISO       (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_1_UART0TX      (AM_HAL_GPIO_FUNC(2))
#define AM_HAL_PIN_1_GPIO         (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_1_MxMISOLB     (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_1_M2MISO       (AM_HAL_GPIO_FUNC(5) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_1_MxSDALB      (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_1_M2SDA        (AM_HAL_GPIO_FUNC(7) | AM_HAL_PIN_DIR_OPENDRAIN | AM_HAL_GPIO_INPEN)

#define AM_HAL_PIN_2_SLWIR3       (AM_HAL_GPIO_FUNC(0) | AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_2_SLMOSI       (AM_HAL_GPIO_FUNC(1) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_2_UART0RX      (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_2_GPIO         (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_2_MxMOSILB     (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_2_M2MOSI       (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_2_MxWIR3LB     (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_2_M2WIR3       (AM_HAL_GPIO_FUNC(7) | AM_HAL_GPIO_INPEN)

#define AM_HAL_PIN_3_UART0RTS     (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_3_SLnCE        (AM_HAL_GPIO_FUNC(1) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_3_M1nCE4       (AM_HAL_GPIO_FUNC(2))
#define AM_HAL_PIN_3_GPIO         (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_3_MxnCELB      (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_3_M2nCE0       (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_3_TRIG1        (AM_HAL_GPIO_FUNC(6) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_3_I2S_WCLK     (AM_HAL_GPIO_FUNC(7))

#define AM_HAL_PIN_4_UART0CTS     (AM_HAL_GPIO_FUNC(0) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_4_SLINT        (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_4_M0nCE5       (AM_HAL_GPIO_FUNC(2))
#define AM_HAL_PIN_4_GPIO         (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_4_SLINTGP      (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_4_M2nCE5       (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_4_CLKOUT       (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_4_32KHZ_XT     (AM_HAL_GPIO_FUNC(7))
// PSINK usage: GPIOWT=0 to activate the power switch, GPIOWT=1 to disable
#define AM_HAL_PIN_4_PSINK        (AM_HAL_GPIO_FUNC(3) | AM_HAL_PIN_DIR_OPENDRAIN | AM_HAL_GPIO_POWERSINK)

#define AM_HAL_PIN_5_M0SCL        (AM_HAL_GPIO_FUNC(0) | AM_HAL_PIN_DIR_OPENDRAIN | AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_5_M0SCK        (AM_HAL_GPIO_FUNC(1) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_5_UART0RTS     (AM_HAL_GPIO_FUNC(2))
#define AM_HAL_PIN_5_GPIO         (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_5_M0SCKLB      (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_5_M0SCLLB      (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_5_M1nCE2       (AM_HAL_GPIO_FUNC(7))

#define AM_HAL_PIN_6_M0SDA        (AM_HAL_GPIO_FUNC(0) | AM_HAL_PIN_DIR_OPENDRAIN | AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_6_M0MISO       (AM_HAL_GPIO_FUNC(1) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_6_UART0CTS     (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_6_GPIO         (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_6_SLMISOLB     (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_6_M1nCE0       (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_6_SLSDALB      (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_6_I2S_DAT      (AM_HAL_GPIO_FUNC(7))

#define AM_HAL_PIN_7_M0WIR3       (AM_HAL_GPIO_FUNC(0) | AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_7_M0MOSI       (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_7_CLKOUT       (AM_HAL_GPIO_FUNC(2))
#define AM_HAL_PIN_7_GPIO         (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_7_TRIG0        (AM_HAL_GPIO_FUNC(4) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_7_UART0TX      (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_7_SLWIR3LB     (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_7_M1nCE1       (AM_HAL_GPIO_FUNC(7))

#define AM_HAL_PIN_8_M1SCL        (AM_HAL_GPIO_FUNC(0) | AM_HAL_PIN_DIR_OPENDRAIN | AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_8_M1SCK        (AM_HAL_GPIO_FUNC(1) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_8_M0nCE4       (AM_HAL_GPIO_FUNC(2))
#define AM_HAL_PIN_8_GPIO         (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_8_M2nCE4       (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_8_M1SCKLB      (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_8_UART1TX      (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_8_M1SCLLB      (AM_HAL_GPIO_FUNC(7))

#define AM_HAL_PIN_9_M1SDA        (AM_HAL_GPIO_FUNC(0) | AM_HAL_PIN_DIR_OPENDRAIN | AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_9_M1MISO       (AM_HAL_GPIO_FUNC(1) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_9_M0nCE5       (AM_HAL_GPIO_FUNC(2))
#define AM_HAL_PIN_9_GPIO         (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_9_M4nCE5       (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_9_SLMISOLB     (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_9_UART1RX      (AM_HAL_GPIO_FUNC(6) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_9_SLSDALB      (AM_HAL_GPIO_FUNC(7))

#define AM_HAL_PIN_10_M1WIR3      (AM_HAL_GPIO_FUNC(0) | AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_10_M1MOSI      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_10_M0nCE6      (AM_HAL_GPIO_FUNC(2))
#define AM_HAL_PIN_10_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_10_M2nCE6      (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_10_UART1RTS    (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_10_M4nCE4      (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_10_SLWIR3LB    (AM_HAL_GPIO_FUNC(7))

#define AM_HAL_PIN_11_ADCSE2      (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_11_M0nCE0      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_11_CLKOUT      (AM_HAL_GPIO_FUNC(2))
#define AM_HAL_PIN_11_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_11_M2nCE7      (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_11_UART1CTS    (AM_HAL_GPIO_FUNC(5) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_11_UART0RX     (AM_HAL_GPIO_FUNC(6) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_11_PDM_DATA    (AM_HAL_GPIO_FUNC(7) | AM_HAL_PIN_DIR_INPUT)

#define AM_HAL_PIN_12_ADCD0NSE9   (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_12_M1nCE0      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_12_TCTA0       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_12_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_12_CLKOUT      (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_12_PDM_CLK     (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_12_UART0CTS    (AM_HAL_GPIO_FUNC(6) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_12_UART1TX     (AM_HAL_GPIO_FUNC(7))

#define AM_HAL_PIN_13_ADCD0PSE8   (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_13_M1nCE1      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_13_TCTB0       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_13_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_13_M2nCE3      (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_13_UART0RTS    (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_13_UART1RX     (AM_HAL_GPIO_FUNC(7) | AM_HAL_PIN_DIR_INPUT)

#define AM_HAL_PIN_14_ADCD1P      (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_14_M1nCE2      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_14_UART1TX     (AM_HAL_GPIO_FUNC(2))
#define AM_HAL_PIN_14_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_14_M2nCE1      (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_14_SWDCK       (AM_HAL_GPIO_FUNC(6) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_14_32KHZ_XT    (AM_HAL_GPIO_FUNC(7))

#define AM_HAL_PIN_15_ADCD1N      (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_15_M1nCE3      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_15_UART1RX     (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_15_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_15_M2nCE2      (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_15_SWDIO       (AM_HAL_GPIO_FUNC(6) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_15_SWO         (AM_HAL_GPIO_FUNC(7))

#define AM_HAL_PIN_16_ADCSE0      (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_16_M0nCE4      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_16_TRIG0       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_16_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_16_M2nCE3      (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_16_CMPIN0      (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_16_UART0TX     (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_16_UART1RTS    (AM_HAL_GPIO_FUNC(7))

#define AM_HAL_PIN_17_CMPRF1      (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_17_M0nCE1      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_17_TRIG1       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_17_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_17_M4nCE3      (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_17_UART0RX     (AM_HAL_GPIO_FUNC(6) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_17_UART1CTS    (AM_HAL_GPIO_FUNC(7) | AM_HAL_PIN_DIR_INPUT)

#define AM_HAL_PIN_18_CMPIN1      (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_18_M0nCE2      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_18_TCTA1       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_18_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_18_M4nCE1      (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_18_UART1TX     (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_18_32KHZ_XT    (AM_HAL_GPIO_FUNC(7))

#define AM_HAL_PIN_19_CMPRF0      (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_19_M0nCE3      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_19_TCTB1       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_19_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_19_TCTA1       (AM_HAL_GPIO_FUNC(4) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_19_UART1RX     (AM_HAL_GPIO_FUNC(6) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_19_I2S_BCLK    (AM_HAL_GPIO_FUNC(7))

#define AM_HAL_PIN_20_SWDCK       (AM_HAL_GPIO_FUNC(0) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_20_M1nCE5      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_20_TCTA2       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_20_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_20_UART0TX     (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_20_UART1TX     (AM_HAL_GPIO_FUNC(5))

#define AM_HAL_PIN_21_SWDIO       (AM_HAL_GPIO_FUNC(0) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_21_M1nCE6      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_21_TCTB2       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_21_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_21_UART0RX     (AM_HAL_GPIO_FUNC(4) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_21_UART1RX     (AM_HAL_GPIO_FUNC(5) | AM_HAL_PIN_DIR_INPUT)

#define AM_HAL_PIN_22_UART0TX     (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_22_M1nCE7      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_22_TCTA3       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_22_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_22_PDM_CLK     (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_22_TCTB1       (AM_HAL_GPIO_FUNC(6) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_22_SWO         (AM_HAL_GPIO_FUNC(7))
// PSOURCE usage in pushpull: GPIOWT=1 to activate the power switch, GPIOWT=0 to disable
#define AM_HAL_PIN_22_PSOURCE     (AM_HAL_GPIO_FUNC(3) | AM_HAL_PIN_DIR_OUTPUT | AM_HAL_GPIO_POWERSOURCE)

#define AM_HAL_PIN_23_UART0RX     (AM_HAL_GPIO_FUNC(0) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_23_M0nCE0      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_23_TCTB3       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_23_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_23_PDM_DATA    (AM_HAL_GPIO_FUNC(4) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_23_CMPOUT      (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_23_TCTB1       (AM_HAL_GPIO_FUNC(6) | AM_HAL_PIN_DIR_INPUT)

#if defined (AM_PACKAGE_BGA)
#define AM_HAL_PIN_24_M2nCE1      (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_24_M0nCE1      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_24_CLKOUT      (AM_HAL_GPIO_FUNC(2))
#define AM_HAL_PIN_24_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_24_M5nCE0      (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_24_TCTA1       (AM_HAL_GPIO_FUNC(5) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_24_I2S_BCLK    (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_24_SWO         (AM_HAL_GPIO_FUNC(7))
#endif // defined (AM_PACKAGE_BGA)

#if defined (AM_PACKAGE_BGA)
#define AM_HAL_PIN_25_M0nCE2      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_25_TCTA0       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_25_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_25_M2SDA       (AM_HAL_GPIO_FUNC(4) | AM_HAL_PIN_DIR_OPENDRAIN | AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_25_M2MISO      (AM_HAL_GPIO_FUNC(5) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_25_SLMISOLB    (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_25_SLSDALB     (AM_HAL_GPIO_FUNC(7))
#endif // defined (AM_PACKAGE_BGA)

#define AM_HAL_PIN_26_M0nCE3      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_26_TCTB0       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_26_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_26_M2nCE0      (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_26_TCTA1       (AM_HAL_GPIO_FUNC(5) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_26_M5nCE1      (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_26_M3nCE0      (AM_HAL_GPIO_FUNC(7))

#if defined (AM_PACKAGE_BGA)
#define AM_HAL_PIN_27_M1nCE4      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_27_TCTA1       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_27_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_27_M2SCL       (AM_HAL_GPIO_FUNC(4) | AM_HAL_PIN_DIR_OPENDRAIN | AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_27_M2SCK       (AM_HAL_GPIO_FUNC(5) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_27_M2SCKLB     (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_27_M2SCLLB     (AM_HAL_GPIO_FUNC(7))
#endif // defined (AM_PACKAGE_BGA)

#define AM_HAL_PIN_28_I2S_WCLK    (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_28_M1nCE5      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_28_TCTB1       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_28_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_28_M2WIR3      (AM_HAL_GPIO_FUNC(4) | AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_28_M2MOSI      (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_28_M5nCE3      (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_28_SLWIR3LB    (AM_HAL_GPIO_FUNC(7))

#define AM_HAL_PIN_29_ADCSE1      (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_29_M1nCE6      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_29_TCTA2       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_29_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_29_UART0CTS    (AM_HAL_GPIO_FUNC(4) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_29_UART1CTS    (AM_HAL_GPIO_FUNC(5) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_29_M4nCE0      (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_29_PDM_DATA    (AM_HAL_GPIO_FUNC(7) | AM_HAL_PIN_DIR_INPUT)

#if defined (AM_PACKAGE_BGA)
#define AM_HAL_PIN_30_M1nCE7      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_30_TCTB2       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_30_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_30_UART0TX     (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_30_UART1RTS    (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_30_I2S_DAT     (AM_HAL_GPIO_FUNC(7))
#endif // defined (AM_PACKAGE_BGA)

#if defined (AM_PACKAGE_BGA)
#define AM_HAL_PIN_31_ADCSE3      (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_31_M0nCE4      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_31_TCTA3       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_31_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_31_UART0RX     (AM_HAL_GPIO_FUNC(4) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_31_TCTB1       (AM_HAL_GPIO_FUNC(5) | AM_HAL_PIN_DIR_INPUT)
#endif // defined (AM_PACKAGE_BGA)

#if defined (AM_PACKAGE_BGA)
#define AM_HAL_PIN_32_ADCSE4      (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_32_M0nCE5      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_32_TCTB3       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_32_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_32_TCTB1       (AM_HAL_GPIO_FUNC(5) | AM_HAL_PIN_DIR_INPUT)
#endif // defined (AM_PACKAGE_BGA)

#if defined (AM_PACKAGE_BGA)
#define AM_HAL_PIN_33_ADCSE5      (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_33_M0nCE6      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_33_32KHZ_XT    (AM_HAL_GPIO_FUNC(2))
#define AM_HAL_PIN_33_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_33_M3nCE7      (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_33_TCTB1       (AM_HAL_GPIO_FUNC(6) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_33_SWO         (AM_HAL_GPIO_FUNC(7))
#endif // defined (AM_PACKAGE_BGA)

#if defined (AM_PACKAGE_BGA)
#define AM_HAL_PIN_34_ADCSE6      (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_34_M0nCE7      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_34_M2nCE3      (AM_HAL_GPIO_FUNC(2))
#define AM_HAL_PIN_34_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_34_CMPRF2      (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_34_M3nCE1      (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_34_M4nCE0      (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_34_M5nCE2      (AM_HAL_GPIO_FUNC(7))
#endif // defined (AM_PACKAGE_BGA)

#if defined (AM_PACKAGE_BGA)
#define AM_HAL_PIN_35_ADCSE7      (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_35_M1nCE0      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_35_UART1TX     (AM_HAL_GPIO_FUNC(2))
#define AM_HAL_PIN_35_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_35_M4nCE6      (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_35_TCTA1       (AM_HAL_GPIO_FUNC(5) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_35_UART0RTS    (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_35_M3nCE2      (AM_HAL_GPIO_FUNC(7))
#endif // defined (AM_PACKAGE_BGA)

#if defined (AM_PACKAGE_BGA)
#define AM_HAL_PIN_36_TRIG1       (AM_HAL_GPIO_FUNC(0) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_36_M1nCE1      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_36_UART1RX     (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_36_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_36_32KHZ_XT    (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_36_M2nCE0      (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_36_UART0CTS    (AM_HAL_GPIO_FUNC(6) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_36_M3nCE3      (AM_HAL_GPIO_FUNC(7))
#endif // defined (AM_PACKAGE_BGA)

#if defined (AM_PACKAGE_BGA)
#define AM_HAL_PIN_37_TRIG2       (AM_HAL_GPIO_FUNC(0) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_37_M1nCE2      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_37_UART0RTS    (AM_HAL_GPIO_FUNC(2))
#define AM_HAL_PIN_37_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_37_M3nCE4      (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_37_M4nCE1      (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_37_PDM_CLK     (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_37_TCTA1       (AM_HAL_GPIO_FUNC(7) | AM_HAL_PIN_DIR_INPUT)
#endif // defined (AM_PACKAGE_BGA)

#if defined (AM_PACKAGE_BGA)
#define AM_HAL_PIN_38_TRIG3       (AM_HAL_GPIO_FUNC(0) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_38_M1nCE3      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_38_UART0CTS    (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_38_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_38_M3WIR3      (AM_HAL_GPIO_FUNC(4) | AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_38_M3MOSI      (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_38_M4nCE7      (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_38_SLWIR3LB    (AM_HAL_GPIO_FUNC(7))
#endif // defined (AM_PACKAGE_BGA)

#define AM_HAL_PIN_39_UART0TX     (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_39_UART1TX     (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_39_CLKOUT      (AM_HAL_GPIO_FUNC(2))
#define AM_HAL_PIN_39_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_39_M4SCL       (AM_HAL_GPIO_FUNC(4) | AM_HAL_PIN_DIR_OPENDRAIN | AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_39_M4SCK       (AM_HAL_GPIO_FUNC(5) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_39_M4SCKLB     (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_39_M4SCLLB     (AM_HAL_GPIO_FUNC(7))

#define AM_HAL_PIN_40_UART0RX     (AM_HAL_GPIO_FUNC(0) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_40_UART1RX     (AM_HAL_GPIO_FUNC(1) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_40_TRIG0       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_40_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_40_M4SDA       (AM_HAL_GPIO_FUNC(4) | AM_HAL_PIN_DIR_OPENDRAIN | AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_40_M4MISO      (AM_HAL_GPIO_FUNC(5) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_40_SLMISOLB    (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_40_SLSDALB     (AM_HAL_GPIO_FUNC(7))

#define AM_HAL_PIN_41_M2nCE1      (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_41_CLKOUT      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_41_SWO         (AM_HAL_GPIO_FUNC(2))
#define AM_HAL_PIN_41_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_41_M3nCE5      (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_41_M5nCE7      (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_41_M4nCE2      (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_41_UART0RTS    (AM_HAL_GPIO_FUNC(7))
// PSOURCE usage in pushpull: GPIOWT=1 to activate the power switch, GPIOWT=0 to disable
#define AM_HAL_PIN_41_PSOURCE     (AM_HAL_GPIO_FUNC(3) | AM_HAL_PIN_DIR_OUTPUT | AM_HAL_GPIO_POWERSOURCE)

#if defined (AM_PACKAGE_BGA)
#define AM_HAL_PIN_42_M2nCE2      (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_42_M0nCE0      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_42_TCTA0       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_42_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_42_M3SCL       (AM_HAL_GPIO_FUNC(4) | AM_HAL_PIN_DIR_OPENDRAIN | AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_42_M3SCK       (AM_HAL_GPIO_FUNC(5) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_42_M3SCKLB     (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_42_M3SCLLB     (AM_HAL_GPIO_FUNC(7))
#endif // defined (AM_PACKAGE_BGA)

#if defined (AM_PACKAGE_BGA)
#define AM_HAL_PIN_43_M2nCE4      (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_43_M0nCE1      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_43_TCTB0       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_43_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_43_M3SDA       (AM_HAL_GPIO_FUNC(4) | AM_HAL_PIN_DIR_OPENDRAIN | AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_43_M3MISO      (AM_HAL_GPIO_FUNC(5) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_43_SLMISOLB    (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_43_SLSDALB     (AM_HAL_GPIO_FUNC(7))
#endif // defined (AM_PACKAGE_BGA)

#define AM_HAL_PIN_44_UART1RTS    (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_44_M0nCE2      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_44_TCTA1       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_44_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_44_M4WIR3      (AM_HAL_GPIO_FUNC(4) | AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_44_M4MOSI      (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_44_M5nCE6      (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_44_SLWIR3LB    (AM_HAL_GPIO_FUNC(7))

#if defined (AM_PACKAGE_BGA)
#define AM_HAL_PIN_45_UART1CTS    (AM_HAL_GPIO_FUNC(0) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_45_M0nCE3      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_45_TCTB1       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_45_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_45_M4nCE3      (AM_HAL_GPIO_FUNC(4))
#define AM_HAL_PIN_45_M3nCE6      (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_45_M5nCE5      (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_45_SWO         (AM_HAL_GPIO_FUNC(7))
#endif // defined (AM_PACKAGE_BGA)

#if defined (AM_PACKAGE_BGA)
#define AM_HAL_PIN_46_32KHZ_XT    (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_46_M0nCE4      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_46_TCTA2       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_46_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_46_TCTA1       (AM_HAL_GPIO_FUNC(4) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_46_M5nCE4      (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_46_M4nCE4      (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_46_SWO         (AM_HAL_GPIO_FUNC(7))
#endif // defined (AM_PACKAGE_BGA)

#define AM_HAL_PIN_47_M2nCE5      (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_47_M0nCE5      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_47_TCTB2       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_47_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_47_M5WIR3      (AM_HAL_GPIO_FUNC(4) | AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_47_M5MOSI      (AM_HAL_GPIO_FUNC(5))
#define AM_HAL_PIN_47_M4nCE5      (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_47_SLWIR3LB    (AM_HAL_GPIO_FUNC(7))

#define AM_HAL_PIN_48_M2nCE6      (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_48_M0nCE6      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_48_TCTA3       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_48_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_48_M5SCL       (AM_HAL_GPIO_FUNC(4) | AM_HAL_PIN_DIR_OPENDRAIN | AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_48_M5SCK       (AM_HAL_GPIO_FUNC(5) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_48_M5SCKLB     (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_48_M5SCLLB     (AM_HAL_GPIO_FUNC(7))

#define AM_HAL_PIN_49_M2nCE7      (AM_HAL_GPIO_FUNC(0))
#define AM_HAL_PIN_49_M0nCE7      (AM_HAL_GPIO_FUNC(1))
#define AM_HAL_PIN_49_TCTB3       (AM_HAL_GPIO_FUNC(2) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_49_GPIO        (AM_HAL_GPIO_FUNC(3))
#define AM_HAL_PIN_49_M5SDA       (AM_HAL_GPIO_FUNC(4) | AM_HAL_PIN_DIR_OPENDRAIN | AM_HAL_GPIO_INPEN)
#define AM_HAL_PIN_49_M5MISO      (AM_HAL_GPIO_FUNC(5) | AM_HAL_PIN_DIR_INPUT)
#define AM_HAL_PIN_49_SLMISOLB    (AM_HAL_GPIO_FUNC(6))
#define AM_HAL_PIN_49_SLSDALB     (AM_HAL_GPIO_FUNC(7))

#endif  // AM_HAL_PIN_H

//*****************************************************************************
//
// End Doxygen group.
//! @}
//
//*****************************************************************************
