#include <stdio.h>

void print_array(int *arr, int width, int height) {
    for (int r = 0; r < height; r++) {
        for (int c = 0; c < width; c++) {
            printf("%d ", arr[r * width + c]);
        }
        printf("\n");
    }
}

int main(void) {
    int arr[] = {
        1, 2, 3,
        4, 5, 6,
        7, 8, 9
    };

    print_array(arr, 3, 3);
    return 0;
}