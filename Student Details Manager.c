#include <stdio.h>

struct student {
    int id;
    char name[20];
    int marks;
    float att;
};

int main() {
    int a;

    printf("Enter the total count of students: ");
    scanf("%d", &a);

    struct student s[a];

    for (int i = 0; i < a; i++) {

        printf("\nEnter the ID number: ");
        scanf("%d", &s[i].id);

        printf("Enter the Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter the Marks (0-100): ");
        scanf("%d", &s[i].marks);

        if (s[i].marks >= 0 && s[i].marks <= 100) {

            printf("Enter Attendance (0-100): ");
            scanf("%f", &s[i].att);

            if (s[i].att >= 0 && s[i].att <= 100) {
                printf("Saved successfully!\n");
            } 
            else {
                printf("Attendance Error!\n");
            }

        } 
        else {
            printf("Marks Error!\n");
        }
    }

    printf("\nID\tName\t\tMarks\tAttendance\n");

    int total_marks = 0;

    for (int j = 0; j < a; j++) {
        printf("%d\t%-15s\t%d\t%.2f\n",
               s[j].id,
               s[j].name,
               s[j].marks,
               s[j].att);

        total_marks += s[j].marks;
    }

    float average = (float)total_marks / a;

    printf("\nAverage Marks: %.2f\n", average);

    return 0;
}
