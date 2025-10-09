#include <stdio.h>

void swap(void *x, void *y) {
    int temp = *(int*)x;
    *(int*)x = *(int*)y;
    *(int*)y = temp;
}

int main(void) {
    int a = 10, b = 20;

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap:  a = %d, b = %d\n", a, b);

    return 0;
}