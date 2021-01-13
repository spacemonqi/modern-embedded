#include "lm4f120h5qr.h"

int main() {
    SYSCTL_RCGCGPIO_R = 0X20U;     // enable clock for GPIOF
    GPIO_PORTF_DIR_R = 0X0EU;    // set pins 1, 2 and 3 as outputs
    GPIO_PORTF_DEN_R = 0X0EU;
    
    while (1) {
        GPIO_PORTF_DATA_R = 0X02U;
        
        int volatile counter = 0;
        while (counter < 1000000) {    // delay loop
            ++counter;
        }
        
        GPIO_PORTF_DATA_R = 0X00U;
        
        counter = 0;
        while (counter < 1000000) {    // delay loop
            ++counter;
        }
    }
    
    return 0;
}
