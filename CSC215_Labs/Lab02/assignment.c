#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    a = 1;
    b = 2;
    c = 3;

    printf(":::: Powers Table ::::: \n");
    printf("Number\tSquare\tCube\t4th power\n");
    printf("%.0lf\t%.0lf\t%.0lf\t%.0lf\n", a, pow(a,2), pow(a,3), pow(a,4));
    printf("%.0lf\t%.0lf\t%.0lf\t%.0lf\n", b, pow(b,2), pow(b,3), pow(b,4));
    printf("%.0lf\t%.0lf\t%.0lf\t%.0lf\n", c, pow(c,2), pow(c,3), pow(c,4));


    return 0;
}