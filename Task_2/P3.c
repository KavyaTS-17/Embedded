#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements of arrays: ");
    scanf("%d", &n);
    
    int arr1[n], arr2[n], result[n];
    
    printf("Enter elements for array 1:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter the number %d of the array 1:", i + 1);
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter elements for array 2:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter the number %d of the array 2:", i + 1);
        scanf("%d", &arr2[i]);
    }
    
    // Add elements of arr1 and arr2 and store in result array
    for (int i = 0; i < n; i++) {
        result[i] = arr1[i] + arr2[i];
    }
    
    printf("Sum of the two arrays are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", result[i]);
    }
    
    return 0;
}
