#include <stdio.h>

int main() {
	char firstName[30];

	printf("Enter your first name: \n");

	scanf_s("%s", firstName, 30);

	printf("Hello %s", firstName);

	return 0;
}