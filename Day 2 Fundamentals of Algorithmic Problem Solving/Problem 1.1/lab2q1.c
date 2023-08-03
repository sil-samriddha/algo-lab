# include <stdio.h>
# include <stdlib.h>

long DEC_TO_BIN(int num){
    if(num == 0){
        return 0;
    }
    return (num %2 + 10 * (DEC_TO_BIN(num/2)));
}

int main(int argc, char *argv[]) {
    if(argc < 4){
        printf("Insufficient arguments\nUsage: %s <total_numbers> <input_file> <output_file>\n\n", argv[0]);
        return 1;
    }

    int size = atoi(argv[1]), i=0;
    int arr[size];

    FILE *file;
    file = fopen(argv[2], "r");

    if(file == NULL) {
        printf("Error opening file %s\n", argv[2]);
        return 1;
    }else{
        printf("Taking input from %s\n", argv[2]);
    }

    while(fscanf(file, "%d", &arr[i]) == 1) {
        i++;
    }
    if ( i < size ){
        printf("'%s' must contains minimum %d elements\n", argv[2], size);
        return 1;
    }

    file = fopen(argv[3], "w");

    if(file == NULL) {
        printf("Error saving output to %s\n", argv[3]);
        return 1;
    }else {
        printf("Saving output to %s\n", argv[3]);
    }

    for(i=0; i<size; i++){
        fprintf(file,"The Binary equivalent of %d is %ld\n" , arr[i], DEC_TO_BIN(arr[i]));
    }

    fclose(file);
}