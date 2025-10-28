#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int max_from_right = arr[n - 1];
    printf("Leaders: %d ", max_from_right);
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max_from_right) {
            max_from_right = arr[i];
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}