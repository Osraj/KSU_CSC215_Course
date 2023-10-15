#include <stdio.h>
#include <string.h>

int main() {
    
    int MAX = 50;
    
    char firstName[MAX];
    printf("Enter the first name: ");
    scanf("%s", firstName);

    char lastName[MAX];
    printf("Enter the last name: ");
    scanf("%s", lastName);

    char fullName[MAX*2];
    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    printf("The full name is %s\n", fullName);



    return 0;
}