#include <stdio.h>

int main() {
    float array[10];
    float *ptr = array;

    for (int i = 0; i < 10; i++) {
        array[i] = (float)i * 1.5;
    }
    printf("Enderešos do Array:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enderešo de array[%d]: %p\n", i, (void*)&array[i]);
    }

    return 0;
}
