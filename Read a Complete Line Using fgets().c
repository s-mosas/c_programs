#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    printf("Your Entered: %s", str);

    return 0;
}
