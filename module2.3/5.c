#include <stdio.h>

void sort(int arr[], int size, char order) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if ((order == 'a' && arr[i] > arr[j]) || (order == 'd' && arr[i] < arr[j])) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr1[100], arr2[100], size1, size2, i;
    char order;

    printf("Enter the size of array 1: ");
    scanf("%d", &size1);

    printf("Enter the elements of array 1: ");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of array 2: ");
    scanf("%d", &size2);

    printf("Enter the elements of array 2: ");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Enter the sorting order (a for ascending, d for descending): ");
    scanf(" %c", &order);

    sort(arr1, size1, order);
    sort(arr2, size2, order);

    printf("\nArray 1 after sorting: ");
    for (i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nArray 2 after sorting: ");
    for (i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
