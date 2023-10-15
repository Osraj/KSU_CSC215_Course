/*
* CSC215 - Lab06 - ex4
*
*   Exercise 4. Loop thru string using pointers:
*       Write your implementation of strlen() function call it mystrlen (1 point)
*       The strlen() function takes a string as an argument and returns its length.
*/

#include <stdio.h>

/* Custom implementation of strlen() function */
int mystrlen(char *str) {
    char *ptr = str;  /* Initialize a pointer to the start of the string */

    /* Loop through the string until the null terminator is found */
    while (*ptr != '\0') {
        ptr++;  /* Move the pointer to the next character */
    }

    /* Calculate the length of the string by subtracting the initial address */
    return (int)(ptr - str);
}

int main() {
    char inputString[100];  /* Declare an array to store the input string */

    printf("Enter a string: ");
    scanf("%s", inputString);  /* Read the string from user input */

    /* Call the custom mystrlen() function to get the string length */
    int length = mystrlen(inputString);

    printf("Length of the entered string is: %d\n", length);

    return 0;
}
