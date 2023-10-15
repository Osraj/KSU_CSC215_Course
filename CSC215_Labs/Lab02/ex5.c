#include <stdio.h>

int main() {
    double num1 = 22.0;
    double num2 = 7.0;

    double answer = num1/num2;

    printf("%f \n", answer);
    printf("%.10f \n", answer);
    printf("%20.10f \n", answer);
    printf("%020.10f \n", answer);
    printf("%+.10f \n", answer);
    printf("%%%.10f \n", answer);
    printf("%e \n", answer);
    printf("%x \n", 31567);
    printf("%.5s \n", "Good Morning");
    printf("%10.5s \n", "Good Morning");
    printf("%-10.5s \n", "Good Morning");


    return 0;
}