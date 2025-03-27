// EXP-16: MERGE OF TWO ARRAYS INTEGER INTO A SINGLE ARRAY
// @Author K. S. MAHAMMAD LIYAZ,192212149
#include <reg51.h>

void merge_arrays(unsigned char arr1[], unsigned char size1, unsigned char arr2[], unsigned char size2, unsigned char merged[]) {
    unsigned char i, j;
    
    for (i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    for (j = 0; j < size2; j++) {
        merged[size1 + j] = arr2[j];
    }
}

void main() {
    unsigned char arr1[] = {1, 3, 5, 7};
    unsigned char arr2[] = {2, 4, 6, 8};
    unsigned char size1 = sizeof(arr1) / sizeof(arr1[0]);
    unsigned char size2 = sizeof(arr2) / sizeof(arr2[0]);
    unsigned char merged[8]; 
    unsigned char i; 

    merge_arrays(arr1, size1, arr2, size2, merged);

    for (i = 0; i < (size1 + size2); i++) {  
        P0 = merged[i]; 
    }

    while (1); 
}
