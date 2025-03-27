// EXP-15: GREATEST COMMON DIVISOR
// @Author K. S. MAHAMMAD LIYAZ,192212149
#include <reg51.h>

unsigned int gcd(unsigned int a, unsigned int b) {
    while (b != 0) {
        unsigned int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void main() {
    unsigned int num1 = 48, num2 = 18; 
    unsigned int result;

    result = gcd(num1, num2); 

    P0 = result; 

    while (1); 
}
