#include <stdio.h>

void main() {
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols],i,j;

    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the matrices
    for (i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the sum matrix
    printf("Resultant matrix after addition:\n");
    for (i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

