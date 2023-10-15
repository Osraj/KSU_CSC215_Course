#include <stdio.h>

void arrangeArray(int arr[], int size) {
    int odd[size], even[size];
    int oddCount = 0, evenCount = 0;

    /* Separate odd and even numbers into two arrays */
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }

    /* Copy odd and even arrays back into the original array */
    for (i = 0; i < oddCount; i++) {
        arr[i] = odd[i];
    }
    for (i = 0; i < evenCount; i++) {
        arr[oddCount + i] = even[i];
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

    printf("Original Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    arrangeArray(arr, size);

    printf("\nArranged Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}