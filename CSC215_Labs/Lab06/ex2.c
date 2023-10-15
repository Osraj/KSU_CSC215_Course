/*
* CSC215 - Lab06 - ex2
*
*   Exercise 2. Passing arguments by reference.
*       Declare and define swap function.
*           void swap(int *a, int *b);
*
*       Write a program to test the swap function
*/

#include <stdio.h>

/* Function to swap two integers by reference */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    /* Call the swap function to swap the values of num1 and num2 */
    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
