/*
* CSC215 - Lab06 - Assignment
*
*   Lab assignment: ToUpperCase: (5 points)
*       Write a C program to convert string from lowercase to uppercase string using pointers.
*           Enter your text: This is a Text
*           Uppercase string : THIS IS A TEXT
*/

#include <stdio.h>
#include <ctype.h>  /* Include ctype.h for the toupper() function */

int main() {
    char inputString[100];  /* Declare an array to store the input string */
    char *ptr;             /* Declare a pointer to char */

    printf("Enter your text: ");
    gets(inputString);  /* Read the string from user input (deprecated function, but used for simplicity) */

    ptr = inputString;  /* Initialize the pointer to the start of the input string */

    /* Loop through the string using a pointer */
    while (*ptr != '\0') {
        *ptr = toupper(*ptr);  /* Convert the character to uppercase using toupper() */
        ptr++;  /* Move the pointer to the next character */
    }

    printf("Uppercase string: %s\n", inputString);  /* Print the uppercase string */

    return 0;
}
