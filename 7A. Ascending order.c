// EXP-7A: ASCENDING ORDER
// @Author K. S. MAHAMMAD LIYAZ,192212149
#include <reg51.h>

void main() {
    unsigned long array[] = {0x33556666, 0xCCAADD00, 0x55998888, 0x77664444, 0x11223344};
    unsigned long temp;
    unsigned int i, j;

    for (i = 0; i < 4; i++) { 
        for (j = 0; j < 4 - i; j++) {  
            if (array[j] > array[j + 1]) { 
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    while (1); 
}
