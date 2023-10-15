/*
* CSC215 - Lab06 - Bonus
*   
*   Bonus exercise:
*       Write a program in ANSI C to find the largest element using Dynamic Memory Allocation
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int n, i;
    int max;

    /* Prompt user for the number of elements */
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    /* Allocate memory dynamically for 'n' integers */
    array = (int *) malloc(n * sizeof(int));
    if(array == NULL) {
        printf("Memory allocation failed!\n");
        return 1; /* Exit with an error code */
    }

    /* Prompt user to enter the elements */
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    /* Find the largest element */
    max = array[0];
    for(i = 1; i < n; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }

    printf("The largest element is: %d\n", max);

    /* Free the allocated memory */
    free(array);

    return 0;
}
