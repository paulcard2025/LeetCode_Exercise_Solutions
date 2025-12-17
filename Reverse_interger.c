#include <limits.h>
int reverse(int x){
    int res = 0;
	int sinal = 1;

	long long x1 = (long long )x;
	if (x1 < 0)
	{
		x1 *= -1;
		sinal = -1;
	}
	while (x1 > 0)
	{
		int digito = (x1 % 10);
		x1 = x1 / 10;

		// verificar overflow
		if (res > INT_MAX/10 || (res == INT_MAX/10 && digito > 7))
			return (0);
		if (res < INT_MIN/10 || (res == INT_MIN/10 && digito < -8))
			return (0);
		res = (res * 10) + digito;
	}
	return (res * sinal);
}
