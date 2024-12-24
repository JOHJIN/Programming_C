#include <stdio.h>

int Factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);
}

int main(void)
{
	int n = 0;
	scanf_s("%d", &n);
	printf("%d! = %d \n", n, Factorial(n));
	return 0;
}