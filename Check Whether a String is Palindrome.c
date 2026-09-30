#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int k = 0;

    printf("Enter the string: ");
    scanf("%[^\n]", str);

    int len = strlen(str);
    char str1[100];

    int i = len - 1;

    for (i; i >= 0; i--) {
        str1[len - 1 - i] = str[i];
    }

    str1[len] = '\0';

    for (int j = 0; j < len; j++) {
        if (str[j] != str1[j]) {
            k++;
        }
    }

    if (k == 0) {
        printf("Yes - Palindrome\n");
    } else {
        printf("Not - Palindrome\n");
    }

    return 0;
}
