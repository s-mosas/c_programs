#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t REGISTER = 0x00;
    uint8_t *reg_ptr = &REGISTER;
    int value;

    printf("Initial Register: 0x%02X\n", *reg_ptr);

    printf("Write Value: ");
    scanf("%x", &value);

    *reg_ptr = (uint8_t)value;

    printf("Written Value: 0x%02X\n", *reg_ptr);
    printf("Register: 0x%02X\n", *reg_ptr);

    return 0;
}
