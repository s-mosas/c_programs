#include <stdio.h>

void sum(int a[], int b)
{
    int ans = 0;

    for (int i = 0; i < b; i++)
    {
        ans += a[i];
    }

    printf("Sum Answer is: %d\n", ans);
    printf("Average is: %.2f\n", (float)ans / b);
}

void min_max(int a[], int b)
{
    int min = a[0];
    int max = a[0];

    for (int i = 0; i < b; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }

        if (max < a[i])
        {
            max = a[i];
        }
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
}

int main()
{
    int count;

    printf("Enter the count of array: ");
    scanf("%d", &count);

    int array[count];

    for (int i = 0; i < count; i++)
    {
        printf("Enter the %d Number: ", i + 1);
        scanf("%d", &array[i]);
    }

    sum(array, count);
    min_max(array, count);

    return 0;
}
