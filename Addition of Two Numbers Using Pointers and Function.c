#include <stdio.h>

void add(int *a, int *b) {
    printf("Sum : %d\n", *a + *b);
}

int main() {
    int num1, num2;

    printf("Enter the number 1: ");
    scanf("%d", &num1);

    printf("Enter the number 2: ");
    scanf("%d", &num2);

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    add(ptr1, ptr2);

    return 0;
}
