#include <stdio.h>

void rotation(int arr[]) {
    printf("\nAfter the rotation\n");
    printf("A = %d\n", arr[2]);
    printf("B = %d\n", arr[0]);
    printf("C = %d\n", arr[1]);
}

int main() {
    int arr[3];

    printf("Enter the 3 numbers\n");

    for (int i = 0; i < 3; i++) {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nBefore rotation\n");
    printf("A = %d\n", arr[0]);
    printf("B = %d\n", arr[1]);
    printf("C = %d\n", arr[2]);

    rotation(arr);

    return 0;
}
