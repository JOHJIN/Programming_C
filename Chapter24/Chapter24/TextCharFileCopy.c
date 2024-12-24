#include <stdio.h>

int main(void)
{
	FILE* src = fopen("data.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");
	/*int ch;*/
	char str[20];

	if (src == NULL || des == NULL)
	{
		puts("���� ���� ����!");
		return -1;
	}

	/*while ((ch = fgetc(src)) != EOF)
		fputc(ch, des);*/

	while (fgets(str, sizeof(str), src) != NULL)
		fputs(str, des);

	if (feof(src) != 0)
		puts("���� ���� �Ϸ�!");
	else
		puts("���� ���� ����!");

	fclose(src);
	fclose(des);
	return 0;
}