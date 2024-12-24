#include <stdio.h>

int main(void)
{
	int num, abs;
	printf("정수 입력 : ");
	scanf_s("%d", &num);

	abs = num > 0 ? num : num * (-1);  //wtf

	//if (num > 0)
	//	abs = num;
	//else
	//	abs = -num;

	printf("절댓값 : %d \n", abs);
	return 0;
}