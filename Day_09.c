#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Enter number of elements in array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[(i + 1) % n])
            count++;
    }
    if (count <= 1)
        printf("Yes");
    else
        printf("No");
    return 0;
}
