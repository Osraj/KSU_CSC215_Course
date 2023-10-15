/*
 * CSC215 - Lab07 - ex4
 *
 *      Write a program to check if a string is a palindrome using pointers.
 */

#include <stdio.h>

/* Function to check if a string is a palindrome using pointers */
int isPalindrome(char *str)
{
    char *end = str; /* Initialize end pointer with start of string */
    /* Move end pointer to the end of string */
    while (*end != '\0')
    {
        end++;
    }
    end--; /* Move one position back to point to the last character */

    /* Loop until str pointer is less than end pointer */
    while (str < end)
    {
        /* If characters don't match, return 0 (false) */
        if (*str != *end)
        {
            return 0;
        }
        /* Move pointers towards each other */
        str++;
        end--;
    }
    return 1; /* Return 1 (true) if palindrome */
}

int main()
{
    char str[] = "madam";
    printf("Is Palindrome: %d\n", isPalindrome(str));
    return 0;
}
