/*
 * CSC215 - Lab07 - bonus
 *
 *      Bonus exercise: Showing line number for multiple lines string (5 points)
 *          Write a program to read a text that contains multiple lines. Rewrite the string by printing the line
 *          number before the starting of each line
 */

#include <stdio.h>

/* Function to rewrite the string by printing the line number before the start of each line */
void printWithLineNumbers(char *str)
{
    int lineNumber = 1;         /* Initialize line number */
    printf("%d: ", lineNumber); /* Print the initial line number */

    /* Loop through each character in the string */
    while (*str != '\0')
    {
        putchar(*str); /* Print the current character */

        /* Check if the character is a newline */
        if (*str == '\n' && *(str + 1) != '\0')
        {
            lineNumber++;               /* Increment the line number */
            printf("%d: ", lineNumber); /* Print the next line number */
        }
        str++; /* Move to the next character */
    }
}

int main()
{
    char str[] = "Hello, World!\nThis is a test.\nHow are you?";
    printWithLineNumbers(str);
    return 0;
}
