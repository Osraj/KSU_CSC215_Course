/*
 * CSC215 - Lab07 - ex6
 *
 *      Write a program to find the first occurrence of a character in a string using pointers.
 */

#include <stdio.h>

/* Function to find the last occurrence of a character in a string using pointers */
char *findLastOccurrence(char *str, char ch)
{
    char *last = NULL; /* Initialize last pointer to NULL */
    while (*str != '\0')
    { /* Loop until end of string */
        if (*str == ch)
        {               /* If current character matches the search character */
            last = str; /* Update the last pointer */
        }
        str++; /* Move pointer to next character */
    }
    return last; /* Return the last occurrence or NULL if not found */
}

int main()
{
    char str[] = "Hello, World!";
    char *result = findLastOccurrence(str, 'o');
    if (result)
    {
        printf("Last occurrence at position: %ld\n", result - str);
    }
    else
    {
        printf("Character not found.\n");
    }
    return 0;
}
