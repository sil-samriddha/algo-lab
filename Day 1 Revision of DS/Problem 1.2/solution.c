#include <stdio.h>

int main(){
    int N, i, temp=0;
    printf("Enter the size of array\n");
    scanf("%d", &N);

    int arr[N], prefixSum[N];
    printf("Enter the elements of the array one by one\n");
    for(i=0; i<N; i++)
        scanf("%d", &arr[i]);
    
    for(i=0; i<N; i++){
        temp += arr[i];
        prefixSum[i] = temp;
    }
    
    printf("\nPrefix Sum array\n");
    for(i=0; i<N; i++)
        printf("%d ", prefixSum[i]);

}