#include <stdio.h>

int main(void)
{
	int dan, num = 1;
	printf("¸î ´Ü?\n");
	scanf_s("%d", &dan);

	while (num < 10)
	{
		printf("%d * %d = %d \n", dan, num, dan * num);
		num++;
	}
	return 0;
}