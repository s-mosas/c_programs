#include <stdio.h>

int two_sum(const int *nums, size_t n, int target,
            size_t *out_i, size_t *out_j)
{
    for (size_t i = 0; i < n; i++) {

        for (size_t j = i + 1; j < n; j++) {

            if (nums[i] + nums[j] == target) {
                *out_i = i;
                *out_j = j;

                return 0;
            }
        }
    }

    return -1;
}

int main()
{
    size_t n;
    int target;

    printf("Enter the count of array: ");
    scanf("%zu", &n);

    int array[n];

    for (size_t i = 0; i < n; i++) {
        printf("Enter the %zu number: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Enter the target number: ");
    scanf("%d", &target);

    size_t out_i, out_j;

    int *ptr = array;

    int status = two_sum(ptr, n, target, &out_i, &out_j);

    printf("\nStatus = %d\n", status);

    if (status == 0) {
        printf("out_i = %zu\n", out_i);
        printf("out_j = %zu\n", out_j);

        printf("Values = %d + %d = %d\n",
               array[out_i], array[out_j], target);
    }
    else {
        printf("No valid pair found.\n");
    }

    return 0;
}
