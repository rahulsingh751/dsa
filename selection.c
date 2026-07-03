#include <stdio.h>

void selectionSort(int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < length; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void printArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main() {
    int arr[] = {5, 4, 1, 3, 2};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    printArray(arr, length);

    selectionSort(arr, length);

    printf("After Sorting: ");
    printArray(arr, length);

    return 0;
}