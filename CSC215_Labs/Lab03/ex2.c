#include <stdio.h>

int main() {
    float feh;
    printf("\tCelsius\t\t\tFahrenheit\n");
    
    int i;
    for (i = 30; i <= 50; i++)
    {
        /* calculate Fahrenheit */
        feh = (i * 9.0 / 5.0) + 32.0;

        printf("\t%d\t\t\t%+.3f \n", i, feh);
    }

    return 0;
}



