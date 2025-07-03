#include <stdio.h>

void binarySearch(int *arr, int len, int item) {
    int l = 0;
    int r = len - 1;
    int mid;

    while (l <= r) {
        mid = (l + r) / 2;

        if (arr[mid] == item) {
            printf("Item found at index %d\n", mid);
            return;
        } else if (arr[mid] > item) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    printf("Item not found\n");
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    binarySearch(array, 5, 40);
}
