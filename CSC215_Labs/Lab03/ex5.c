#include <stdio.h>

int main() {
    int i, j;

    printf("Enter the size of the triangle : ");
    int size;
    scanf("%d", &size);

    char pattern[size];

    for (i = 1; i <= size; i++) {
        
        for (j = 1; j <= size - i; j++) {
            printf(" ");
        }

    
        for (j = 1; j <= i; j++) {
            pattern[j-1]='*';
        }
        pattern[j-1]='\0';

        printf("%s\n", pattern);
    }

    return 0;
}
