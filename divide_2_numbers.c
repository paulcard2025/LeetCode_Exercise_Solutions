#include <limits.h>
int divide(int dividend, int divisor) {
    long long res = 0;

    if (dividend == INT_MIN && divisor == -1)
        return (2147483647);
    res = dividend / divisor;
    if (res > 2147483647)
        return (0);
    if (res < -2147483648)
        return (0);
    return (res);
}
