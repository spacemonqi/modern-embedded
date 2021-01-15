#include <stdint.h>
#include "tm4c_cmsis.h"
#include "bsp.h"
#include "intrinsics.h"

int main() {
    SYSCTL->RCGC2 |= (1U << 5);  /* enable clock for GPIOF */
    SYSCTL->GPIOHSCTL |= (1U << 5); /* enable AHB for GPIOF */
    GPIOF_HS->DIR |= (LED_RED | LED_BLUE | LED_GREEN);
    GPIOF_HS->DEN |= (LED_RED | LED_BLUE | LED_GREEN);

    SysTick->LOAD = SYS_CLOCK_HZ/2U - 1U;
    SysTick->VAL = 0;
    SysTick->CTRL = (1U << 2) | (1U << 1) | (1U << 0);
    
    __enable_interrupt();
    
    while (1) {
    }
    //return 0;
}
