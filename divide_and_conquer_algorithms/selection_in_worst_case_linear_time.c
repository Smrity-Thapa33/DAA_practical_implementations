#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function
int partition(int arr[], int low, int high, int pivot) {
    int i;
    for (i = low; i <= high; i++) {
        if (arr[i] == pivot)
            break;
    }
    swap(&arr[i], &arr[high]);

    int storeIndex = low;
    for (i = low; i < high; i++) {
        if (arr[i] < pivot) {
            swap(&arr[i], &arr[storeIndex]);
            storeIndex++;
        }
    }
    swap(&arr[storeIndex], &arr[high]);
    return storeIndex;
}

// Find median of small group
int findMedian(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
        }
    }
    return arr[n / 2];
}

// Main selection function
int kthSmallest(int arr[], int low, int high, int k) {
    if (k > 0 && k <= high - low + 1) {

        int n = high - low + 1;

        int med[(n + 4) / 5];

        int i;
        for (i = 0; i < n / 5; i++)
            med[i] = findMedian(arr + low + i * 5, 5);

        if (i * 5 < n) {
            med[i] = findMedian(arr + low + i * 5, n % 5);
            i++;
        }

        int medOfMed = (i == 1) ? med[0] :
            kthSmallest(med, 0, i - 1, i / 2);

        int pos = partition(arr, low, high, medOfMed);

        if (pos - low == k - 1)
            return arr[pos];

        if (pos - low > k - 1)
            return kthSmallest(arr, low, pos - 1, k);

        return kthSmallest(arr, pos + 1, high,
                           k - pos + low - 1);
    }

    return -1;
}

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k (k-th smallest element): ");
    scanf("%d", &k);

    int result = kthSmallest(arr, 0, n - 1, k);

    printf("%d-th smallest element is: %d\n", k, result);

    printf("\nName: Smrity Thapa\nRoll no: 52");
    return 0;
}