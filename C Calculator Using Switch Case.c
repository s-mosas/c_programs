#include <stdio.h>

int main(void) {
    int x, a, b;

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Remainder\n");
    printf("Enter your operation: ");
    scanf("%d", &x);

    printf("Enter your first number: ");
    scanf("%d", &a);

    printf("Enter your second number: ");
    scanf("%d", &b);

    switch (x) {
        case 1:
            printf("Answer: %d\n", a + b);
            break;
        case 2:
            printf("Answer: %d\n", a - b);
            break;
        case 3:
            printf("Answer: %d\n", a * b);
            break;
        case 4:
            if (b != 0){
                printf("Answer: %d\n", a / b);}
            else{
                printf("Invalid: cannot divide by zero.\n");}
            break;
        case 5:
            if (b != 0){
                printf("Answer: %d\n", a % b); }
            else{
                printf("Invalid: cannot find remainder with zero.\n");}
            break;
    }

    return 0;
}
