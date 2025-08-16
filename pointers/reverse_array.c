#include <stdio.h>

void reverse_array(int *arr, int size) {
    // your code here
    int invarrray[size]; 
    int i = size;
    int j = 0;
    while(size > 0) {
        invarrray[size - 1] = *(arr + j); // store the current element in the new array
        j++; // move to next element
        size--; // decrease size
    }
    
    while(i > 0) {
        arr[i - 1] = invarrray[i - 1]; // copy the elements back to the original array
        i--; // decrease index
    }
}

int main(void) {
    int numbers[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    reverse_array(numbers, size);

    // print reversed array
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
