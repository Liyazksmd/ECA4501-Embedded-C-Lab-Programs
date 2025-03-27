// EXP 12 - Fibonacci number
// @Author K. S. MAHAMMAD LIYAZ,192212149
#include <reg51.h>
void delay()
	{
    unsigned int i;
    for (i = 0; i < 30000; i++);
	}
void main() 
	{
    unsigned char a = 0, b = 1, c;
    unsigned char i;
    
    P0 = a; 
    delay();
    P1 = b; 
    delay();

    for (i = 2; i < 10; i++) 
		{ 
        c = a + b;  
        P2 = c;      
        delay();
        
        a = b; 
        b = c;
    }
    
    while (1);  
}
