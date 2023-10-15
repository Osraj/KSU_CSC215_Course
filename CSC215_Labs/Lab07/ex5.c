/*
 * CSC215 - Lab07 - ex5
 *
 *      Write a program to find the first occurrence of a character in a string using pointers.
 */

#include <stdio.h>

/* Function to find the first occurrence of a character in a string using pointers */
char *findFirstOccurrence(char *str, char ch)
{
    while (*str != '\0')
    { /* Loop until end of string */
        if (*str == ch)
        {               /* If current character matches the search character */
            return str; /* Return the current position */
        }
        str++; /* Move pointer to next character */
    }
    return NULL; /* If character is not found, return NULL */
}

int main()
{
    char str[] = "Hello, World!";
    char *result = findFirstOccurrence(str, 'o');
    if (result)
    {
        printf("First occurrence at position: %ld\n", result - str);
    }
    else
    {
        printf("Character not found.\n");
    }
    return 0;
}
