#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int arr[], int length) {

    for (int i = 0; i < length - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < length - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
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

    bubbleSort(arr, length);

    printf("After Sorting: ");
    printArray(arr, length);

    return 0;
}