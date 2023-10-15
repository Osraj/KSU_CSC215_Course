#include "assignment_functions.c"

int main() {
    int A[10][10], B[10][10], C[10][10];
    int rowsA, colsA, rowsB, colsB;

    printf("Enter the number of rows and columns for Matrix A: ");
    scanf("%d %d", &rowsA, &colsA);

    printf("Enter the number of rows and columns for Matrix B: ");
    scanf("%d %d", &rowsB, &colsB);

    if (colsA != rowsB) {
        printf("Matrix multiplication is not possible. Number of columns in Matrix A must be equal to the number of rows in Matrix B.\n");
        return 1;
    }

    inputMatrix(A, rowsA, colsA, 'A');
    inputMatrix(B, rowsB, colsB, 'B');

    multiplyMatrices(A, B, C, rowsA, colsA, colsB);

    printf("Resultant Matrix C:\n");
    displayMatrix(C, rowsA, colsB);

    return 0;
}
