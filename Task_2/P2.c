#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter elements for the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Add 15 to each element of the array
    for (int i = 0; i < n; i++) {
        arr[i] += 15;
    }
    
    printf("Modified array after adding 15 to each element:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
