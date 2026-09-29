#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%[^\n]", str1);

    getchar();

    printf("Enter the second string: ");
    scanf("%[^\n]", str2);

    strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
