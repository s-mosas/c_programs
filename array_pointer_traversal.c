#include <stdio.h>

int main() {
    int num;

    printf("Enter the count of array: ");
    scanf("%d", &num);

    int array[num];

    for (int i = 0; i < num; i++) {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &array[i]);
    }

    int *ptr = array;

    printf("\nYour numbers:\n");

    for (int j = 0; j < num; j++) {
        printf("%d\t", *(ptr + j));
    }

    printf("\n");

    return 0;
}
