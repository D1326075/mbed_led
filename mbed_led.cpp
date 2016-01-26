#include "mbed.h"


DigitalOut led_a(p21);
DigitalOut led_b(p22);
DigitalOut led_c(p23);
DigitalOut led_d(p24);
DigitalIn button(p20);

int main() {
    button.mode(PullUp);
    
    while(1) {
        button.read();
        while(button == 0){
            led_a = 1;
            wait(0.2);
            led_a = 0;
            led_b = 1;
            wait(0.2);
            led_b = 0;
            led_c = 1;
            wait(0.2);
            led_c = 0;
            led_d = 1;
            wait(0.2);
            led_d = 0;
            led_c = 1;
            wait(0.2);
            led_c = 0;
            led_b = 1;
            wait(0.2);
            led_b = 0;
        }
    }
}

