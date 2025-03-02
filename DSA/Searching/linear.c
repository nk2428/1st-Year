
#include <stdio.h>

int linearSearch(int arr[], int n, int key) 
{
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int n, key;

    // Taking array size input
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declaring array of given size

    // Taking array elements input
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking the key to search
    printf("Enter the number to search: ");
    scanf("%d", &key);

    // Calling linear search function
    int result = linearSearch(arr, n, key);
    
    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
