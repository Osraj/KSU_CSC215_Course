/*
 * CSC215 - Lab07 - ex1
 *
 *      Write a program to find the length of a string using pointers.
 */

#include <stdio.h>

/* Function to calculate the length of a string using pointers */
int stringLength(char *str)
{
    int length = 0; /* Initialize length to 0 */
    while (*str != '\0')
    {             /* Loop until end of string */
        length++; /* Increment length */
        str++;    /* Move pointer to next character */
    }
    return length;
}

int main()
{
    char str[] = "Hello, World!";
    printf("Length: %d\n", stringLength(str));
    return 0;
}
