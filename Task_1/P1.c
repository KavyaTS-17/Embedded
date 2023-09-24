#include <stdio.h>

int main() {
    int n;
    
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Even numbers up to %d are: ", n);
    
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    
    printf("\n");
    
    return 0;
}
