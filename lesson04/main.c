int main() {
    *((unsigned int *)0x400FE608U) = 0X20U;
    *((unsigned int *)0x40025400U) = 0X0EU;
    *((unsigned int *)0x4002551CU) = 0X0EU;
    
    while (1) {
        *((unsigned int *)0x400253FCU) = 0X02U;
        
        int counter = 0;
        while (counter < 1000000) {
            ++counter;
        }
        
        *((unsigned int *)0x400253FCU) = 0X00U;
        
        counter = 0;
        while (counter < 1000000) {
            ++counter;
        }
    }
    
    
    return 0;
}
