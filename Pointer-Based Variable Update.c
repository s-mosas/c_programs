#include <stdio.h>

int main() {
    int num;
    int *ptr;

    printf("Enter the number: ");
    scanf("%d", &num);

    ptr = &num;

    printf("Before Update: %d\n", *ptr);

    printf("Enter the update number: ");
    scanf("%d", ptr);

    printf("After Update: %d\n", *ptr);

    return 0;
}
