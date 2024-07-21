#include "pico/stdlib.h"

int main() {
    timer_hw->dbgpause = 0;
    gpio_init(PICO_DEFAULT_LED_PIN);
    gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);
    stdio_init_all();
    while (true) {
        gpio_put(PICO_DEFAULT_LED_PIN, 1);
        printf("Toggle on\n");
        busy_wait_ms(1000);
        gpio_put(PICO_DEFAULT_LED_PIN, 0);
        printf("Toggle off\n");
        busy_wait_ms(1000);
    }
}
