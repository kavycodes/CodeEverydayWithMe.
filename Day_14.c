#include <stdio.h>

int main() {
    int n, target;
    printf("Enter number of elements of Array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter target sum: ");
    scanf("%d", &target);

    int start = 0, end = 0, curr_sum = 0;
    int found = 0;

    while (end <= n) {
        if (curr_sum == target) {
            printf("Subarray found from index %d to %d\n", start, end - 1);
            found = 1;
            break;
        }

        if (curr_sum < target)
            curr_sum += arr[end++];
        
        else
            curr_sum -= arr[start++];
    }

    if (!found)
        printf("No subarray with given sum found.\n");

    return 0;
}
