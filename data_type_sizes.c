#include <stdio.h>
#include <limits.h>
#include <float.h>

#define A(type, min, max)\
printf("%-22s %5zu %25lld %25llu\n", #type, sizeof(type), (long long) (min), (unsigned long long) (max))

#define B(type, min, max)\
printf("%-22s %5zu %25.10Le %25.10Le\n",#type, sizeof(type), (long double) (min), (long double) (max))

int main() {
printf("INTEGER SIZE\n");
printf("%-22s %5s %25s %25s\n", "Type", "Bytes", "Minimum", "Maximum");

ACint, INT_MIN, INT_MAX);
A(unsigned int, 0, UINT_MAX);
A(long, LONG MIN,LONG_MAX);
A(unsigned long, 0, ULONG_MAX);
A(long long, LLONG_MIN, LLONG_MAX);
A(unsigned long long, 0, ULLONG_MAX);
A(char, CHAR MIN,CHAR_MAX);
A(signed char, CHAR_MIN, CHAR_MAX);
A(unsigned char, 0, UCHAR MAX);
A(short, SHRT_MIN,SHRT_MAX);
A(unsigned short, 0, USHRT_MAX);

printf("\nFLOAT SIZE\n");
printf("%22s %5s %25s %25s\n", "Type", "Bytes", "Minimum", "Maximum");

B(float, FLT_MIN, FLT_MAX);
B(double, DBL MIN, DBL_MAX);
B(long double, LDBL MIN, LDBL_MAX);

return 0;
}
