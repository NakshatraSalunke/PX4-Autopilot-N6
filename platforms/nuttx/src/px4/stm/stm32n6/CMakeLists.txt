# Minimal stm32n6 platform glue
add_subdirectory(../stm32_common/board_hw_info board_hw_info)
add_subdirectory(../stm32_common/board_reset board_reset)
add_subdirectory(../stm32_common/version version)

px4_add_library(arch_hrt empty.c)
px4_add_library(arch_board_critmon empty.c)
px4_add_library(romfs empty.c)
