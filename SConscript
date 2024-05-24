from building import *
import rtconfig
Import('RTT_ROOT')

# get current directory
cwd = GetCurrentDir()
src = []
path = []

# The set of source files associated with this SConscript file.
src = Split('''
            source/cyhal_clock.c
            source/cyhal_hwmgr.c
            source/cyhal_syspm.c
            source/cyhal_system.c
            source/cyhal_uart.c
            source/cyhal_gpio.c
            source/cyhal_scb_common.c
            source/cyhal_interconnect.c
            source/cyhal_utils.c
            source/cyhal_lptimer.c
            source/cyhal_utils_impl.c
            source/cyhal_irq_impl.c
            ''')


if GetDepend(['SOC_CY8C624ABZI_S2D44']):
    src += ['COMPONENT_CAT1A/source/triggers/cyhal_triggers_psoc6_02.c']
    src += ['COMPONENT_CAT1A/source/pin_packages/cyhal_psoc6_02_124_bga.c']

if GetDepend(['SOC_CY8C6245LQI_S3D72']):
    src += ['COMPONENT_CAT1A/source/triggers/cyhal_triggers_psoc6_03.c']
    src += ['COMPONENT_CAT1A/source/pin_packages/cyhal_psoc6_03_68_qfn.c']

if GetDepend(['SOC_CY8C624ALQI_S2D42']):
    src += ['COMPONENT_CAT1A/source/triggers/cyhal_triggers_psoc6_02.c']
    src += ['COMPONENT_CAT1A/source/pin_packages/cyhal_psoc6_02_68_qfn.c']

if GetDepend(['SOC_CY8C6247BZI_D54']):
    src += ['COMPONENT_CAT1A/source/triggers/cyhal_triggers_psoc6_01.c']
    src += ['COMPONENT_CAT1A/source/pin_packages/cyhal_psoc6_01_124_bga.c']

if GetDepend(['SOC_CY8C6347BZI_BLD53']):
    src += ['COMPONENT_CAT1A/source/triggers/cyhal_triggers_psoc6_01.c']
    src += ['COMPONENT_CAT1A/source/pin_packages/cyhal_psoc6_01_116_bga_ble.c']

if GetDepend(['SOC_CY8C6244LQI_S4D92']):
    src += ['COMPONENT_CAT1A/source/triggers/cyhal_triggers_psoc6_04.c']
    src += ['COMPONENT_CAT1A/source/pin_packages/cyhal_psoc6_04_68_qfn.c']

if GetDepend(['SOC_XMC7200D_E272K8384AA']):
    src += ['COMPONENT_CAT1C/source/triggers/cyhal_triggers_xmc7200.c']
    src += ['COMPONENT_CAT1C/source/pin_packages/cyhal_xmc7200_272_bga.c']

if GetDepend(['RT_USING_SERIAL']):
    src += ['source/cyhal_uart.c']
    src += ['source/cyhal_dma.c']
    src += ['source/cyhal_dma_dw.c']
    src += ['source/cyhal_dma_dmac.c']

if GetDepend(['RT_USING_ADC']):
    if not GetDepend(['RT_USING_ADC']):
        src += ['source/cyhal_dma_dw.c']
        src += ['source/cyhal_dma_dmac.c']
        src += ['source/cyhal_dma.c']
    src += ['source/cyhal_adc_sar.c']
    src += ['source/cyhal_analog_common.c']

if GetDepend(['RT_USING_SDIO']) or GetDepend(['BSP_USING_CYW43012_WIFI']):
    src += ['source/cyhal_sdhc.c']

if GetDepend(['RT_USING_PWM']):
    src += ['source/cyhal_pwm.c']
    if not GetDepend(['RT_USING_HWTIMER']):
        src += ['source/cyhal_timer.c']
    src += ['source/cyhal_tcpwm_common.c']

if GetDepend(['RT_USING_SPI']):
    src += ['source/cyhal_spi.c']

if GetDepend(['RT_USING_I2C']):
    src += ['source/cyhal_i2c.c']

if GetDepend('BSP_USING_RTC'):
    src += ['source/cyhal_rtc.c']

if GetDepend('BSP_USING_ON_CHIP_FLASH') or GetDepend('BSP_USING_CYW43012_BT') :
    src += ['source/cyhal_flash.c']

if GetDepend(['RT_USING_WDT']):
    src += ['source/cyhal_wdt.c']

if GetDepend(['RT_USING_HWTIMER']):
    src += ['source/cyhal_timer.c']
    src += ['source/cyhal_tcpwm_common.c']

path = [cwd + '/include_pvt',
        cwd + '/include']

if GetDepend(['SOC_CY8C624ABZI_S2D44']):
    path += [cwd + '/COMPONENT_CAT1A/include']
    path += [cwd + '/COMPONENT_CAT1A/include/pin_packages']
    path += [cwd + '/COMPONENT_CAT1A/include/triggers']

if GetDepend(['SOC_CY8C6245LQI_S3D72']):
    path += [cwd + '/COMPONENT_CAT1A/include']
    path += [cwd + '/COMPONENT_CAT1A/include/pin_packages']
    path += [cwd + '/COMPONENT_CAT1A/include/triggers']

if GetDepend(['SOC_CY8C624ALQI_S2D42']):
    path += [cwd + '/COMPONENT_CAT1A/include']
    path += [cwd + '/COMPONENT_CAT1A/include/pin_packages']
    path += [cwd + '/COMPONENT_CAT1A/include/triggers']

if GetDepend(['SOC_CY8C6247BZI_D54']):
    path += [cwd + '/COMPONENT_CAT1A/include']
    path += [cwd + '/COMPONENT_CAT1A/include/pin_packages']
    path += [cwd + '/COMPONENT_CAT1A/include/triggers']

if GetDepend(['SOC_CY8C6347BZI_BLD53']):
    path += [cwd + '/COMPONENT_CAT1A/include']
    path += [cwd + '/COMPONENT_CAT1A/include/pin_packages']
    path += [cwd + '/COMPONENT_CAT1A/include/triggers']

if GetDepend(['SOC_CY8C6244LQI_S4D92']):
    path += [cwd + '/COMPONENT_CAT1A/include']
    path += [cwd + '/COMPONENT_CAT1A/include/pin_packages']
    path += [cwd + '/COMPONENT_CAT1A/include/triggers']

if GetDepend(['SOC_XMC7200D_E272K8384AA']):
    path += [cwd + '/COMPONENT_CAT1C/include']
    path += [cwd + '/COMPONENT_CAT1C/include/pin_packages']
    path += [cwd + '/COMPONENT_CAT1C/include/triggers']

group = DefineGroup('Libraries', src, depend=[''], CPPPATH=path)
Return('group')
