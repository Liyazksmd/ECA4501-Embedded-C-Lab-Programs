// EXP-4: ADDING OF ARRAY OF 16 BIT NO & STROING IN 32 BIT RESURT IN INTERNAL RAM.
// @Author K. S. MAHAMMAD LIYAZ,192212149
#include <reg51.h>
#define ARRAY_SIZE 5

code unsigned int numbers[ARRAY_SIZE] = {1000, 2000, 3000, 4000, 5000};

unsigned long result;  // 32-bit result

void main() {
    unsigned int i;
    unsigned long sum = 0; 
    
    for (i = 0; i < ARRAY_SIZE; i++) {
        sum += numbers[i];
    }
    
    result = sum;
    
    while (1);
}
