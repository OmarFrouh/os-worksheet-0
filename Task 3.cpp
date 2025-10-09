#include <stdio.h>

int arrays_equal(int *a, int *b, int length) {
    if (a == NULL || b == NULL) return 0;
    for (int i = 0; i < length; i++) {
        if (a[i] != b[i]) return 0;
    }
    return 1;
}

int main(void) {
    int arr1[] = {10, 20, 30};
    int arr2[] = {10, 20, 30};
    int arr3[] = {10, 25, 30};

    printf("%d\n", arrays_equal(arr1, arr2, 3));
    printf("%d\n", arrays_equal(arr1, arr3, 3));

    return 0;
}