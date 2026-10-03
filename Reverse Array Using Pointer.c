#include <stdio.h>

void reverse_array_ptr(int *arr, size_t n)
{
    printf("\nAfter Reverse\n");

    for (int i = n - 1; i >= 0; i--) {
        printf("%d\t", arr[i]);
    }

    printf("\n");
}

int main()
{
    int count;

    printf("Enter the count: ");
    scanf("%d", &count);

    int arr[count];

    for (int i = 0; i < count; i++) {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nBefore Reverse\n");

    for (int j = 0; j < count; j++) {
        printf("%d\t", arr[j]);
    }

    int *ptr = arr;

    reverse_array_ptr(ptr, count);

    return 0;
}
