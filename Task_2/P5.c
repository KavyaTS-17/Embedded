#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements of arrays: ");
    scanf("%d", &n);
    
    int arr[n], invertedArr[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Reverse the elements and store in invertedArr
    for (int i = 0; i < n; i++) {
        invertedArr[i] = arr[n - 1 - i];
    }
    
    printf("The inverted array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", invertedArr[i]);
    }
    
    return 0;
}
