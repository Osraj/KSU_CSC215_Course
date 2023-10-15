#include <stdio.h>

int main() {
    int num, p1, p2;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the position of the bits to swap (0-31): ");
    scanf("%d %d", &p1, &p2);

    int bit1 = (num >> p1) & 1;
    int bit2 = (num >> p2) & 1;

    num = (num & ~(1 << p1)) | (bit2 << p1);
    num = (num & ~(1 << p2)) | (bit1 << p2);

    printf("The number after swapping the bits: %d \n", num);

    return 0;
}