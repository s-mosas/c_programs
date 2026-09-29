#include <stdio.h>
#include <string.h>

int main() {
char str[100];
printf("Enter the String:");
scanf("%[^\n]",str);

printf("The string lenght:%zu\n",strlen(str));
return 0;
}
