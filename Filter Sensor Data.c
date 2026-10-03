#include <stdio.h>

size_t filter_sensor_data(int *arr, size_t n, int min_val, int max_val)
{
    size_t j = 0;

    for (size_t i = 0; i < n; i++) {

        if (min_val <= arr[i] && max_val >= arr[i]) {
            arr[j] = arr[i];
            j++;
        }
    }

    return j;
}

int main()
{
    int count;

    printf("Enter the count of Array: ");
    scanf("%d", &count);

    int array[count];
    int min, max;

    for (int i = 0; i < count; i++) {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nEnter the min_value: ");
    scanf("%d", &min);

    printf("Enter the Max_value: ");
    scanf("%d", &max);

    int *ptr = array;

    size_t count_of_array =
        filter_sensor_data(ptr, count, min, max);

    printf("\nAfter Filter data: ");

    for (size_t j = 0; j < count_of_array; j++) {
        printf("%d\t", array[j]);
    }

    printf("\nAfter filter the count of Array: %zu\n",
           count_of_array);

    return 0;
}
