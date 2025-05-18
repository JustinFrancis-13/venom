#include<stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions for the first matrix
    printf("Enter dimensions for matrix1 (rows columns): ");
    scanf("%d %d", &rows1, &cols1);

    // Input dimensions for the second matrix
    printf("Enter dimensions for matrix2 (rows columns): ");
    scanf("%d %d", &rows2, &cols2);

    // Check if matrices can be multiplied
    if (cols1 != rows2) {
        printf("Matrices cannot be multiplied. Invalid dimensions.\n");
        return 1;  // Return non-zero to indicate failure
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];

    // Input elements of the first matrix
    printf("Enter elements of matrix1:\n");
    for (int i = 0; i < rows1; ++i)
 for (int j = 0; j < cols1; ++j)
            scanf("%d", &matrix1[i][j]);

    // Input elements of the second matrix
    printf("Enter elements of matrix2:\n");
    for (int i = 0; i < rows2; ++i)
        for (int j = 0; j < cols2; ++j)
            scanf("%d", &matrix2[i][j]);

    // Initialize result matrix with zeros
    for (int i = 0; i < rows1; ++i)
        for (int j = 0; j < cols2; ++j)
            result[i][j] = 0;

    // Multiply matrices
    for (int i = 0; i < rows1; ++i)
        for (int j = 0; j < cols2; ++j)
            for (int k = 0; k < cols1; ++k)
                result[i][j] += matrix1[i][k] * matrix2[k][j];

    // Display the result matrix
    printf("Product of matrices:\n");
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;  // Return zero to indicate success
}