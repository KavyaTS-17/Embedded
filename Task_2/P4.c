#include <stdio.h>

int main() {
    int n, target;
    
    printf("Enter the number of elements of arrays: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter the number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number to be found : ");
    scanf("%d", &target);
    
    int found = 0;
    int index = -1;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            index = i;
            break;
        }
    }
    
    if (found) {
        printf("Number was found at index %d\n", index);
    } else {
        printf("Number was not found in the array\n");
    }
    
    return 0;
}
