#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements of array: ");
    scanf("%d", &n);

    int arr[n], pos[n], neg[n];
    int p = 0, ne = 0;

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
  
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0)
            pos[p++] = arr[i];
        else
            neg[ne++] = arr[i];
    }

    int i = 0, j = 0, k = 0;

    while (i < p && j < ne) {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }
   
    while (i < p)
        arr[k++] = pos[i++];
   
    while (j < ne)
        arr[k++] = neg[j++];

    printf("Rearranged array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
