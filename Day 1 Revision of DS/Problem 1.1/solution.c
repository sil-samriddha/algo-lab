#include <stdio.h>

int main(){
    int size, i, second_largest, second_smallest;
    printf("Enter the size of array : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements one by one\n");
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);

    int largest = arr[0], smallest = arr[0];

    for (i=1; i<size; i++){
        
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }else if (arr[i] > second_largest && arr[i] < largest){
            second_largest = arr[i];
        }

        if(arr[i] < smallest){
            second_smallest = smallest;
            smallest = arr[i];
        }else if (arr[i] < second_largest && arr[i] > smallest){
            second_smallest = arr[i];
        }

    }

    printf ("Second smallest : %d\n", second_smallest);
    printf ("Second largest : %d\n", second_largest);
}