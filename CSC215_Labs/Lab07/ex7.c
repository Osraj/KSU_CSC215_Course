/*
 * CSC215 - Lab07 - ex7
 *
 *      Write a program to remove all spaces from a string using pointers.
 */

#include <stdio.h>

/* Function to remove all spaces from a string using pointers */
void removeSpaces(char *str)
{
    char *dst = str; /* Initialize destination pointer with start of string */
    while (*str != '\0')
    { /* Loop until end of string */
        if (*str != ' ')
        {                  /* If current character is not a space */
            *dst++ = *str; /* Copy character to destination and move destination pointer */
        }
        str++; /* Move source pointer to next character */
    }
    *dst = '\0'; /* Null terminate the resulting string */
}

int main()
{
    char str[] = "Hello, World!";
    removeSpaces(str);
    printf("String without spaces: %s\n", str);
    return 0;
}
