#include <stdio.h>

struct Pair {
    int min;
    int max;
};

struct Pair getMinMax(int arr[], int low, int high) {
    struct Pair result, left, right;

    // If only one element
    if (low == high) {
        result.min = result.max = arr[low];
        return result;
    }

    // If two elements
    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            result.min = arr[low];
            result.max = arr[high];
        } else {
            result.min = arr[high];
            result.max = arr[low];
        }
        return result;
    }

    // Divide array
    int mid = (low + high) / 2;

    left = getMinMax(arr, low, mid);
    right = getMinMax(arr, mid + 1, high);

    // Combine results
    result.min = (left.min < right.min) ? left.min : right.min;
    result.max = (left.max > right.max) ? left.max : right.max;

    return result;
}

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    struct Pair ans = getMinMax(arr, 0, n - 1);

    printf("Minimum element: %d\n", ans.min);
    printf("Maximum element: %d\n", ans.max);

    printf("\nName: Smrity Thapa\nRoll no: 52");
    return 0;
}