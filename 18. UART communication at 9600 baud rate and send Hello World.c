// EXP-18: UART COMMUNICATION AT 9600 BAUD RATE AND SEND "HELLO WORLD!"
// @Author K. S. MAHAMMAD LIYAZ,192212149
#include <reg51.h>

void UART_Init() {
    TMOD = 0x20;  
    TH1 = 0xFD;   
    SCON = 0x50;  
    TR1 = 1;      
}

void UART_SendChar(char c) {
    SBUF = c;         
    while (TI == 0);  
    TI = 0;           
}

void UART_SendString(char *str) {
    while (*str) {
        UART_SendChar(*str++);  
    }
}

void main() {
    UART_Init();                   
    UART_SendString("Hello, World!"); 

    while (1); 
}
