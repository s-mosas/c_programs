#include <stdio.h>

void add(int a, int b)
{
    printf("Answer: %d\n", a+b);
}

void sub(int a, int b)
{
    printf("Answer: %d\n", a-b);
}

void mul(int a, int b)
{
    printf("Answer: %d\n", a*b);
}

void div(int a, int b)
{
    printf("Answer: %d\n", a / b);
}

void rem(int a, int b)
{
    printf("Answer: %d\n", a % b);
}

int main()
{
    int num, num1, num2;

    printf("1. Add (+)\n");
    printf("2. Sub (-)\n");
    printf("3. Mul (X)\n");
    printf("4. Div (/)\n");
    printf("5. Rem (%%)\n");

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter 2 numbers: ");
    scanf("%d%d", &num1, &num2);

    switch(num)
    {
        case 1:
            add(num1, num2);
            break;

        case 2:
            sub(num1, num2);
            break;

        case 3:
            mul(num1, num2);
            break;

        case 4:
            div(num1, num2);
            break;

        case 5:
            rem(num1, num2);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
