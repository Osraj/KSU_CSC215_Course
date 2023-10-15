/*
 * CSC215 - Lab07 - assignment
 *
 *      Lab assignment: String Splitting: (5 points)
 *          Write a program to split a string into words using pointers.
 *          Hint: you may need to count words in the string before allocating enough space. After that do the
 *          copying process for each word.
 */

#include <stdio.h>
#include <stdlib.h>

/* Function to count the number of words in a string */
int countWords(char *str)
{
    int count = 0;
    int inWord = 0; /* flag to check if inside a word */
    while (*str != '\0')
    {
        if (*str == ' ' || *str == '\n' || *str == '\t')
        {
            inWord = 0;
        }
        else if (!inWord)
        {
            inWord = 1;
            count++;
        }
        str++;
    }
    return count;
}

/* Function to split a string into words */
char **splitString(char *str)
{
    int words = countWords(str);
    char **result = (char **)malloc(words * sizeof(char *));
    char *token;
    int index = 0;

    /* Loop to extract words and store them in the result array */
    while ((token = strtok(str, " \n\t")) != NULL)
    {
        result[index] = token;
        str = NULL; /* strtok requires null for subsequent calls */
        index++;
    }
    return result;
}

int main()
{
    char str[] = "Hello, World! This is a test.";
    char **words = splitString(str);
    int numWords = countWords(str);
    for (int i = 0; i < numWords; i++)
    {
        printf("Word %d: %s\n", i + 1, words[i]);
    }
    free(words);
    return 0;
}
