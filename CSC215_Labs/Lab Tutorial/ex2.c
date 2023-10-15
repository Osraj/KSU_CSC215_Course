#include <stdio.h>

int main() {
    int num, temp, reminder;
    int sum = 0;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    temp = num;

    while (temp != 0) {
        reminder = temp % 10;
        sum += reminder;
        temp /= 10;
    }

    printf("The sum of the digits of %d is %d", num, sum);
    return 0;
}