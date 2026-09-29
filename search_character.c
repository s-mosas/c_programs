#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char ch;

    printf("Enter the string: ");
    scanf("%[^\n]", str);

    getchar();

    printf("Enter the search character: ");
    scanf("%c", &ch);

    char *result = strchr(str, ch);

    if (result != NULL)
    {
        printf("The character is found.\n");
    }
    else
    {
        printf("The character is not found.\n");
    }

    return 0;
}
