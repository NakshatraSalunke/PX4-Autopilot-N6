#pragma once

#include <px4_platform_common/px4_config.h>
#include <nuttx/compiler.h>
#include <stdint.h>
#include <stm32_gpio.h>

/* USART1 GPIOs */
#define GPIO_USART1_TX   GPIO_USART1_TX_1
#define GPIO_USART1_RX   GPIO_USART1_RX_1

#define PX4_GPIO_INIT_LIST { }

#define PX4_NUMBER_I2C_BUSES 0
#define BOARD_I2C_BUS_CLOCK_INIT { }
#define PX4_NUMBER_SPI_BUSES 0

__BEGIN_DECLS
#ifndef __ASSEMBLY__

extern void board_peripheral_reset(int ms);

#include <px4_platform_common/board_common.h>
#endif /* __ASSEMBLY__ */
__END_DECLS
