// EXP-13: 2X2 MATRIX
// @Author K. S. MAHAMMAD LIYAZ,192212149
#include <reg51.h>

void main() {
    unsigned char A[2][2] = {{1, 2}, {3, 4}};  
	unsigned char B[2][2] = {{5, 6}, {7, 8}};  
    unsigned char C[2][2];                     
    unsigned char i, j;
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    P0 = (C[0][0] << 4) | (C[0][1] & 0x0F);  
    P1 = (C[1][0] << 4) | (C[1][1] & 0x0F);  

    while (1);  
}
