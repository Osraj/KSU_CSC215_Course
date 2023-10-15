/*
 * CSC215 - Lab07 - ex9
 *
 *      Write a program to count the number of words in a string using pointers.
 */

#include <stdio.h>

/* Function to count the number of words in a string using pointers */
int countWords(char *str)
{
    int count = 0;  /* Initialize word count to 0 */
    int inWord = 0; /* Flag to check if inside a word */
    while (*str != '\0')
    { /* Loop until end of string */
        if (*str == ' ' || *str == '\n' || *str == '\t')
        {               /* If current character is a space or newline or tab */
            inWord = 0; /* Reset the flag */
        }
        else if (!inWord)
        {               /* If not inside a word and current character is not a space */
            inWord = 1; /* Set the flag */
            count++;    /* Increment word count */
        }
        str++; /* Move pointer to next character */
    }
    return count;
}

int main()
{
    char str[] = "Hello, World! This is a test.";
    printf("Number of words: %d\n", countWords(str));
    return 0;
}
