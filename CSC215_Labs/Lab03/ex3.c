#include <stdio.h>

int main() {

    printf("sum of all multiples of 7 from 1 to 100 is ");

    int i;
    int total=0;
    for(i=0; i<=100; i++){
        if(i%7==0){
            total+=i;
        }
    }

    printf("%d\n", total);

    return 0;
}