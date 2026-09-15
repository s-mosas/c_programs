#include <stdio.h>

int main()
{
    for(int a = 1; a <= 5; a++)
    {
        for(int i = 1; i <= a; i++)
        {
            printf("*\t");
        }

        printf("\n");
    }

    return 0;
}
