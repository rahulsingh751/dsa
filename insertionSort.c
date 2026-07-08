#include <stdio.h>

void printArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void insertionSort(int arr[], int length) {
    for (int i = 1; i < length; i++) {
        for (int j = i; j > 0 && arr[j] < arr[j - 1]; j--) {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
        }
    }
}

int main() {
    int arr[] = {5, 2, 4, 6, 1};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    printArray(arr, length);

    insertionSort(arr, length);

    printf("Array after Sorting: ");
    printArray(arr, length);

    return 0;
}