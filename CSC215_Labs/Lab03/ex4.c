#include <stdio.h>

int main() 
{
    printf("X\tFactorial of X\n");

    int i;
    int factorial=1;
    for(i=1; i<=5; i++){
        factorial*=i;
        printf("%d\t%d\n", i, factorial);
    }

    return 0;
}