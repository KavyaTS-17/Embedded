#include <stdio.h>

int main() {
    int n; // Number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);


    if (n <= 0) {
        printf("Please enter a positive integer for rows and columns.\n");
        return 1;
    }

     for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
