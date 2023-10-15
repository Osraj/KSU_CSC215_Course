#include "MidtermFunctions.h"

/* Function to find common elements between two arrays while eliminating duplicates */
int* duplicate_elimination(const int* arr1, int size1, const int* arr2, int size2, int* result_size) {
    /* Allocate memory for the result array */
    int* result = (int*)malloc(size1 * sizeof(int));
    if (result == NULL) {
        *result_size = 0;
        return NULL; /* Memory allocation failed */
    }

    int count = 0; /* Count of common elements */

    int i;
    for (i = 0; i < size1; i++) {
        int is_duplicate = 0;

        int j;
        for (j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                is_duplicate = 1;
                break;
            }
        }

        if (!is_duplicate) {
            result[count++] = arr1[i];
        }
    }

    *result_size = count;
    return result;
}

/* Function to find elements that are in either array or both arrays */
int* union_arrays(const int* arr1, int size1, const int* arr2, int size2, int* result_size) {
    /* Allocate memory for the result array */
    int* result = (int*)malloc((size1 + size2) * sizeof(int));
    if (result == NULL) {
        *result_size = 0;
        return NULL; /* Memory allocation failed */
    }

    int count = 0; /* Count of elements in the result array */

    /* Copy elements from the first array to the result array */
    int i;
    for (i = 0; i < size1; i++) {
        result[count++] = arr1[i];
    }

    /* Check for duplicates while adding elements from the second array */
    for (i = 0; i < size2; i++) {
        int is_duplicate = 0;

        int j;
        for (j = 0; j < count; j++) {
            if (arr2[i] == result[j]) {
                is_duplicate = 1;
                break;
            }
        }

        if (!is_duplicate) {
            result[count++] = arr2[i];
        }
    }

    *result_size = count;
    return result;
}

/* Function to find the difference between two arrays */
int* difference(const int* arr1, int size1, const int* arr2, int size2, int* result_size) {
    /* Allocate memory for the result array */
    int* result = (int*)malloc(size1 * sizeof(int));
    if (result == NULL) {
        *result_size = 0;
        return NULL; /* Memory allocation failed */
    }

    int count = 0; /* Count of elements in the result array */

    int i;
    for (i = 0; i < size1; i++) {
        int is_found = 0;

        int j;
        for (j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                is_found = 1;
                break;
            }
        }

        if (!is_found) {
            result[count++] = arr1[i];
        }
    }

    *result_size = count;
    return result;
}

/* Function to find the smallest positive integer not in the array */
int smallest_element_not_in_array(const int* arr, int size) {
    /* Create a boolean array to mark the presence of elements */
    int max = arr[0];
    
    int i;
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int* present = (int*)calloc((max + 1), sizeof(int));
    if (present == NULL) {
        return -1; /* Memory allocation failed */
    }

    /* Mark elements in the input array as present */
    for (i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            present[arr[i]] = 1;
        }
    }

    /* Find the smallest positive integer not in the array */
    for (i = 1; i <= max; i++) {
        if (present[i] == 0) {
            free(present);
            return i;
        }
    }

    free(present);
    return max + 1; /* If all positive integers are present */
}

/* Function to find the maximum gap between any two elements in the array */
int maximum_gap(const int* arr, int size) {
    if (size < 2) {
        return 0; /* Not enough elements to calculate a gap */
    }

    /* Find the maximum and minimum elements in the array */
    int max = arr[0];
    int min = arr[0];
    int i;
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    /* Calculate the gap between elements */
    int gap = (max - min) / (size - 1);

    return gap;
}



