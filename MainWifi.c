#include <stdio.h>
#include <stdlib.h>
#include <peripheral/ports.h>

//#include <plib.h> //not sure what this is, not used in this program
//#include <p32xxxx.h> //not sure what's in here.....
//#include <WF_Config.h>
//#include <TCPIP MRF24W.h> //depends on Compiler.h

int main(void) {

    UART_setup();

    char *statement = "Hello World!\n\r";

    putsUART1(statement);

    //LED_test();

    //while(1){
    //    PORTWrite(IOPORT_A, 0xFFF);
    //    PORTWrite(IOPORT_G, 0xFFF);
    //    PORTWrite(IOPORT_F, 0xFFF);
    //}

    return (EXIT_SUCCESS);
}

//void LED_test(void){
//    PORTSetPinsDigitalOut(IOPORT_A, BIT_0 | BIT_1);
//    PORTSetPinsDigitalOut(IOPORT_G, BIT_6);
//    PORTSetPinsDigitalOut(IOPORT_F, BIT_0);
//}