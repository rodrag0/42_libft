#include <stdio.h>

void swap(int *a, int *b) {
    // your code here
    int temp = *a; // store value at a in temp
    *a = *b;
    *b = temp;

}

int main(void) {
    int x = 5;
    int y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swap:  x = %d, y = %d\n", x, y);

    return 0;
}
