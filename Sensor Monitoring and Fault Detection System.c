#include <stdio.h>

struct sensor {
    int id;
    float reading;
    int st;
};

int main() {
    int a;
    float min, max;

    printf("Enter the count of sensors: ");
    scanf("%d", &a);

    if (a <= 0) {
        printf("Invalid sensor count!\n");
        return 1;
    }

    int fault[a];
    struct sensor sr[a];

    for (int i = 0; i < a; i++) {
        printf("\nEnter the %d sensor info\n", i + 1);

        printf("Enter the ID number: ");
        scanf("%d", &sr[i].id);

        printf("Enter the reading of the sensor: ");
        scanf("%f", &sr[i].reading);

        printf("Enter the status (0/1): ");
        scanf("%d", &sr[i].st);
    }

    min = max = sr[0].reading;

    for (int j = 0; j < a; j++) {
        if (sr[j].reading < min) {
            min = sr[j].reading;
        }

        if (sr[j].reading > max) {
            max = sr[j].reading;
        }
    }

    printf("\nFault sensor IDs:\n");

    for (int k = 0; k < a; k++) {
        if (sr[k].st == 0) {
            printf("%d\n", sr[k].id);
        }
    }

    printf("\nThe Maximum reading: %.2f\n", max);
    printf("The Minimum reading: %.2f\n", min);

    return 0;
}
```
