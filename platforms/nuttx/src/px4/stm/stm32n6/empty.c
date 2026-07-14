// Empty file for dummy libraries
#include <stdint.h>

#if !defined(CONFIG_SCHED_INSTRUMENTATION)
struct print_load_s;
void init_print_load(struct print_load_s *s) {}
void print_load(int fd, struct print_load_s *s) {}
#endif

void board_autoled_on(int led) {}
void board_autoled_off(int led) {}
void board_autoled_initialize(void) {}

uint64_t hrt_absolute_time(void) { return 0; }
void hrt_init(void) {}
