#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements of Array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int expected_sum = (n - 1) * n / 2;
    int duplicate = sum - expected_sum;

    printf("Duplicate number is: %d\n", duplicate);

    return 0;
}
