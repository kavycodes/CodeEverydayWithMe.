#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[100];
    printf("Enter %d elements for first array: ", n1);
    for(int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);
    
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[100];
    printf("Enter %d elements for second array: ", n2);
    for(int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    int unionArr[100], intersectionArr[100];
    int uIndex = 0, iIndex = 0;

    for(int i = 0; i < n1; i++) {
        unionArr[uIndex++] = arr1[i];
    }

    for(int i = 0; i < n2; i++) {
        int found = 0;
        for(int j = 0; j < n1; j++) {
            if(arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if(found == 0)
            unionArr[uIndex++] = arr2[i];
    }

    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                int already = 0;
                for(int k = 0; k < iIndex; k++) {
                    if(intersectionArr[k] == arr1[i]) {
                        already = 1;
                        break;
                    }
                }
                if(!already)
                    intersectionArr[iIndex++] = arr1[i];
            }
        }
    }

    printf("Union of two arrays:\n ");
    for(int i = 0; i < uIndex; i++)
        printf("%d ", unionArr[i]);

    printf("Intersection of two arrays:\n ");
    for(int i = 0; i < iIndex; i++)
        printf("%d ", intersectionArr[i]);
    
    return 0;
}
