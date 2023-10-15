#include <stdio.h>

/* Function to count even and odd numbers in an array */
void countEvenAndOdd(int arr[], int size, int *evenCount, int *oddCount) {
    *evenCount = 0;
    *oddCount = 0;

    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            (*evenCount)++;
        } else {
            (*oddCount)++;
        }
    }
}

int main() {
    int arr[50];
    int i;
    int size=0;
    for(i = 0; i < 10; i++) {
        int input;
        printf("%d : Enter a number (or 0 to quit) : ", i+1);
        scanf("%d", &input);
        if(input == 0) break;
        
        arr[size++] = input;
    }
    int evenCount, oddCount;

    countEvenAndOdd(arr, size, &evenCount, &oddCount);

    printf("number of even number in the array is %d\n", evenCount);
    printf("number of odd number in the array is %d\n", oddCount);

    return 0;
}
