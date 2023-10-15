#include <stdio.h>

/* Function to search for an element in an integer array and return its index */
int searchElement(int arr[], int size, int target) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; /* Return the index of the element if found */
        }
    }
    return -1; /* Return -1 if the element is not found in the array */
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

    int target, index;

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    index = searchElement(arr, size, target);

    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d NOT found in the array.\n", target);
    }

    return 0;
}
