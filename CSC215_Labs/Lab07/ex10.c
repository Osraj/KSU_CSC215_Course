/*
 * CSC215 - Lab07 - ex10
 *
 *      Write a program to count lines on a text that contains multiple lines.
 */

#include <stdio.h>

/* Function to count the number of lines in a string */
int countLines(char *str)
{
    int count = 1; /* Initialize line count to 1 assuming the text is non-empty */
    while (*str != '\0')
    { /* Loop until end of string */
        if (*str == '\n')
        {            /* If current character is a newline */
            count++; /* Increment line count */
        }
        str++; /* Move pointer to next character */
    }
    return count;
}

int main()
{
    char str[] = "Hello, World!\nThis is a test.\nHow are you?";
    printf("Number of lines: %d\n", countLines(str));
    return 0;
}
