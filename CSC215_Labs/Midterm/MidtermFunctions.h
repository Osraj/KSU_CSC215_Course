#include <stdio.h>
#include <stdlib.h>


#include <stdio.h>

/* Function to find common elements between two arrays while eliminating duplicates */
int* duplicate_elimination(const int* arr1, int size1, const int* arr2, int size2, int* result_size);

/* Function to find elements that are in either array or both arrays */
int* union_arrays(const int* arr1, int size1, const int* arr2, int size2, int* result_size);

/* Function to find the difference between two arrays */
int* difference(const int* arr1, int size1, const int* arr2, int size2, int* result_size);

/* Function to find the smallest positive integer not in the array */
int smallest_element_not_in_array(const int* arr, int size);

/* Function to find the maximum gap between any two elements in the array */
int maximum_gap(const int* arr, int size);

