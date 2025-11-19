#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("char: size=%zu min=%d max=%d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("short: size=%zu min=%d max=%d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("int: size=%zu min=%d max=%d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("long: size=%zu min=%ld max=%ld\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("long long: size=%zu min=%lld max=%lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX);

    printf("float: size=%zu min=%e max=%e\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("double: size=%zu min=%e max=%e\n", sizeof(double), DBL_MIN, DBL_MAX);
    printf("long double: size=%zu min=%Le max=%Le\n", sizeof(long double), LDBL_MIN, LDBL_MAX);
printf("25ce097\n Manthan");
    return 0;
}
