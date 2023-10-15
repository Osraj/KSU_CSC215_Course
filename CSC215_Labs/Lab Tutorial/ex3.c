#include <stdio.h>
int pow(int base, int power);

int main() {
    int num = 1;

    printf("N\tN^2\tN^3\tN^4");
    while (num <= 10) {
        printf("%d\t%d\t%d\t%d", num, pow(num,2), pow(num,3), pow(num,4));
        num++;
    }

    return 0;
}

int pow(base,power) {
    int i; 
    for(i = 0; i<power; i++){
        base*=base;
    }
    return base;
    }