#include <stdio.h>

int main(void) {
    int arr[3] = {10, 30, 2000};
    int *ptr = arr;

    printf("Array elements and their addresses:\n");

    for (int i = 0; i < 3; i++) {
        printf("Element %d: %d \t Address: %p\n", i, *(ptr + i), ptr + i);
    }

    return 0;
}