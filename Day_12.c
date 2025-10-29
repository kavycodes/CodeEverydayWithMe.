#include <stdio.h>

int main() {
    int n, num, count = 0;

    printf("Enter number of elements of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element to count: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++) {
        if (arr[i] == num)
            count++;
    }

    printf("Element %d occurs %d times.\n", num, count);

    return 0;
}
