#include <stdio.h>

int add(int num1, int num2)
{
    return num1 + num2;
}

void name(char c[])
{
    printf("%s\n", c);
    printf("Embedded C programming\n");
}

int main()
{
    int num1, num2, result;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    result = add(num1, num2);

    printf("Your answer is: %d\n", result);

    char ch[20] = "Welcome";
    name(ch);

    return 0;
}
