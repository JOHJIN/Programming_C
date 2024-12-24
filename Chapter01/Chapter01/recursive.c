#include <stdio.h>

int sum(int a);

//int main()
//{
//	int result = sum(10);
//	printf("%d", result);
//	return 0;
//}

int sum(int a){
	if (a > 0) {
		return a + sum(a - 1);
	}
	else {
		return 0;
	}

}