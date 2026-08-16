#include <stdio.h>

int main() {
    int bits;
    unsigned long long a;
    signed long long b, c;

    printf("Enter number of bits: ");
    scanf("%d", &bits);

    if (bits < 1 || bits > 63) {
        printf("Please enter a value from 1 to 63.\n");
        return 1;
    }

    a = (1ULL << bits) - 1;
    b = -(1LL << (bits - 1));
    c = (1LL << (bits - 1)) - 1;

    printf("For %d bits\n", bits);
    printf("Unsigned range: 0 to %llu\n", a);
    printf("Signed range: %lld to %lld\n", b, c);

    return 0;
}
