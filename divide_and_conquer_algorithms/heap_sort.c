#include <stdio.h>

void heapSort(int arr[], int n);
void heapify(int arr[], int n, int i);
void swap(int *a, int *b);

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    heapSort(arr, n);
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nName: Smrity Thapa\nRoll no: 52");
    return 0;
}

void heapSort(int arr[], int n) {
    // Build max heap
    for(int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // Extract elements from heap
    for(int i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);   // Move current root to end
        heapify(arr, i, 0);       // Heapify reduced heap
    }
}

void heapify(int arr[], int n, int i) {
    int largest = i;        // Root
    int left = 2 * i + 1;   // Left child
    int right = 2 * i + 2;  // Right child

    if(left < n && arr[left] > arr[largest])
        largest = left;

    if(right < n && arr[right] > arr[largest])
        largest = right;

    if(largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}