#include <stdio.h>

int main() {
    double pi = 0;
    int i;
    int required_terms_for_314 = 0, required_terms_for_3141 = 0, required_terms_for_31415 = 0, required_terms_for_314159 = 0;

    /* Print the table header */
    printf("Number of Terms | Approximation of π\n");
    printf("-----------------|---------------------\n");


    for (i = 0; required_terms_for_314159 == 0; i++) {
        /* Compute π using the formula */
        if (i % 2 == 0) {
            pi += (4.0 / (2.0 * i + 1));
        } else {
            pi -= (4.0 / (2.0 * i + 1));
        }

        /* Print the approximation after each term */
        printf("%15d | %.10f\n", i + 1, pi);

        if (required_terms_for_314 == 0 && pi >= 3.14 && pi < 3.15) {
            required_terms_for_314 = i + 1;
        }
        if (required_terms_for_3141 == 0 && pi >= 3.141 && pi < 3.142) {
            required_terms_for_3141 = i + 1;
        }
        if (required_terms_for_31415 == 0 && pi >= 3.1415 && pi < 3.1416) {
            required_terms_for_31415 = i + 1;
        }
        if (required_terms_for_314159 == 0 && pi >= 3.14159 && pi < 3.14160) {
            required_terms_for_314159 = i + 1;
        }
    }


    /*
    Required terms for 3.14: 119
    Required terms for 3.141: 1688
    Required terms for 3.1415: 10794
    Required terms for 3.14159: 136121
    */
    printf("\n");
    printf("Required terms for 3.14: %d\n", required_terms_for_314);
    printf("Required terms for 3.141: %d\n", required_terms_for_3141);
    printf("Required terms for 3.1415: %d\n", required_terms_for_31415);
    printf("Required terms for 3.14159: %d\n", required_terms_for_314159);

    return 0;
}