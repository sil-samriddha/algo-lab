#include <stdio.h>

int main(){
    int size = 0, i, second_largest, second_smallest;
    int arr[50];

    FILE *file;
    file = fopen("input_disc.txt", "r");

    if(file == NULL){
        printf("Error opening input file\n");
        return 1;
    }
    while (fscanf(file, "%d", &arr[size]) == 1)
        size++;
    
    fclose(file);

    printf("Elements of array\n");
    for(i=0; i<size; i++)
        printf("%d ", arr[i]);

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

    printf ("\nSecond smallest : %d\n", second_smallest);
    printf ("Second largest : %d\n", second_largest);
}