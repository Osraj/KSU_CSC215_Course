#include <stdio.h>
#include "IntArray.h"
#include "IntArray.c"

int main() {
    int arr[10];
    int size = 0;
    
    int i;
    for(i = 0; i < 10; i++) {
        int input;
        printf("%d : Enter a number (or 0 to quit) : ", i+1);
        scanf("%d", &input);
        if(input == 0) break;
        
        arr[size++] = input;
    }
    
    int maxIndex = max(arr, size);
    int secondMaxIndex = secondMax(arr, size);
    float avg = average(arr, size);

    printf("max : is at index %d and its value is %d\n", maxIndex, arr[maxIndex]);
    printf("second max : is at index %d and its value is %d\n", secondMaxIndex, arr[secondMaxIndex]);
    printf("the average is equal to %.2f\n", avg);

    return 0;
}
