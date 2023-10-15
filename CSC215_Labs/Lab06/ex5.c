/*
* CSC215 - Lab06 - ex5
*
*   Exercise 5. Loop thru string using pointers:
*       Write a program in C to count the number of vowels and consonants in a string using a pointer.
*           Input a string: string
*           Number of vowels: 1
*           Number of constant: 5
*/

#include <stdio.h>
#include <ctype.h>  /* Include ctype.h for the isalpha() function */

int main() {
    char inputString[100];  /* Declare an array to store the input string */
    char *ptr;             /* Declare a pointer to char */
    int vowels = 0, consonants = 0;

    printf("Input a string: ");
    scanf("%s", inputString);  /* Read the string from user input */

    ptr = inputString;  /* Initialize the pointer to the start of the string */

    /* Loop through the string using a pointer */
    while (*ptr != '\0') {
        char ch = tolower(*ptr);  /* Convert the character to lowercase for easier vowel checking */

        if (isalpha(ch)) {  /* Check if the character is an alphabet character */
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;  /* Increment the vowel count if it's a vowel */
            } else {
                consonants++;  /* Increment the consonant count if it's a consonant */
            }
        }

        ptr++;  /* Move the pointer to the next character */
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
