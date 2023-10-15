/*
* CSC215 - Lab06 - ex3
*
*   Exercise 3. Loop thru string using pointers:
*       Write a C program to read and store a string then print the string using pointers.
*           Enter any string : CSC215
*           The entered string is : CSC215
*/

#include <stdio.h>

int main() {
    char inputString[100];  /* Declare an array to store the input string */
    char *ptr;             /* Declare a pointer to char */

    printf("Enter any string: ");
    scanf("%s", inputString);  /* Read the string from user input */

    /* Assign the address of the first character of the inputString to ptr */
    ptr = inputString;

    printf("The entered string is: ");

    /* Loop through the string using a pointer and print each character */
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;  /* Move the pointer to the next character */
    }

    printf("\n");

    return 0;
}
