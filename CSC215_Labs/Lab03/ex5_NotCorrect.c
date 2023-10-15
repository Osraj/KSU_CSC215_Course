#include <stdio.h>

int main() 
{
    printf("Enter the size of the triangle : ");
    int size;
    scanf("%d", &size);
    size+=1;
    char pattern[size];

    int i;
    for(i=0; i< size-1; i++){
        pattern[i] = '*';
        pattern[i+1] = '\0';
        printf("%*s\n", size, pattern);
    }

    return 0;
}