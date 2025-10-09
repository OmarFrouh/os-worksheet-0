#include <stdio.h>

int main(void) {
    FILE *file = fopen("foo.txt", "r");
    if (file == NULL) return 1;

    int num, sum = 0;
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
    }

    fclose(file);
    printf("Sum: %d\n", sum);
    return 0;
}