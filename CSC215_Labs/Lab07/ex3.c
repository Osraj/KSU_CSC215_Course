/*
 * CSC215 - Lab07 - ex3
 *
 *      Write a program to reverse a string using pointers.
 */

#include <stdio.h>

/* Function to reverse a string using pointers */
void reverseString(char *str)
{
    char *end = str; /* Initialize end pointer with start of string */
    /* Move end pointer to the end of string */
    while (*end != '\0')
    {
        end++;
    }
    end--; /* Move one position back to point to the last character */

    char temp;
    /* Loop until str pointer is less than end pointer */
    while (str < end)
    {
        /* Swap characters */
        temp = *str;
        *str = *end;
        *end = temp;
        /* Move pointers towards each other */
        str++;
        end--;
    }
}

int main()
{
    char str[] = "Hello, World!";
    reverseString(str);
    printf("Reversed: %s\n", str);
    return 0;
}
