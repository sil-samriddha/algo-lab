#include <stdio.h>

void EXCHANGE (int *p, int *q){
    *p = *p ^ *q;
    *q = *p ^ *q;
    *p = *p ^ *q;
}

void ROTATE_RIGHT(int *arr, int size, int p1, int p2){
    if (p1 < 0 || (p1+p2) >= size) {
        printf("INVALID ROTATE\n");
        return;
    }
    int temp = arr[p1+p2-1];
    for(int i = (p1+p2-1); i>=(p1); i--)
        arr[i] = arr[i-1];
    arr[p1]= temp;
}

int main() {
    int size, i, p1, p2;

    printf("Enter size of array\n");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements one by one\n", size);
    for(i=0; i<size; i++) 
        scanf ("%d", &arr[i]);
    
    printf("Enter starting index of array\n");
    scanf("%d", &p1);
    printf("Enter the number of elements to be rotated\n");
    scanf("%d", &p2);

    ROTATE_RIGHT (arr, size, p1, p2);

    printf("After rotate \n");
    for(i=0; i<size; i++)
        printf("%d ", arr[i]);

    return 0;
}