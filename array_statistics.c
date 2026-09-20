#include <stdio.h>

int main() {
    int count;
    int sum = 0;
    int min, max;
    float average;

    printf("Enter count of array: ");
    scanf("%d", &count);

    int array[count];

    for (int i = 0; i < count; i++) {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &array[i]);
    }

    min = max = array[0];

    for (int j = 0; j < count; j++) {
        sum += array[j];

        if (array[j] < min) {
            min = array[j];
        }

        if (array[j] > max) {
            max = array[j];
        }
    }

    average = (float)sum / count;

    printf("\nThe Minimum value is: %d\n", min);
    printf("The Maximum value is: %d\n", max);
    printf("The Sum of the array: %d\n", sum);
    printf("The Average value is: %.2f\n", average);

    if (average >= 80) {
        printf("Status: Excellent\n");
    } else if (average >= 60) {
        printf("Status: Good\n");
    } else if (average >= 40) {
        printf("Status: Average\n");
    } else {
        printf("Status: Poor\n");
    }

    return 0;
}
