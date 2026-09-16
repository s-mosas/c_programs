#include <stdio.h>

struct student {
    int id;
    char name[20];
    float marks;
};

int main() {
    struct student student;

    printf("Enter the name of the student: ");
    scanf("%19[^\n]", student.name);

    printf("Enter the ID number: ");
    scanf("%d", &student.id);

    printf("Enter the marks of the student: ");
    scanf("%f", &student.marks);

    printf("\n----- Student Information -----\n");

    printf("The ID number is: %d\n", student.id);
    printf("The Name is: %s\n", student.name);
    printf("The Student marks is: %.2f\n", student.marks);

    return 0;
}
