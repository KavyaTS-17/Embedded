#include <stdio.h>

int main() {
    int n; // Number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for rows and columns.\n");
        return 1;
    }

    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = i + j + 2; // Sum of row and column indices, plus 2
        }
    }
    printf("Matrix with the sum of row and column indices:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
