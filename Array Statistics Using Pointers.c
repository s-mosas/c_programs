#include <stdio.h>

int array_stats(const int *arr, size_t n,
                int *out_min, int *out_max, long *out_sum)
{
    int min = arr[0];
    int max = arr[0];

    for (size_t i = 0; i < n; i++) {
        if (*(arr + i) < min) {
            min = *(arr + i);
        }

        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    *out_min = min;
    *out_max = max;

    long sum = 0;

    for (size_t j = 0; j < n; j++) {
        sum += *(arr + j);
    }

    *out_sum = sum;

    return 0;
}

int main()
{
    int count;

    printf("Enter the count of array: ");
    scanf("%d", &count);

    int array[count];

    for (int i = 0; i < count; i++) {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &array[i]);
    }

    int min, max;
    long sum;

    int *ptr = array;

    array_stats(ptr, count, &min, &max, &sum);

    printf("\nThe minimum Number: %d\n", min);
    printf("The maximum Number: %d\n", max);
    printf("The sum of Numbers: %ld\n", sum);

    return 0;
}
