#include <stdio.h>

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter %d elements only 0,1,2: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    int low = 0, mid = 0, high = n - 1;
    
    while(mid <= high){
        if(arr[mid] == 0){
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
    
    printf("Sorted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}