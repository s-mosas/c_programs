#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[100];

    printf("Enter the string: ");
    scanf("%[^\n]", str);

    getchar();

    printf("Enter the string to find: ");
    scanf("%[^\n]", sub);

    if (strstr(str, sub) != NULL) {
        printf("The string is found\n");
    } else {
        printf("The string is not found\n");
    }

    return 0;
}
