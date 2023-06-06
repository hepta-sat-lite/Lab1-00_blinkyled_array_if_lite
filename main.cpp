#include "mbed.h"
DigitalOut myled[]={LED1, PB_1};
int main()
{
    int i=0;
    while (true) {
        if(i%2==0){
            myled[0] = 1;
            myled[1] = 0;
        }else{
            myled[0] = 0;
            myled[1] = 1;
        }
        i++;
        wait_ms(500);
    }
}
