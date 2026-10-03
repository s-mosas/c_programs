#include <stdio.h>

const int *find_element(const int *arr, size_t n, int key)
{
    for (int i = 0; i < n; i++) {

        if (*(arr + i) == key) {
            printf("\nArray[%d]\n", i);
            return (arr + i);
        }
    }

    return NULL;
}

int main()
{
    int count;

    printf("Enter the count of array: ");
    scanf("%d", &count);

    int arr[count];
    int key;

    for (int i = 0; i < count; i++) {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the Key number: ");
    scanf("%d", &key);

    int *ptr = arr;

    const int *result = find_element(ptr, count, key);

    if (result != NULL) {
        printf("The Element is found: %d\n", *result);
    } else {
        printf("The Element is Not found!!\n");
    }

    return 0;
}
