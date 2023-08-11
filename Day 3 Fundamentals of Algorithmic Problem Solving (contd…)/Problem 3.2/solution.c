#include <stdio.h>
#include <stdlib.h>

typedef struct stack {
    int arr[500];
    int size;
} ARRAY;

void ReadArray (FILE *file, char filename[15], ARRAY *arr){
    file = fopen(filename, "r");
    printf("Taking input from '%s'\n", filename);
    arr->size = 0;

    while(fscanf(file, "%d", &arr->arr[arr->size]) == 1) {
        arr->size ++;
    }
    if(arr->size > 500 && arr->size < 300){
        printf("Min 300 to Max 500 elements needed\n");
        exit(1);
    }
}

void InsertionSort (ARRAY *array) {
    int i, key, j, count = 0;

    printf("\n----------------------");
    for(i=1; i<array->size; i++) {
        ++count;
        key = array->arr[i];
        j = i - 1;

        while (j >= 0 && array->arr[j] > key){
            ++count;
            printf ("\n%d -> %d \t[%d]", array->arr[j+1], array->arr[j], key);
            array->arr[j+1] = array->arr[j];
            j--;
        }
        
        array->arr[j+1] = key;
    }
    if(count == array->size - 1) printf("\nNo Shifting");
    printf("\n----------------------");
    printf("\nNo of comparisons : %d" , count);
    if(count == array->size - 1)
        printf("\nScenario : Best Case");
    else if (count = 0.5*((array->size*array->size) - array->size))
        printf("\nScenario : Worst Case");
    else
        printf("\nScenario : Average case");
    printf("\n----------------------");
}

void WriteArray (FILE *file, char filename[15], ARRAY arr){
    file = fopen(filename, "w");
    printf("\nStoring output in '%s'\n", filename);
    for(int i=0; i<arr.size; i++){
        fprintf(file, "%d ", arr.arr[i]);
    }
}


int main() {
    printf("MAIN MENU (INSERTION SORT)\n"
           "1. Ascending Data\n"
           "2. Descending Data\n"
           "3. Random Data\n"
           "4. ERROR (Exit)\n");

    int choice = 0, i;
    printf("\nEnter a choice : ");
    scanf("%d", &choice);

    FILE *file;
    ARRAY arr;

    char InputFile[][15] = { "inAsce.dat",
                             "inDesc.dat",
                             "inRand.dat" },
        OutputFile[][15] = { "outInsAsce.dat",
                             "outInsDesc.dat",
                             "outInsRand.dat" };

    if (choice > 0 && choice < 4 ) {
        ReadArray(file, InputFile[choice-1], &arr);   

        printf("\nBefore sorting\n");
        for(i=0; i<arr.size; i++)
            printf("%d ", arr.arr[i]);

        InsertionSort(&arr);     

        printf("\nAfter sorting\n");
        for(i=0; i<arr.size; i++)
            printf("%d ", arr.arr[i]);

        WriteArray(file, OutputFile[choice-1], arr);
    }else{
        printf("Error : Program Closed\n");
    }
}