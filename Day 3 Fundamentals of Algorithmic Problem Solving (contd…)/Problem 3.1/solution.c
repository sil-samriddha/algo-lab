#include <stdio.h>

int binarySearch (int arr[], int size, int key, int *no){
    int start = 0, end = size-1;
    int pos = -1, mid;
    *no = 0;

    printf("\nComparison between\n");

    while (start <= end){
        mid = (start + end) / 2;
        *no=*no + 1;

        printf("%d. arr[%d] = %d  &  %d\t", *no, mid, arr[mid], key);

        if(arr[mid] == key){
            printf("[matched]\n");
            pos = mid;
        }else printf("\n");

        if(arr[mid] >= key)
            end = mid - 1;
        else if (arr[mid] < key)
            start = mid + 1;
    }
    return pos;
    
}

int main() {
    int size, i, key, position, no_of_comparisons;

    printf("Enter the size of array : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements of array : ");
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);

    printf("Enter the key to be searched : ");
    scanf("%d", &key);

    position = binarySearch(arr, size, key, &no_of_comparisons);

    if(position == -1){
        printf("\n%d not found\n", key);
    }else {
        printf("\n%d found at index position %d\n", key, position);
        printf("Number of comparisons: %d\n", no_of_comparisons);
    }

}