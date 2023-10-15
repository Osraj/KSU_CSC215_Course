/*
 * CSC215 - Lab07 - ex2
 *
 *      Write a program to compare two strings using pointers.
 */

#include <stdio.h>

/* Function to compare two strings using pointers */
int compareStrings(char *str1, char *str2)
{
    /* Loop until either string ends or characters don't match */
    while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
    {
        str1++; /* Move to next character in str1 */
        str2++; /* Move to next character in str2 */
    }
    /* Return the difference of the characters where they first differed or 0 if they are the same */
    return *str1 - *str2;
}

int main()
{
    char str1[] = "Hello";
    char str2[] = "World";
    printf("Comparison: %d\n", compareStrings(str1, str2));
    return 0;
}
