#include <stdlib.h>
#include <stdio.h>

// Function to generate and print a list of random numbers
void generate_random_numbers(int *array, int size, int lower, int upper) {
    printf("Generated numbers: ");
    for (int i = 0; i < size; i++) {
        array[i] = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", array[i]); // Print each generated number
    }
    printf("\n");
}
