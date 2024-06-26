/***************************************************************************//**
* \file cyhal_tviibe2m_80_lqfp.c
*
* \brief
* TVIIBE2M device GPIO HAL header for 80-LQFP package
*
********************************************************************************
* \copyright
* (c) (2016-2024), Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
*
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#include "cy_device_headers.h"
#include "cyhal_hw_types.h"

#if defined(_GPIO_TVIIBE2M_80_LQFP_H_)
#include "pin_packages/cyhal_tviibe2m_80_lqfp.h"

/* Pin connections */
/* Connections for: canfd_ttcan_rx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_canfd_ttcan_rx[9] = {
    {0u, 1u, P0_3, P0_3_CANFD0_TTCAN_RX1},
    {0u, 0u, P2_1, P2_1_CANFD0_TTCAN_RX0},
    {0u, 2u, P6_3, P6_3_CANFD0_TTCAN_RX2},
    {0u, 0u, P8_1, P8_1_CANFD0_TTCAN_RX0},
    {0u, 2u, P12_1, P12_1_CANFD0_TTCAN_RX2},
    {1u, 0u, P14_1, P14_1_CANFD1_TTCAN_RX0},
    {1u, 2u, P18_7, P18_7_CANFD1_TTCAN_RX2},
    {1u, 3u, P19_1, P19_1_CANFD1_TTCAN_RX3},
    {1u, 1u, P22_1, P22_1_CANFD1_TTCAN_RX1},
};

/* Connections for: canfd_ttcan_tx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_canfd_ttcan_tx[9] = {
    {0u, 1u, P0_2, P0_2_CANFD0_TTCAN_TX1},
    {0u, 0u, P2_0, P2_0_CANFD0_TTCAN_TX0},
    {0u, 2u, P6_2, P6_2_CANFD0_TTCAN_TX2},
    {0u, 0u, P8_0, P8_0_CANFD0_TTCAN_TX0},
    {0u, 2u, P12_0, P12_0_CANFD0_TTCAN_TX2},
    {1u, 0u, P14_0, P14_0_CANFD1_TTCAN_TX0},
    {1u, 2u, P18_6, P18_6_CANFD1_TTCAN_TX2},
    {1u, 3u, P19_0, P19_0_CANFD1_TTCAN_TX3},
    {1u, 1u, P22_0, P22_0_CANFD1_TTCAN_TX1},
};

/* Connections for: cpuss_cal_sup_nz */
const cyhal_resource_pin_mapping_t cyhal_pin_map_cpuss_cal_sup_nz[2] = {
    {0u, 0u, P6_3, P6_3_CPUSS_CAL_SUP_NZ},
    {0u, 0u, P23_7, P23_7_CPUSS_CAL_SUP_NZ},
};

/* Connections for: cpuss_clk_fm_pump */
const cyhal_resource_pin_mapping_t cyhal_pin_map_cpuss_clk_fm_pump[1] = {
    {0u, 0u, NC, HSIOM_SEL_GPIO},
};

/* Connections for: cpuss_fault_out */
const cyhal_resource_pin_mapping_t cyhal_pin_map_cpuss_fault_out[5] = {
    {0u, 0u, P18_0, P18_0_CPUSS_FAULT_OUT0},
    {0u, 1u, P18_1, P18_1_CPUSS_FAULT_OUT1},
    {0u, 2u, P19_0, P19_0_CPUSS_FAULT_OUT2},
    {0u, 3u, P19_1, P19_1_CPUSS_FAULT_OUT3},
    {0u, 3u, P23_3, P23_3_CPUSS_FAULT_OUT3},
};

/* Connections for: cpuss_swj_swclk_tclk */
const cyhal_resource_pin_mapping_t cyhal_pin_map_cpuss_swj_swclk_tclk[1] = {
    {0u, 0u, P23_5, P23_5_CPUSS_SWJ_SWCLK_TCLK},
};

/* Connections for: cpuss_swj_swdio_tms */
const cyhal_resource_pin_mapping_t cyhal_pin_map_cpuss_swj_swdio_tms[1] = {
    {0u, 0u, P23_6, P23_6_CPUSS_SWJ_SWDIO_TMS},
};

/* Connections for: cpuss_swj_swdoe_tdi */
const cyhal_resource_pin_mapping_t cyhal_pin_map_cpuss_swj_swdoe_tdi[1] = {
    {0u, 0u, P23_7, P23_7_CPUSS_SWJ_SWDOE_TDI},
};

/* Connections for: cpuss_swj_swo_tdo */
const cyhal_resource_pin_mapping_t cyhal_pin_map_cpuss_swj_swo_tdo[1] = {
    {0u, 0u, P23_4, P23_4_CPUSS_SWJ_SWO_TDO},
};

/* Connections for: cpuss_swj_trstn */
const cyhal_resource_pin_mapping_t cyhal_pin_map_cpuss_swj_trstn[1] = {
    {0u, 0u, P2_0, P2_0_CPUSS_SWJ_TRSTN},
};

/* Connections for: cpuss_trace_clock */
const cyhal_resource_pin_mapping_t cyhal_pin_map_cpuss_trace_clock[1] = {
    {0u, 0u, P18_3, P18_3_CPUSS_TRACE_CLOCK},
};

/* Connections for: cpuss_trace_data */
const cyhal_resource_pin_mapping_t cyhal_pin_map_cpuss_trace_data[6] = {
    {0u, 0u, P18_4, P18_4_CPUSS_TRACE_DATA0},
    {0u, 1u, P18_5, P18_5_CPUSS_TRACE_DATA1},
    {0u, 2u, P18_6, P18_6_CPUSS_TRACE_DATA2},
    {0u, 3u, P18_7, P18_7_CPUSS_TRACE_DATA3},
    {0u, 0u, P22_0, P22_0_CPUSS_TRACE_DATA0},
    {0u, 1u, P22_1, P22_1_CPUSS_TRACE_DATA1},
};

/* Connections for: cxpi_cxpi_en */
const cyhal_resource_pin_mapping_t cyhal_pin_map_cxpi_cxpi_en[3] = {
    {0u, 0u, P7_2, P7_2_CXPI0_CXPI_EN0},
    {0u, 1u, P13_2, P13_2_CXPI0_CXPI_EN1},
    {0u, 2u, P13_7, P13_7_CXPI0_CXPI_EN2},
};

/* Connections for: cxpi_cxpi_rx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_cxpi_cxpi_rx[4] = {
    {0u, 0u, P7_0, P7_0_CXPI0_CXPI_RX0},
    {0u, 1u, P13_0, P13_0_CXPI0_CXPI_RX1},
    {0u, 2u, P13_5, P13_5_CXPI0_CXPI_RX2},
    {0u, 3u, P19_1, P19_1_CXPI0_CXPI_RX3},
};

/* Connections for: cxpi_cxpi_tx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_cxpi_cxpi_tx[3] = {
    {0u, 0u, P7_1, P7_1_CXPI0_CXPI_TX0},
    {0u, 1u, P13_1, P13_1_CXPI0_CXPI_TX1},
    {0u, 2u, P13_6, P13_6_CXPI0_CXPI_TX2},
};

/* Connections for: lin_lin_en */
const cyhal_resource_pin_mapping_t cyhal_pin_map_lin_lin_en[11] = {
    {0u, 1u, P0_2, P0_2_LIN0_LIN_EN1},
    {0u, 0u, P2_2, P2_2_LIN0_LIN_EN0},
    {0u, 7u, P5_2, P5_2_LIN0_LIN_EN7},
    {0u, 3u, P6_2, P6_2_LIN0_LIN_EN3},
    {0u, 4u, P6_5, P6_5_LIN0_LIN_EN4},
    {0u, 4u, P7_2, P7_2_LIN0_LIN_EN4},
    {0u, 2u, P8_2, P8_2_LIN0_LIN_EN2},
    {0u, 6u, P12_1, P12_1_LIN0_LIN_EN6},
    {0u, 3u, P13_2, P13_2_LIN0_LIN_EN3},
    {0u, 8u, P13_6, P13_6_LIN0_LIN_EN8},
    {0u, 9u, P23_7, P23_7_LIN0_LIN_EN9},
};

/* Connections for: lin_lin_rx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_lin_lin_rx[13] = {
    {0u, 1u, P0_0, P0_0_LIN0_LIN_RX1},
    {0u, 0u, P2_0, P2_0_LIN0_LIN_RX0},
    {0u, 5u, P2_3, P2_3_LIN0_LIN_RX5},
    {0u, 7u, P5_0, P5_0_LIN0_LIN_RX7},
    {0u, 2u, P5_3, P5_3_LIN0_LIN_RX2},
    {0u, 3u, P6_0, P6_0_LIN0_LIN_RX3},
    {0u, 4u, P6_3, P6_3_LIN0_LIN_RX4},
    {0u, 4u, P7_0, P7_0_LIN0_LIN_RX4},
    {0u, 2u, P8_0, P8_0_LIN0_LIN_RX2},
    {0u, 6u, P12_2, P12_2_LIN0_LIN_RX6},
    {0u, 3u, P13_0, P13_0_LIN0_LIN_RX3},
    {0u, 8u, P13_4, P13_4_LIN0_LIN_RX8},
    {0u, 9u, P23_5, P23_5_LIN0_LIN_RX9},
};

/* Connections for: lin_lin_tx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_lin_lin_tx[11] = {
    {0u, 1u, P0_1, P0_1_LIN0_LIN_TX1},
    {0u, 0u, P2_1, P2_1_LIN0_LIN_TX0},
    {0u, 7u, P5_1, P5_1_LIN0_LIN_TX7},
    {0u, 3u, P6_1, P6_1_LIN0_LIN_TX3},
    {0u, 4u, P6_4, P6_4_LIN0_LIN_TX4},
    {0u, 4u, P7_1, P7_1_LIN0_LIN_TX4},
    {0u, 2u, P8_1, P8_1_LIN0_LIN_TX2},
    {0u, 6u, P12_3, P12_3_LIN0_LIN_TX6},
    {0u, 3u, P13_1, P13_1_LIN0_LIN_TX3},
    {0u, 8u, P13_5, P13_5_LIN0_LIN_TX8},
    {0u, 9u, P23_6, P23_6_LIN0_LIN_TX9},
};

/* Connections for: pass_sar_ext_mux_en */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_sar_ext_mux_en[2] = {
    {0u, 1u, P12_2, P12_2_PASS0_SAR_EXT_MUX_EN1},
    {0u, 2u, P13_3, P13_3_PASS0_SAR_EXT_MUX_EN2},
};

/* Connections for: pass_sar_ext_mux_sel */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_sar_ext_mux_sel[4] = {
    {0u, 3u, P12_3, P12_3_PASS0_SAR_EXT_MUX_SEL3},
    {0u, 6u, P13_0, P13_0_PASS0_SAR_EXT_MUX_SEL6},
    {0u, 7u, P13_1, P13_1_PASS0_SAR_EXT_MUX_SEL7},
    {0u, 8u, P13_2, P13_2_PASS0_SAR_EXT_MUX_SEL8},
};

/* Connections for: pass_sarmux_pads */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_sarmux_pads[34] = {
    {0u, 0u, P6_0, HSIOM_SEL_GPIO},
    {0u, 1u, P6_1, HSIOM_SEL_GPIO},
    {0u, 2u, P6_2, HSIOM_SEL_GPIO},
    {0u, 3u, P6_3, HSIOM_SEL_GPIO},
    {0u, 4u, P6_4, HSIOM_SEL_GPIO},
    {0u, 5u, P6_5, HSIOM_SEL_GPIO},
    {0u, 8u, P7_0, HSIOM_SEL_GPIO},
    {0u, 9u, P7_1, HSIOM_SEL_GPIO},
    {0u, 10u, P7_2, HSIOM_SEL_GPIO},
    {0u, 11u, P7_3, HSIOM_SEL_GPIO},
    {0u, 16u, P8_1, HSIOM_SEL_GPIO},
    {0u, 17u, P8_2, HSIOM_SEL_GPIO},
    {1u, 4u, P12_0, HSIOM_SEL_GPIO},
    {1u, 5u, P12_1, HSIOM_SEL_GPIO},
    {1u, 6u, P12_2, HSIOM_SEL_GPIO},
    {1u, 7u, P12_3, HSIOM_SEL_GPIO},
    {1u, 12u, P13_0, HSIOM_SEL_GPIO},
    {1u, 13u, P13_1, HSIOM_SEL_GPIO},
    {1u, 14u, P13_2, HSIOM_SEL_GPIO},
    {1u, 15u, P13_3, HSIOM_SEL_GPIO},
    {1u, 16u, P13_4, HSIOM_SEL_GPIO},
    {1u, 17u, P13_5, HSIOM_SEL_GPIO},
    {1u, 18u, P13_6, HSIOM_SEL_GPIO},
    {1u, 19u, P13_7, HSIOM_SEL_GPIO},
    {1u, 20u, P14_0, HSIOM_SEL_GPIO},
    {1u, 21u, P14_1, HSIOM_SEL_GPIO},
    {2u, 0u, P18_0, HSIOM_SEL_GPIO},
    {2u, 1u, P18_1, HSIOM_SEL_GPIO},
    {2u, 2u, P18_2, HSIOM_SEL_GPIO},
    {2u, 3u, P18_3, HSIOM_SEL_GPIO},
    {2u, 4u, P18_4, HSIOM_SEL_GPIO},
    {2u, 5u, P18_5, HSIOM_SEL_GPIO},
    {2u, 6u, P18_6, HSIOM_SEL_GPIO},
    {2u, 7u, P18_7, HSIOM_SEL_GPIO},
};

/* Connections for: peri_tr_io_input */
/* The actual channel_num has no value to how the connection works. However, the HAL driver needs
   to know the index of the input or output trigger line. Store that in the channel_num field
   instead. */
const cyhal_resource_pin_mapping_t cyhal_pin_map_peri_tr_io_input[12] = {
    {0u, 2u, P2_0, P2_0_PERI_TR_IO_INPUT2},
    {0u, 3u, P2_1, P2_1_PERI_TR_IO_INPUT3},
    {0u, 4u, P2_2, P2_2_PERI_TR_IO_INPUT4},
    {0u, 5u, P2_3, P2_3_PERI_TR_IO_INPUT5},
    {0u, 14u, P8_1, P8_1_PERI_TR_IO_INPUT14},
    {0u, 15u, P8_2, P8_2_PERI_TR_IO_INPUT15},
    {0u, 20u, P12_0, P12_0_PERI_TR_IO_INPUT20},
    {0u, 21u, P12_1, P12_1_PERI_TR_IO_INPUT21},
    {0u, 22u, P13_6, P13_6_PERI_TR_IO_INPUT22},
    {0u, 23u, P13_7, P13_7_PERI_TR_IO_INPUT23},
    {0u, 30u, P23_3, P23_3_PERI_TR_IO_INPUT30},
    {0u, 31u, P23_4, P23_4_PERI_TR_IO_INPUT31},
};

/* Connections for: peri_tr_io_output */
/* The actual channel_num has no value to how the connection works. However, the HAL driver needs
   to know the index of the input or output trigger line. Store that in the channel_num field
   instead. */
const cyhal_resource_pin_mapping_t cyhal_pin_map_peri_tr_io_output[2] = {
    {0u, 1u, P21_2, P21_2_PERI_TR_IO_OUTPUT1},
    {0u, 0u, P23_4, P23_4_PERI_TR_IO_OUTPUT0},
};

/* Connections for: scb_i2c_scl */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_i2c_scl[7] = {
    {7u, 0u, P0_1, P0_1_SCB7_I2C_SCL},
    {0u, 0u, P0_2, P0_2_SCB0_I2C_SCL},
    {7u, 0u, P2_2, P2_2_SCB7_I2C_SCL},
    {4u, 0u, P6_2, P6_2_SCB4_I2C_SCL},
    {5u, 0u, P7_2, P7_2_SCB5_I2C_SCL},
    {3u, 0u, P13_2, P13_2_SCB3_I2C_SCL},
    {1u, 0u, P18_2, P18_2_SCB1_I2C_SCL},
};

/* Connections for: scb_i2c_sda */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_i2c_sda[10] = {
    {7u, 0u, P0_0, P0_0_SCB7_I2C_SDA},
    {0u, 0u, P0_3, P0_3_SCB0_I2C_SDA},
    {7u, 0u, P2_1, P2_1_SCB7_I2C_SDA},
    {4u, 0u, P6_1, P6_1_SCB4_I2C_SDA},
    {5u, 0u, P7_1, P7_1_SCB5_I2C_SDA},
    {3u, 0u, P13_1, P13_1_SCB3_I2C_SDA},
    {2u, 0u, P14_1, P14_1_SCB2_I2C_SDA},
    {1u, 0u, P18_1, P18_1_SCB1_I2C_SDA},
    {2u, 0u, P19_1, P19_1_SCB2_I2C_SDA},
    {6u, 0u, P22_1, P22_1_SCB6_I2C_SDA},
};

/* Connections for: scb_spi_m_clk */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_clk[6] = {
    {0u, 0u, P0_2, P0_2_SCB0_SPI_CLK},
    {7u, 0u, P2_2, P2_2_SCB7_SPI_CLK},
    {4u, 0u, P6_2, P6_2_SCB4_SPI_CLK},
    {5u, 0u, P7_2, P7_2_SCB5_SPI_CLK},
    {3u, 0u, P13_2, P13_2_SCB3_SPI_CLK},
    {1u, 0u, P18_2, P18_2_SCB1_SPI_CLK},
};

/* Connections for: scb_spi_m_miso */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_miso[9] = {
    {0u, 0u, P0_0, P0_0_SCB0_SPI_MISO},
    {7u, 0u, P2_0, P2_0_SCB7_SPI_MISO},
    {4u, 0u, P6_0, P6_0_SCB4_SPI_MISO},
    {5u, 0u, P7_0, P7_0_SCB5_SPI_MISO},
    {3u, 0u, P13_0, P13_0_SCB3_SPI_MISO},
    {2u, 0u, P14_0, P14_0_SCB2_SPI_MISO},
    {1u, 0u, P18_0, P18_0_SCB1_SPI_MISO},
    {2u, 0u, P19_0, P19_0_SCB2_SPI_MISO},
    {6u, 0u, P22_0, P22_0_SCB6_SPI_MISO},
};

/* Connections for: scb_spi_m_mosi */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_mosi[9] = {
    {0u, 0u, P0_1, P0_1_SCB0_SPI_MOSI},
    {7u, 0u, P2_1, P2_1_SCB7_SPI_MOSI},
    {4u, 0u, P6_1, P6_1_SCB4_SPI_MOSI},
    {5u, 0u, P7_1, P7_1_SCB5_SPI_MOSI},
    {3u, 0u, P13_1, P13_1_SCB3_SPI_MOSI},
    {2u, 0u, P14_1, P14_1_SCB2_SPI_MOSI},
    {1u, 0u, P18_1, P18_1_SCB1_SPI_MOSI},
    {2u, 0u, P19_1, P19_1_SCB2_SPI_MOSI},
    {6u, 0u, P22_1, P22_1_SCB6_SPI_MOSI},
};

/* Connections for: scb_spi_m_select0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_select0[7] = {
    {0u, 0u, P0_3, P0_3_SCB0_SPI_SELECT0},
    {7u, 0u, P2_3, P2_3_SCB7_SPI_SELECT0},
    {4u, 0u, P6_3, P6_3_SCB4_SPI_SELECT0},
    {5u, 0u, P7_3, P7_3_SCB5_SPI_SELECT0},
    {3u, 0u, P13_3, P13_3_SCB3_SPI_SELECT0},
    {1u, 0u, P18_3, P18_3_SCB1_SPI_SELECT0},
    {7u, 0u, P23_3, P23_3_SCB7_SPI_SELECT0},
};

/* Connections for: scb_spi_m_select1 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_select1[5] = {
    {0u, 0u, P2_0, P2_0_SCB0_SPI_SELECT1},
    {4u, 0u, P6_4, P6_4_SCB4_SPI_SELECT1},
    {3u, 0u, P13_4, P13_4_SCB3_SPI_SELECT1},
    {1u, 0u, P18_4, P18_4_SCB1_SPI_SELECT1},
    {7u, 0u, P23_4, P23_4_SCB7_SPI_SELECT1},
};

/* Connections for: scb_spi_m_select2 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_select2[7] = {
    {0u, 0u, P2_1, P2_1_SCB0_SPI_SELECT2},
    {5u, 0u, P5_0, P5_0_SCB5_SPI_SELECT2},
    {4u, 0u, P6_5, P6_5_SCB4_SPI_SELECT2},
    {3u, 0u, P13_5, P13_5_SCB3_SPI_SELECT2},
    {1u, 0u, P18_5, P18_5_SCB1_SPI_SELECT2},
    {1u, 0u, P21_0, P21_0_SCB1_SPI_SELECT2},
    {7u, 0u, P23_5, P23_5_SCB7_SPI_SELECT2},
};

/* Connections for: scb_spi_m_select3 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_select3[3] = {
    {0u, 0u, P2_2, P2_2_SCB0_SPI_SELECT3},
    {3u, 0u, P13_6, P13_6_SCB3_SPI_SELECT3},
    {1u, 0u, P18_6, P18_6_SCB1_SPI_SELECT3},
};

/* Connections for: scb_spi_s_clk */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_clk[6] = {
    {0u, 0u, P0_2, P0_2_SCB0_SPI_CLK},
    {7u, 0u, P2_2, P2_2_SCB7_SPI_CLK},
    {4u, 0u, P6_2, P6_2_SCB4_SPI_CLK},
    {5u, 0u, P7_2, P7_2_SCB5_SPI_CLK},
    {3u, 0u, P13_2, P13_2_SCB3_SPI_CLK},
    {1u, 0u, P18_2, P18_2_SCB1_SPI_CLK},
};

/* Connections for: scb_spi_s_miso */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_miso[9] = {
    {0u, 0u, P0_0, P0_0_SCB0_SPI_MISO},
    {7u, 0u, P2_0, P2_0_SCB7_SPI_MISO},
    {4u, 0u, P6_0, P6_0_SCB4_SPI_MISO},
    {5u, 0u, P7_0, P7_0_SCB5_SPI_MISO},
    {3u, 0u, P13_0, P13_0_SCB3_SPI_MISO},
    {2u, 0u, P14_0, P14_0_SCB2_SPI_MISO},
    {1u, 0u, P18_0, P18_0_SCB1_SPI_MISO},
    {2u, 0u, P19_0, P19_0_SCB2_SPI_MISO},
    {6u, 0u, P22_0, P22_0_SCB6_SPI_MISO},
};

/* Connections for: scb_spi_s_mosi */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_mosi[9] = {
    {0u, 0u, P0_1, P0_1_SCB0_SPI_MOSI},
    {7u, 0u, P2_1, P2_1_SCB7_SPI_MOSI},
    {4u, 0u, P6_1, P6_1_SCB4_SPI_MOSI},
    {5u, 0u, P7_1, P7_1_SCB5_SPI_MOSI},
    {3u, 0u, P13_1, P13_1_SCB3_SPI_MOSI},
    {2u, 0u, P14_1, P14_1_SCB2_SPI_MOSI},
    {1u, 0u, P18_1, P18_1_SCB1_SPI_MOSI},
    {2u, 0u, P19_1, P19_1_SCB2_SPI_MOSI},
    {6u, 0u, P22_1, P22_1_SCB6_SPI_MOSI},
};

/* Connections for: scb_spi_s_select0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_select0[7] = {
    {0u, 0u, P0_3, P0_3_SCB0_SPI_SELECT0},
    {7u, 0u, P2_3, P2_3_SCB7_SPI_SELECT0},
    {4u, 0u, P6_3, P6_3_SCB4_SPI_SELECT0},
    {5u, 0u, P7_3, P7_3_SCB5_SPI_SELECT0},
    {3u, 0u, P13_3, P13_3_SCB3_SPI_SELECT0},
    {1u, 0u, P18_3, P18_3_SCB1_SPI_SELECT0},
    {7u, 0u, P23_3, P23_3_SCB7_SPI_SELECT0},
};

/* Connections for: scb_spi_s_select1 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_select1[5] = {
    {0u, 0u, P2_0, P2_0_SCB0_SPI_SELECT1},
    {4u, 0u, P6_4, P6_4_SCB4_SPI_SELECT1},
    {3u, 0u, P13_4, P13_4_SCB3_SPI_SELECT1},
    {1u, 0u, P18_4, P18_4_SCB1_SPI_SELECT1},
    {7u, 0u, P23_4, P23_4_SCB7_SPI_SELECT1},
};

/* Connections for: scb_spi_s_select2 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_select2[7] = {
    {0u, 0u, P2_1, P2_1_SCB0_SPI_SELECT2},
    {5u, 0u, P5_0, P5_0_SCB5_SPI_SELECT2},
    {4u, 0u, P6_5, P6_5_SCB4_SPI_SELECT2},
    {3u, 0u, P13_5, P13_5_SCB3_SPI_SELECT2},
    {1u, 0u, P18_5, P18_5_SCB1_SPI_SELECT2},
    {1u, 0u, P21_0, P21_0_SCB1_SPI_SELECT2},
    {7u, 0u, P23_5, P23_5_SCB7_SPI_SELECT2},
};

/* Connections for: scb_spi_s_select3 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_select3[3] = {
    {0u, 0u, P2_2, P2_2_SCB0_SPI_SELECT3},
    {3u, 0u, P13_6, P13_6_SCB3_SPI_SELECT3},
    {1u, 0u, P18_6, P18_6_SCB1_SPI_SELECT3},
};

/* Connections for: scb_uart_cts */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_cts[7] = {
    {0u, 0u, P0_3, P0_3_SCB0_UART_CTS},
    {7u, 0u, P2_3, P2_3_SCB7_UART_CTS},
    {4u, 0u, P6_3, P6_3_SCB4_UART_CTS},
    {5u, 0u, P7_3, P7_3_SCB5_UART_CTS},
    {3u, 0u, P13_3, P13_3_SCB3_UART_CTS},
    {1u, 0u, P18_3, P18_3_SCB1_UART_CTS},
    {7u, 0u, P23_3, P23_3_SCB7_UART_CTS},
};

/* Connections for: scb_uart_rts */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_rts[6] = {
    {0u, 0u, P0_2, P0_2_SCB0_UART_RTS},
    {7u, 0u, P2_2, P2_2_SCB7_UART_RTS},
    {4u, 0u, P6_2, P6_2_SCB4_UART_RTS},
    {5u, 0u, P7_2, P7_2_SCB5_UART_RTS},
    {3u, 0u, P13_2, P13_2_SCB3_UART_RTS},
    {1u, 0u, P18_2, P18_2_SCB1_UART_RTS},
};

/* Connections for: scb_uart_rx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_rx[9] = {
    {0u, 0u, P0_0, P0_0_SCB0_UART_RX},
    {7u, 0u, P2_0, P2_0_SCB7_UART_RX},
    {4u, 0u, P6_0, P6_0_SCB4_UART_RX},
    {5u, 0u, P7_0, P7_0_SCB5_UART_RX},
    {3u, 0u, P13_0, P13_0_SCB3_UART_RX},
    {2u, 0u, P14_0, P14_0_SCB2_UART_RX},
    {1u, 0u, P18_0, P18_0_SCB1_UART_RX},
    {2u, 0u, P19_0, P19_0_SCB2_UART_RX},
    {6u, 0u, P22_0, P22_0_SCB6_UART_RX},
};

/* Connections for: scb_uart_tx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_tx[9] = {
    {0u, 0u, P0_1, P0_1_SCB0_UART_TX},
    {7u, 0u, P2_1, P2_1_SCB7_UART_TX},
    {4u, 0u, P6_1, P6_1_SCB4_UART_TX},
    {5u, 0u, P7_1, P7_1_SCB5_UART_TX},
    {3u, 0u, P13_1, P13_1_SCB3_UART_TX},
    {2u, 0u, P14_1, P14_1_SCB2_UART_TX},
    {1u, 0u, P18_1, P18_1_SCB1_UART_TX},
    {2u, 0u, P19_1, P19_1_SCB2_UART_TX},
    {6u, 0u, P22_1, P22_1_SCB6_UART_TX},
};

/* Connections for: tcpwm_line */
const cyhal_resource_pin_mapping_t cyhal_pin_map_tcpwm_line[67] = {
    {0u, 18u, P0_0, P0_0_TCPWM0_LINE18},
    {0u, 17u, P0_1, P0_1_TCPWM0_LINE17},
    {0u, 14u, P0_2, P0_2_TCPWM0_LINE14},
    {0u, 13u, P0_3, P0_3_TCPWM0_LINE13},
    {0u, 7u, P2_0, P2_0_TCPWM0_LINE7},
    {0u, 6u, P2_1, P2_1_TCPWM0_LINE6},
    {0u, 5u, P2_2, P2_2_TCPWM0_LINE5},
    {0u, 4u, P2_3, P2_3_TCPWM0_LINE4},
    {0u, 9u, P5_0, P5_0_TCPWM0_LINE9},
    {0u, 10u, P5_1, P5_1_TCPWM0_LINE10},
    {0u, 11u, P5_2, P5_2_TCPWM0_LINE11},
    {0u, 12u, P5_3, P5_3_TCPWM0_LINE12},
    {1u, 0u, P6_0, P6_0_TCPWM0_LINE256},
    {0u, 0u, P6_1, P6_1_TCPWM0_LINE0},
    {1u, 1u, P6_2, P6_2_TCPWM0_LINE257},
    {0u, 1u, P6_3, P6_3_TCPWM0_LINE1},
    {1u, 2u, P6_4, P6_4_TCPWM0_LINE258},
    {0u, 2u, P6_5, P6_5_TCPWM0_LINE2},
    {1u, 4u, P7_0, P7_0_TCPWM0_LINE260},
    {0u, 15u, P7_1, P7_1_TCPWM0_LINE15},
    {1u, 5u, P7_2, P7_2_TCPWM0_LINE261},
    {0u, 16u, P7_3, P7_3_TCPWM0_LINE16},
    {0u, 19u, P8_0, P8_0_TCPWM0_LINE19},
    {0u, 20u, P8_1, P8_1_TCPWM0_LINE20},
    {0u, 21u, P8_2, P8_2_TCPWM0_LINE21},
    {0u, 36u, P12_0, P12_0_TCPWM0_LINE36},
    {0u, 37u, P12_1, P12_1_TCPWM0_LINE37},
    {0u, 38u, P12_2, P12_2_TCPWM0_LINE38},
    {0u, 39u, P12_3, P12_3_TCPWM0_LINE39},
    {1u, 8u, P13_0, P13_0_TCPWM0_LINE264},
    {0u, 44u, P13_1, P13_1_TCPWM0_LINE44},
    {1u, 9u, P13_2, P13_2_TCPWM0_LINE265},
    {0u, 45u, P13_3, P13_3_TCPWM0_LINE45},
    {1u, 10u, P13_4, P13_4_TCPWM0_LINE266},
    {2u, 4u, P13_4, P13_4_TCPWM0_LINE516},
    {0u, 46u, P13_5, P13_5_TCPWM0_LINE46},
    {1u, 11u, P13_6, P13_6_TCPWM0_LINE267},
    {2u, 5u, P13_6, P13_6_TCPWM0_LINE517},
    {0u, 47u, P13_7, P13_7_TCPWM0_LINE47},
    {0u, 48u, P14_0, P14_0_TCPWM0_LINE48},
    {2u, 6u, P14_0, P14_0_TCPWM0_LINE518},
    {0u, 49u, P14_1, P14_1_TCPWM0_LINE49},
    {1u, 6u, P18_0, P18_0_TCPWM0_LINE262},
    {2u, 0u, P18_0, P18_0_TCPWM0_LINE512},
    {1u, 7u, P18_1, P18_1_TCPWM0_LINE263},
    {0u, 55u, P18_2, P18_2_TCPWM0_LINE55},
    {2u, 1u, P18_2, P18_2_TCPWM0_LINE513},
    {0u, 54u, P18_3, P18_3_TCPWM0_LINE54},
    {0u, 53u, P18_4, P18_4_TCPWM0_LINE53},
    {2u, 2u, P18_4, P18_4_TCPWM0_LINE514},
    {0u, 52u, P18_5, P18_5_TCPWM0_LINE52},
    {0u, 51u, P18_6, P18_6_TCPWM0_LINE51},
    {2u, 3u, P18_6, P18_6_TCPWM0_LINE515},
    {0u, 50u, P18_7, P18_7_TCPWM0_LINE50},
    {1u, 3u, P19_0, P19_0_TCPWM0_LINE259},
    {0u, 26u, P19_1, P19_1_TCPWM0_LINE26},
    {0u, 42u, P21_0, P21_0_TCPWM0_LINE42},
    {0u, 41u, P21_1, P21_1_TCPWM0_LINE41},
    {0u, 40u, P21_2, P21_2_TCPWM0_LINE40},
    {0u, 39u, P21_3, P21_3_TCPWM0_LINE39},
    {0u, 34u, P22_0, P22_0_TCPWM0_LINE34},
    {0u, 33u, P22_1, P22_1_TCPWM0_LINE33},
    {1u, 11u, P23_3, P23_3_TCPWM0_LINE267},
    {0u, 25u, P23_4, P23_4_TCPWM0_LINE25},
    {0u, 24u, P23_5, P23_5_TCPWM0_LINE24},
    {0u, 23u, P23_6, P23_6_TCPWM0_LINE23},
    {0u, 22u, P23_7, P23_7_TCPWM0_LINE22},
};

/* Connections for: tcpwm_line_compl */
const cyhal_resource_pin_mapping_t cyhal_pin_map_tcpwm_line_compl[67] = {
    {0u, 22u, P0_0, P0_0_TCPWM0_LINE_COMPL22},
    {0u, 18u, P0_1, P0_1_TCPWM0_LINE_COMPL18},
    {0u, 17u, P0_2, P0_2_TCPWM0_LINE_COMPL17},
    {0u, 14u, P0_3, P0_3_TCPWM0_LINE_COMPL14},
    {0u, 8u, P2_0, P2_0_TCPWM0_LINE_COMPL8},
    {0u, 7u, P2_1, P2_1_TCPWM0_LINE_COMPL7},
    {0u, 6u, P2_2, P2_2_TCPWM0_LINE_COMPL6},
    {0u, 5u, P2_3, P2_3_TCPWM0_LINE_COMPL5},
    {0u, 8u, P5_0, P5_0_TCPWM0_LINE_COMPL8},
    {0u, 9u, P5_1, P5_1_TCPWM0_LINE_COMPL9},
    {0u, 10u, P5_2, P5_2_TCPWM0_LINE_COMPL10},
    {0u, 11u, P5_3, P5_3_TCPWM0_LINE_COMPL11},
    {0u, 14u, P6_0, P6_0_TCPWM0_LINE_COMPL14},
    {1u, 0u, P6_1, P6_1_TCPWM0_LINE_COMPL256},
    {0u, 0u, P6_2, P6_2_TCPWM0_LINE_COMPL0},
    {1u, 1u, P6_3, P6_3_TCPWM0_LINE_COMPL257},
    {0u, 1u, P6_4, P6_4_TCPWM0_LINE_COMPL1},
    {1u, 2u, P6_5, P6_5_TCPWM0_LINE_COMPL258},
    {0u, 3u, P7_0, P7_0_TCPWM0_LINE_COMPL3},
    {1u, 4u, P7_1, P7_1_TCPWM0_LINE_COMPL260},
    {0u, 15u, P7_2, P7_2_TCPWM0_LINE_COMPL15},
    {1u, 5u, P7_3, P7_3_TCPWM0_LINE_COMPL261},
    {0u, 18u, P8_0, P8_0_TCPWM0_LINE_COMPL18},
    {0u, 19u, P8_1, P8_1_TCPWM0_LINE_COMPL19},
    {0u, 20u, P8_2, P8_2_TCPWM0_LINE_COMPL20},
    {0u, 35u, P12_0, P12_0_TCPWM0_LINE_COMPL35},
    {0u, 36u, P12_1, P12_1_TCPWM0_LINE_COMPL36},
    {0u, 37u, P12_2, P12_2_TCPWM0_LINE_COMPL37},
    {0u, 38u, P12_3, P12_3_TCPWM0_LINE_COMPL38},
    {0u, 43u, P13_0, P13_0_TCPWM0_LINE_COMPL43},
    {1u, 8u, P13_1, P13_1_TCPWM0_LINE_COMPL264},
    {0u, 44u, P13_2, P13_2_TCPWM0_LINE_COMPL44},
    {1u, 9u, P13_3, P13_3_TCPWM0_LINE_COMPL265},
    {0u, 45u, P13_4, P13_4_TCPWM0_LINE_COMPL45},
    {1u, 10u, P13_5, P13_5_TCPWM0_LINE_COMPL266},
    {2u, 4u, P13_5, P13_5_TCPWM0_LINE_COMPL516},
    {0u, 46u, P13_6, P13_6_TCPWM0_LINE_COMPL46},
    {1u, 11u, P13_7, P13_7_TCPWM0_LINE_COMPL267},
    {2u, 5u, P13_7, P13_7_TCPWM0_LINE_COMPL517},
    {0u, 47u, P14_0, P14_0_TCPWM0_LINE_COMPL47},
    {0u, 48u, P14_1, P14_1_TCPWM0_LINE_COMPL48},
    {2u, 6u, P14_1, P14_1_TCPWM0_LINE_COMPL518},
    {1u, 5u, P18_0, P18_0_TCPWM0_LINE_COMPL261},
    {1u, 6u, P18_1, P18_1_TCPWM0_LINE_COMPL262},
    {2u, 0u, P18_1, P18_1_TCPWM0_LINE_COMPL512},
    {1u, 7u, P18_2, P18_2_TCPWM0_LINE_COMPL263},
    {0u, 55u, P18_3, P18_3_TCPWM0_LINE_COMPL55},
    {2u, 1u, P18_3, P18_3_TCPWM0_LINE_COMPL513},
    {0u, 54u, P18_4, P18_4_TCPWM0_LINE_COMPL54},
    {0u, 53u, P18_5, P18_5_TCPWM0_LINE_COMPL53},
    {2u, 2u, P18_5, P18_5_TCPWM0_LINE_COMPL514},
    {0u, 52u, P18_6, P18_6_TCPWM0_LINE_COMPL52},
    {0u, 51u, P18_7, P18_7_TCPWM0_LINE_COMPL51},
    {2u, 3u, P18_7, P18_7_TCPWM0_LINE_COMPL515},
    {0u, 50u, P19_0, P19_0_TCPWM0_LINE_COMPL50},
    {1u, 3u, P19_1, P19_1_TCPWM0_LINE_COMPL259},
    {0u, 43u, P21_0, P21_0_TCPWM0_LINE_COMPL43},
    {0u, 42u, P21_1, P21_1_TCPWM0_LINE_COMPL42},
    {0u, 41u, P21_2, P21_2_TCPWM0_LINE_COMPL41},
    {0u, 40u, P21_3, P21_3_TCPWM0_LINE_COMPL40},
    {0u, 35u, P22_0, P22_0_TCPWM0_LINE_COMPL35},
    {0u, 34u, P22_1, P22_1_TCPWM0_LINE_COMPL34},
    {1u, 10u, P23_3, P23_3_TCPWM0_LINE_COMPL266},
    {1u, 11u, P23_4, P23_4_TCPWM0_LINE_COMPL267},
    {0u, 25u, P23_5, P23_5_TCPWM0_LINE_COMPL25},
    {0u, 24u, P23_6, P23_6_TCPWM0_LINE_COMPL24},
    {0u, 23u, P23_7, P23_7_TCPWM0_LINE_COMPL23},
};

/* Connections for: tcpwm_tr_one_cnt_in */
const cyhal_resource_pin_mapping_t cyhal_pin_map_tcpwm_tr_one_cnt_in[126] = {
    {0u, 54u, P0_0, P0_0_TCPWM0_TR_ONE_CNT_IN54},
    {0u, 67u, P0_0, P0_0_TCPWM0_TR_ONE_CNT_IN67},
    {0u, 51u, P0_1, P0_1_TCPWM0_TR_ONE_CNT_IN51},
    {0u, 55u, P0_1, P0_1_TCPWM0_TR_ONE_CNT_IN55},
    {0u, 42u, P0_2, P0_2_TCPWM0_TR_ONE_CNT_IN42},
    {0u, 52u, P0_2, P0_2_TCPWM0_TR_ONE_CNT_IN52},
    {0u, 39u, P0_3, P0_3_TCPWM0_TR_ONE_CNT_IN39},
    {0u, 43u, P0_3, P0_3_TCPWM0_TR_ONE_CNT_IN43},
    {0u, 21u, P2_0, P2_0_TCPWM0_TR_ONE_CNT_IN21},
    {0u, 25u, P2_0, P2_0_TCPWM0_TR_ONE_CNT_IN25},
    {6u, 12u, P2_0, P2_0_TCPWM0_TR_ONE_CNT_IN1548},
    {0u, 18u, P2_1, P2_1_TCPWM0_TR_ONE_CNT_IN18},
    {0u, 22u, P2_1, P2_1_TCPWM0_TR_ONE_CNT_IN22},
    {6u, 15u, P2_1, P2_1_TCPWM0_TR_ONE_CNT_IN1551},
    {0u, 15u, P2_2, P2_2_TCPWM0_TR_ONE_CNT_IN15},
    {0u, 19u, P2_2, P2_2_TCPWM0_TR_ONE_CNT_IN19},
    {6u, 18u, P2_2, P2_2_TCPWM0_TR_ONE_CNT_IN1554},
    {0u, 12u, P2_3, P2_3_TCPWM0_TR_ONE_CNT_IN12},
    {0u, 16u, P2_3, P2_3_TCPWM0_TR_ONE_CNT_IN16},
    {6u, 21u, P2_3, P2_3_TCPWM0_TR_ONE_CNT_IN1557},
    {0u, 25u, P5_0, P5_0_TCPWM0_TR_ONE_CNT_IN25},
    {0u, 27u, P5_0, P5_0_TCPWM0_TR_ONE_CNT_IN27},
    {0u, 28u, P5_1, P5_1_TCPWM0_TR_ONE_CNT_IN28},
    {0u, 30u, P5_1, P5_1_TCPWM0_TR_ONE_CNT_IN30},
    {0u, 31u, P5_2, P5_2_TCPWM0_TR_ONE_CNT_IN31},
    {0u, 33u, P5_2, P5_2_TCPWM0_TR_ONE_CNT_IN33},
    {0u, 34u, P5_3, P5_3_TCPWM0_TR_ONE_CNT_IN34},
    {0u, 36u, P5_3, P5_3_TCPWM0_TR_ONE_CNT_IN36},
    {0u, 43u, P6_0, P6_0_TCPWM0_TR_ONE_CNT_IN43},
    {3u, 0u, P6_0, P6_0_TCPWM0_TR_ONE_CNT_IN768},
    {0u, 0u, P6_1, P6_1_TCPWM0_TR_ONE_CNT_IN0},
    {3u, 1u, P6_1, P6_1_TCPWM0_TR_ONE_CNT_IN769},
    {0u, 1u, P6_2, P6_2_TCPWM0_TR_ONE_CNT_IN1},
    {3u, 3u, P6_2, P6_2_TCPWM0_TR_ONE_CNT_IN771},
    {0u, 3u, P6_3, P6_3_TCPWM0_TR_ONE_CNT_IN3},
    {3u, 4u, P6_3, P6_3_TCPWM0_TR_ONE_CNT_IN772},
    {0u, 4u, P6_4, P6_4_TCPWM0_TR_ONE_CNT_IN4},
    {3u, 6u, P6_4, P6_4_TCPWM0_TR_ONE_CNT_IN774},
    {0u, 6u, P6_5, P6_5_TCPWM0_TR_ONE_CNT_IN6},
    {3u, 7u, P6_5, P6_5_TCPWM0_TR_ONE_CNT_IN775},
    {0u, 10u, P7_0, P7_0_TCPWM0_TR_ONE_CNT_IN10},
    {3u, 12u, P7_0, P7_0_TCPWM0_TR_ONE_CNT_IN780},
    {0u, 45u, P7_1, P7_1_TCPWM0_TR_ONE_CNT_IN45},
    {3u, 13u, P7_1, P7_1_TCPWM0_TR_ONE_CNT_IN781},
    {0u, 46u, P7_2, P7_2_TCPWM0_TR_ONE_CNT_IN46},
    {3u, 15u, P7_2, P7_2_TCPWM0_TR_ONE_CNT_IN783},
    {0u, 48u, P7_3, P7_3_TCPWM0_TR_ONE_CNT_IN48},
    {3u, 16u, P7_3, P7_3_TCPWM0_TR_ONE_CNT_IN784},
    {0u, 55u, P8_0, P8_0_TCPWM0_TR_ONE_CNT_IN55},
    {0u, 57u, P8_0, P8_0_TCPWM0_TR_ONE_CNT_IN57},
    {0u, 58u, P8_1, P8_1_TCPWM0_TR_ONE_CNT_IN58},
    {0u, 60u, P8_1, P8_1_TCPWM0_TR_ONE_CNT_IN60},
    {0u, 61u, P8_2, P8_2_TCPWM0_TR_ONE_CNT_IN61},
    {0u, 63u, P8_2, P8_2_TCPWM0_TR_ONE_CNT_IN63},
    {0u, 106u, P12_0, P12_0_TCPWM0_TR_ONE_CNT_IN106},
    {0u, 108u, P12_0, P12_0_TCPWM0_TR_ONE_CNT_IN108},
    {0u, 109u, P12_1, P12_1_TCPWM0_TR_ONE_CNT_IN109},
    {0u, 111u, P12_1, P12_1_TCPWM0_TR_ONE_CNT_IN111},
    {0u, 112u, P12_2, P12_2_TCPWM0_TR_ONE_CNT_IN112},
    {0u, 114u, P12_2, P12_2_TCPWM0_TR_ONE_CNT_IN114},
    {0u, 115u, P12_3, P12_3_TCPWM0_TR_ONE_CNT_IN115},
    {0u, 117u, P12_3, P12_3_TCPWM0_TR_ONE_CNT_IN117},
    {0u, 130u, P13_0, P13_0_TCPWM0_TR_ONE_CNT_IN130},
    {3u, 24u, P13_0, P13_0_TCPWM0_TR_ONE_CNT_IN792},
    {0u, 132u, P13_1, P13_1_TCPWM0_TR_ONE_CNT_IN132},
    {3u, 25u, P13_1, P13_1_TCPWM0_TR_ONE_CNT_IN793},
    {0u, 133u, P13_2, P13_2_TCPWM0_TR_ONE_CNT_IN133},
    {3u, 27u, P13_2, P13_2_TCPWM0_TR_ONE_CNT_IN795},
    {0u, 135u, P13_3, P13_3_TCPWM0_TR_ONE_CNT_IN135},
    {3u, 28u, P13_3, P13_3_TCPWM0_TR_ONE_CNT_IN796},
    {0u, 136u, P13_4, P13_4_TCPWM0_TR_ONE_CNT_IN136},
    {3u, 30u, P13_4, P13_4_TCPWM0_TR_ONE_CNT_IN798},
    {0u, 138u, P13_5, P13_5_TCPWM0_TR_ONE_CNT_IN138},
    {3u, 31u, P13_5, P13_5_TCPWM0_TR_ONE_CNT_IN799},
    {0u, 139u, P13_6, P13_6_TCPWM0_TR_ONE_CNT_IN139},
    {3u, 33u, P13_6, P13_6_TCPWM0_TR_ONE_CNT_IN801},
    {0u, 141u, P13_7, P13_7_TCPWM0_TR_ONE_CNT_IN141},
    {3u, 34u, P13_7, P13_7_TCPWM0_TR_ONE_CNT_IN802},
    {0u, 142u, P14_0, P14_0_TCPWM0_TR_ONE_CNT_IN142},
    {0u, 144u, P14_0, P14_0_TCPWM0_TR_ONE_CNT_IN144},
    {0u, 145u, P14_1, P14_1_TCPWM0_TR_ONE_CNT_IN145},
    {0u, 147u, P14_1, P14_1_TCPWM0_TR_ONE_CNT_IN147},
    {3u, 16u, P18_0, P18_0_TCPWM0_TR_ONE_CNT_IN784},
    {3u, 18u, P18_0, P18_0_TCPWM0_TR_ONE_CNT_IN786},
    {3u, 19u, P18_1, P18_1_TCPWM0_TR_ONE_CNT_IN787},
    {3u, 21u, P18_1, P18_1_TCPWM0_TR_ONE_CNT_IN789},
    {0u, 165u, P18_2, P18_2_TCPWM0_TR_ONE_CNT_IN165},
    {3u, 22u, P18_2, P18_2_TCPWM0_TR_ONE_CNT_IN790},
    {0u, 162u, P18_3, P18_3_TCPWM0_TR_ONE_CNT_IN162},
    {0u, 166u, P18_3, P18_3_TCPWM0_TR_ONE_CNT_IN166},
    {0u, 159u, P18_4, P18_4_TCPWM0_TR_ONE_CNT_IN159},
    {0u, 163u, P18_4, P18_4_TCPWM0_TR_ONE_CNT_IN163},
    {0u, 156u, P18_5, P18_5_TCPWM0_TR_ONE_CNT_IN156},
    {0u, 160u, P18_5, P18_5_TCPWM0_TR_ONE_CNT_IN160},
    {0u, 153u, P18_6, P18_6_TCPWM0_TR_ONE_CNT_IN153},
    {0u, 157u, P18_6, P18_6_TCPWM0_TR_ONE_CNT_IN157},
    {0u, 150u, P18_7, P18_7_TCPWM0_TR_ONE_CNT_IN150},
    {0u, 154u, P18_7, P18_7_TCPWM0_TR_ONE_CNT_IN154},
    {0u, 151u, P19_0, P19_0_TCPWM0_TR_ONE_CNT_IN151},
    {3u, 9u, P19_0, P19_0_TCPWM0_TR_ONE_CNT_IN777},
    {6u, 0u, P19_0, P19_0_TCPWM0_TR_ONE_CNT_IN1536},
    {0u, 78u, P19_1, P19_1_TCPWM0_TR_ONE_CNT_IN78},
    {3u, 10u, P19_1, P19_1_TCPWM0_TR_ONE_CNT_IN778},
    {6u, 1u, P19_1, P19_1_TCPWM0_TR_ONE_CNT_IN1537},
    {0u, 126u, P21_0, P21_0_TCPWM0_TR_ONE_CNT_IN126},
    {0u, 130u, P21_0, P21_0_TCPWM0_TR_ONE_CNT_IN130},
    {0u, 123u, P21_1, P21_1_TCPWM0_TR_ONE_CNT_IN123},
    {0u, 127u, P21_1, P21_1_TCPWM0_TR_ONE_CNT_IN127},
    {0u, 120u, P21_2, P21_2_TCPWM0_TR_ONE_CNT_IN120},
    {0u, 124u, P21_2, P21_2_TCPWM0_TR_ONE_CNT_IN124},
    {0u, 117u, P21_3, P21_3_TCPWM0_TR_ONE_CNT_IN117},
    {0u, 121u, P21_3, P21_3_TCPWM0_TR_ONE_CNT_IN121},
    {0u, 102u, P22_0, P22_0_TCPWM0_TR_ONE_CNT_IN102},
    {0u, 106u, P22_0, P22_0_TCPWM0_TR_ONE_CNT_IN106},
    {0u, 99u, P22_1, P22_1_TCPWM0_TR_ONE_CNT_IN99},
    {0u, 103u, P22_1, P22_1_TCPWM0_TR_ONE_CNT_IN103},
    {3u, 31u, P23_3, P23_3_TCPWM0_TR_ONE_CNT_IN799},
    {3u, 33u, P23_3, P23_3_TCPWM0_TR_ONE_CNT_IN801},
    {0u, 75u, P23_4, P23_4_TCPWM0_TR_ONE_CNT_IN75},
    {3u, 34u, P23_4, P23_4_TCPWM0_TR_ONE_CNT_IN802},
    {0u, 72u, P23_5, P23_5_TCPWM0_TR_ONE_CNT_IN72},
    {0u, 76u, P23_5, P23_5_TCPWM0_TR_ONE_CNT_IN76},
    {0u, 69u, P23_6, P23_6_TCPWM0_TR_ONE_CNT_IN69},
    {0u, 73u, P23_6, P23_6_TCPWM0_TR_ONE_CNT_IN73},
    {0u, 66u, P23_7, P23_7_TCPWM0_TR_ONE_CNT_IN66},
    {0u, 70u, P23_7, P23_7_TCPWM0_TR_ONE_CNT_IN70},
};

#endif
