int main() {
    int n; // Number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Please enter a positive integer for rows and columns.\n");
        return 1;
    }

   
    for (int i = 1; i <= n; i++) {
        // Add leading spaces
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        // Fill the row with 1s
        for (int j = 1; j <= n - i + 1; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
