#include <stdio.h>
#include "MidtermFunctions.c"



int main() {
    int i;
    printf("-------------------------------------------------\n");

    /* Take the two arrays from the user */
    /**/
    int size1, size2;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    for(i=0; i < size1; i++){
        printf("Enter the %d element for the first array: ", i+1);
        scanf("%d", &arr1[i]);
    }

    printf("-------------------------------------------------\n");
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    for(i=0; i < size2; i++){
        printf("Enter the %d element for the second array: ", i+1);
        scanf("%d", &arr2[i]);
    }
    /**/

    printf("-------------------------------------------------\n");

    /**/
    /*
    int size1 = 6;
    int arr1[] = {1, 2, 2, 3, 4, 6};

    int size2 = 6;
    int arr2[] = {2, 3, 3, 4, 5, 6};
    */


    /* Test duplicate_elimination */
    int result_size;
    int* common_elements = duplicate_elimination(arr1, size1, arr2, size2, &result_size);
    printf("Common elements without duplicates: ");
    
    
    for (i = 0; i < result_size; i++) {
        printf("%d ", common_elements[i]);
    }
    printf("\n");
    free(common_elements);

    /* Test union_arrays */
    int* union_result;
    int union_result_size;
    union_result = union_arrays(arr1, size1, arr2, size2, &union_result_size);
    printf("Union of the two arrays: ");

    
    for (i = 0; i < union_result_size; i++) {
        printf("%d ", union_result[i]);
    }
    printf("\n");
    free(union_result);

    /* Test difference */
    int* diff_result;
    int diff_result_size;
    diff_result = difference(arr1, size1, arr2, size2, &diff_result_size);
    printf("Difference between the two arrays: ");
    
    for (i = 0; i < diff_result_size; i++) {
        printf("%d ", diff_result[i]);
    }
    printf("\n");
    free(diff_result);

    /* Test smallest_element_not_in_array */
    int smallest = smallest_element_not_in_array(arr1, size1);
    printf("Smallest positive integer not in the first array: %d\n", smallest);

    /* Test maximum_gap */
    int gap = maximum_gap(arr1, size1);
    printf("Maximum gap between elements in the first array: %d\n", gap);

    printf("-------------------------------------------------\n");
    return 0;
}