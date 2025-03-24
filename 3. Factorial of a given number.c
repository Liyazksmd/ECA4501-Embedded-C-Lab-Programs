// EXP-3: FACTORIAL OF A GIVEN NUMBER
// @Author K. S. MAHAMMAD LIYAZ,192212149
#include <reg51.h>
#include <stdio.h>

void main() {
    unsigned char num = 12; 
    unsigned long factorial = 1;
    unsigned int i;

    for (i = 1; i <= num; i++) {
        factorial *= i;
    }
		P0=factorial;
		P1=(factorial & 0xff00)>>8;
		P2=(factorial & 0xff0000)>>16;
		P3=(factorial & 0xff000000)>>24;

    while (1); 
}
