// EXP-17: SORT AN ARRAY OF INTEGERS IN ASCENDING ORDER
// @Author K. S. MAHAMMAD LIYAZ,192212149
#include <reg51.h>

void bubble_sort(unsigned char arr[], unsigned char size) {
    unsigned char i, j, temp;
    
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void main() {
    unsigned char arr[] = {9, 4, 7, 1, 3, 6};  
    unsigned char size = sizeof(arr) / sizeof(arr[0]);
    unsigned char i;

    bubble_sort(arr, size);


    for (i = 0; i < size; i++) {  
        P0 = arr[i]; 
    }

    while (1);  
}
