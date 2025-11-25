#include <stdio.h>

int main(void) {
    int n = 5;           
    int *ptr_to_n = &n;  

    *ptr_to_n = *ptr_to_n + 1; 

    printf("Value of n after incrementing using pointer: %d\n", n);
    printf("Address of n: %p\n", (void*)ptr_to_n); 

    return 0;
}
