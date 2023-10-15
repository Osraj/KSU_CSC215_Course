#include <stdio.h>

/* Function to swap two elements in an array */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Function to reverse an array in-place */
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        /* Swap the elements at start and end */
        swap(&arr[start], &arr[end]);
        start++;
        end--;
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

    /* Display the array before being reversed */
    printf("Original Array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    /* Reverse the array in-place */
    reverseArray(arr, size);

    /* Display the reversed array */
    printf("\nReversed Array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
