#include <stdio.h>

int main()
{
	int i;
	float num = 0.0;

	for (i = 0; i < 100; i++)
	{
		num += 0.1;
	}
	printf("0.1을 100번 더한 값 : %f\n", num);
	return 0;
}