#include <stdio.h>
 
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid; // Element found at index mid

        if (arr[mid] < key)
            left = mid + 1; // Search right half
        else
            right = mid - 1; // Search left half
    }
    return -1; // Element not found
}

int main() {
    int size, key;

    // Taking array size input
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];

    // Taking sorted array input
    printf("Enter %d sorted elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking the key to search
    printf("Enter the number to search: ");
    scanf("%d", &key);

    // Calling binary search function
    int result = binarySearch(arr, 0, size - 1, key);
    
    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
