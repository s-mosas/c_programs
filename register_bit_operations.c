#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t reg = 0x00;
    uint8_t *ptr = &reg;
    int s1, s2, c1, t1;

    printf("Initial Register:0x%X\n", *ptr);

    printf("SET bit1:");
    scanf("%d", &s1);
    *ptr |= (1u << s1);

    printf("After set bit1 %d:0x%X\n", s1, *ptr);

    printf("SET bit2:");
    scanf("%d", &s2);
    *ptr |= (1u << s2);

    printf("After set bit2 %d:0x%X\n", s2, *ptr);

    printf("CLEAR bit:");
    scanf("%d", &c1);
    *ptr &= ~(1u << c1);

    printf("After clear bit %d:0x%X\n", c1, *ptr);

    printf("TOGGLE bit:");
    scanf("%d", &t1);
    *ptr ^= (1u << t1);

    printf("After Toggle bit %d:0x%X\n", t1, *ptr);

    if (*ptr & (1u << s2))
        printf("TEST bit %d:0x%x SET\n", s2, s2);
    else
        printf("TEST bit %d:0x%x CLEAR\n", s2, s2);

    return 0;
}
