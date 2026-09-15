#include <stdio.h>

int main()
{
    int total;

    printf("Enter the total student count: ");
    scanf("%d", &total);

    int roll[total];
    int id[total];
    char name[total][20];
    int mark[total];

    printf("\nThe ID number starts with 1\n");

    for(int i = 0; i < total; i++)
    {
        printf("\nEnter the ID number of student %d: ", i + 1);
        scanf("%d", &id[i]);

        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &roll[i]);

        printf("Enter the name of student %d: ", i + 1);
        scanf("%19s", name[i]);

        printf("Enter the mark of student %d: ", i + 1);
        scanf("%d", &mark[i]);
    }

    int d;

    printf("\nEnter the ID number to search: ");
    scanf("%d", &d);

    if(d >= 1 && d <= total)
    {
        printf("\nThe ID number is: %d\n", id[d - 1]);
        printf("The name is: %s\n", name[d - 1]);
        printf("The roll number is: %d\n", roll[d - 1]);
        printf("The mark is: %d\n", mark[d - 1]);
    }
    else
    {
        printf("Invalid ID number!\n");
    }

    return 0;
}
