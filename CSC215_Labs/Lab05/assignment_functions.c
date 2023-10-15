#include "assignment_funcions.h"

/* Function to input a matrix */
void inputMatrix(int matrix[][10], int rows, int cols, char name) {
    printf("Enter elements for Matrix %c:\n", name);
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

/* Function to display a matrix */
void displayMatrix(int matrix[][10], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

/* Function to multiply two matrices */
void multiplyMatrices(int A[][10], int B[][10], int C[][10], int rowsA, int colsA, int colsB) {
    int i, j, k;
    for (i = 0; i < rowsA; i++) {
        for (j = 0; j < colsB; j++) {
            C[i][j] = 0;
            for (k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}