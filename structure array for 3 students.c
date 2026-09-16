#include <stdio.h>

struct student {
    int id;
    char name[20];
    float marks;
};

int main() {
    struct student s[3];

    for (int i = 1; i <= 3; i++) {
        printf("\n----- Student %d -----\n", i);

        printf("Enter the ID number of the student: ");
        scanf("%d", &s[i - 1].id);

        printf("Enter the Name of the student: ");
        scanf(" %19[^\n]", s[i - 1].name);

        printf("Enter the Marks of the student: ");
        scanf("%f", &s[i - 1].marks);
    }

    printf("\n----- All Student Information -----\n");

    for (int j = 0; j < 3; j++) {
        printf("\nStudent %d\n", j + 1);
        printf("The ID number is: %d\n", s[j].id);
        printf("The Name is: %s\n", s[j].name);
        printf("The Marks is: %.2f\n", s[j].marks);
    }

    return 0;
}
