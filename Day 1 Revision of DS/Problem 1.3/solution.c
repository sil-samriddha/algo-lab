#include <stdio.h>

int count_most_duplicates(int arr[], int size, int n) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if(arr[i] == n) count++;
    }
    return count;
}

int most_repeating(int arr[], int n) {
    int max_count = 0;
    int most_repeating = 0;

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            most_repeating = arr[i];
        }
    }
    return most_repeating;
}

int main() {
    int n, most_repeating_element, total_duplicates;
    printf("Enter the number of integers\n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    most_repeating_element = most_repeating(arr, n);
    total_duplicates = count_most_duplicates(arr, n, most_repeating_element);

    printf("Total number of duplicate of most repeating element\n%d\n", total_duplicates);
    printf("The most repeating element in the array\n%d\n", most_repeating_element);

    return 0;
}
