#include <stdio.h>
#include <string.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct person man1, man2;
	strcpy_s(man1.name, sizeof(man1.name), "안성준");
	strcpy_s(man1.phoneNum, sizeof(man1.phoneNum), "010-1122-3344");
	man1.age = 23;

	printf("이름 입력 : "); scanf_s("%s", man2.name, 20);
	printf("번호 입력 : "); scanf_s("%s", man2.phoneNum, 20);
	printf("나이 입력 : "); scanf_s("%d", &(man2.age));

	printf("이름 : %s \n", man1.name);
	printf("번호 : %s \n", man1.phoneNum);
	printf("나이 : %d \n", man1.age);

	printf("이름 : %s \n", man2.name);
	printf("번호 : %s \n", man2.phoneNum);
	printf("나이 : %d \n", man2.age);

	return 0;
}