#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter the string: ");
    scanf("%[^\n]", str);

    int length = strlen(str);
    int i = length - 1;

    for (i; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
