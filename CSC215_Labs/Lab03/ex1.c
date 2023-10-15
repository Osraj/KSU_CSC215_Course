#include <stdio.h>

int main() {
    int num, value;
    int total = 0;

    printf("Enter the number of values to be processed: ");
    scanf("%d", &num);

    int i;
    for (i = 0; i < num; i++)
    {
        printf("Enter a value: ");
        scanf("%d", &value);
        total += value;
    }

    printf("Sum of the %d values is %d", num, total);

    return 0;
}