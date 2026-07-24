#include <stdio.h>

void greet(int n) {
    // if (n == 6) {
    //     return;
    // }
    printf("Hello World %d\n", n);
    greet(n + 1);
}

int fibo(int n) {
    if (n < 2) {
        return n;
    }

    return fibo(n - 1) + fibo(n - 2);
}

int search(int arr[], int target, int s, int e) {
    if (s > e) {
        return -1;
    }
    int m = s + (e - s) / 2;
    if (target == arr[m]) {
        return m;
    }
    if (target < arr[m]) {
        return search(arr, target, s, m - 1);
    }
    return search(arr, target, m + 1, e);
}

int main() {
    // print "Hello World" 5 times.
    // greet(1);

    // printf("%d", fibo(4));
    
    return 0;
}

