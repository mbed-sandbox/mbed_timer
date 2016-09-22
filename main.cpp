
#include "mbed.h"



#include "mbed.h"

Serial pc(P0_2, P0_3);
DigitalIn btn(P3_25);
Timer t;

int main() {
	pc.baud(115200);
    while(true) {
        while(btn != 0);
        t.start();
        while(btn != 1);
        t.stop();
        pc.printf("%i us\r\n", t.read_us());
        t.reset();
    }
}
