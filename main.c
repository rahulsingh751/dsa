#include <stdio.h>

int bin_search(int arr[], int target, int length) {
    int start = 0;
    int end = length - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (target > arr[mid]) {
            start = mid + 1;
        } else if (target < arr[mid]) {
            end = mid - 1;
        } else {
            return mid;
        }
    }

    return -1;
}

int main() {

    int arr[] = {13, 17, 19, 25, 29, 33};
    int target;
    printf("Enter the target element: ");
    scanf("%d", &target);

    int length = sizeof(arr) / sizeof(arr[0]);

    int result = bin_search(arr, target, length);

    if (result == -1) {
        printf("Element not found!");
    } else {
        printf("Element found at index: %d", result);
    }

    return 0;
}