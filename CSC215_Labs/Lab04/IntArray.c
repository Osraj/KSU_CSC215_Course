#include "IntArray.h"

int max(int arr[], int size) {
    if (size <= 0) {
        return -1; /* No elements in the array */
    }

    int maxIndex = 0;
    int maxValue = arr[0];

    int i;
    for (i = 1; i < size; i++) {
        if (arr[i] > maxValue) {
            maxIndex = i;
            maxValue = arr[i];
        }
    }

    return maxIndex;
}

int secondMax(int arr[], int size) {
    if (size <= 1) {
        return -1; /* There can't be a second maximum */
    }

    int maxIndex = 0;
    int secondMaxIndex = -1;

    int i;
    for (i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            secondMaxIndex = maxIndex;
            maxIndex = i;
        } else if (arr[i] < arr[maxIndex] && (secondMaxIndex == -1 || arr[i] > arr[secondMaxIndex])) {
            secondMaxIndex = i;
        }
    }

    return secondMaxIndex;
}

float average(int arr[], int size) {
    if (size == 0) {
        return 0.0; /* No elements in the array */
    }

    int sum = 0;
    int i;
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    return (float)sum / size;
}
