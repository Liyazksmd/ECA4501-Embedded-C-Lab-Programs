// EXP-20: COUNT THE FREQUENCY OF EACH CHARACTER IN A GIVEN STRING
// @Author K. S. MAHAMMAD LIYAZ,192212149
#include <reg51.h>
void main() {
 char str[] = "embedded";
 unsigned char i;
 unsigned char xdata freq[256] = {0}; // Use external RAM (xdata)
 for (i = 0; str[i] != '\0'; i++) {
 freq[str[i]]++;
 }
 while (1);
}