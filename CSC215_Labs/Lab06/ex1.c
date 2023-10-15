/* CSC215 - Lab06 - ex1
 * 
 *      Exercise 1. Declare and Print a pointer
 *          Write a program to declare and initialize a pointer to an integer variable. Then, print the value of the
 *          pointer and the value of the integer variable. 
*/

#include <stdio.h>

int main() {
    /* Declare an integer variable */
    int integerVar = 42;

    /* Declare a pointer to an integer and initialize it to point to integerVar */
    int *pointerToInt = &integerVar;

    /* Print the value of the pointer and the value of the integer variable */
    printf("Value of the pointer: %p\n", (void *)pointerToInt); /* Use %p to print pointer addresses */
    printf("Value of the integer variable: %d\n", *pointerToInt); /* Use * to dereference the pointer */

    return 0;
}
