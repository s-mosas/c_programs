#include <stdio.h>

int main() {
    int a, b = 1, c = 1;
    int d = 0;
    int w = 0;
    int f = 0;

    printf("Enter the N: ");
    scanf("%d", &a);

    for(int i = 1; i <= a; i++)
    {
        d = d + i;
    }

    while(b <= a)
    {
        w = w + b;
        b++;
    }

    do
    {
        f = f + c;
        c++;
    } while(c <= a);

    printf("For Loop output: %d\n", d);
    printf("While Loop output: %d\n", w);
    printf("Do-While Loop output: %d\n", f);

    return 0;
}
