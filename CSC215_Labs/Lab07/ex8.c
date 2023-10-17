/*
 * CSC215 - Lab07 - ex8
 *
 *      Write a program to convert a string to uppercase or lowercase using pointers.
 */

#include <stdio.h>

/* Function to convert string to uppercase using pointers */
void toUpperCase(char *str)
{
    while (*str != '\0')
    { /* Loop until end of string */
        if (*str >= 'a' && *str <= 'z')
        {                        /* If current character is lowercase */
            *str -= ('a' - 'A'); /* Convert to uppercase */
        }
        str++; /* Move pointer to next character */
    }
}

/* Function to convert string to lowercase using pointers */
void toLowerCase(char *str)
{
    while (*str != '\0')
    { /* Loop until end of string */
        if (*str >= 'A' && *str <= 'Z')
        {                        /* If current character is uppercase */
            *str += ('a' - 'A'); /* Convert to lowercase */
        }
        str++; /* Move pointer to next character */
    }
}

int main()
{
    char str1[] = "Hello, World!";
    char str2[] = "HELLO, WORLD!";
    toUpperCase(str1);
    toLowerCase(str2);
    printf("Uppercase: %s\n", str1);
    printf("Lowercase: %s\n", str2);
    return 0;
}
