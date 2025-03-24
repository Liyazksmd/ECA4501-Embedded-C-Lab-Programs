// EXP-2: SUM OF FIRST 10 INTEGERS
// @Author K. S. MAHAMMAD LIYAZ,192212149
#include <reg51.h>

void main() {
    int sum = 0;
    int i;

    for(i = 1; i <= 10; i++) {
        sum += i;
    }
		P0=sum;

    while(1); 
}
