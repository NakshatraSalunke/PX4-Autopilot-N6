#include <px4_platform_common/px4_config.h>
#include <px4_platform_common/init.h>
#include <px4_platform_common/board_common.h>

#include <stdbool.h>

__EXPORT int board_app_initialize(uintptr_t arg)
{
	/* Minimal initialization for NSH */
	return 0;
}

void stm32_board_initialize(void)
{
	/* Configure on-board LEDs if available */
}

#ifdef CONFIG_BOARD_LATE_INITIALIZE
void board_late_initialize(void)
{
	/* Perform board-specific initialization */
}
#endif
