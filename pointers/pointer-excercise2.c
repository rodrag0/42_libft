#include <stdio.h>

int sum_array(int *arr, int size) {
    // your code here
    int sum = 0;
    while (size > 0) {
        sum += *arr; 
        *(arr+1); // move to next element
        size--; // decrease size

        // decrease size
    }
    return(sum);
}

int main(void) {
    int numbers[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]); //calculates size because size of gets the size of whole array and numbers[0] is the first element

    int result = sum_array(numbers, size);

    printf("Sum = %d\n", result); // expected: 15
    return 0;
}
