#include <stdio.h>

int main(void)
{
	FILE* src = fopen("data.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");
	/*int ch;*/
	char str[20];

	if (src == NULL || des == NULL)
	{
		puts("파일 오픈 실패!");
		return -1;
	}

	/*while ((ch = fgetc(src)) != EOF)
		fputc(ch, des);*/

	while (fgets(str, sizeof(str), src) != NULL)
		fputs(str, des);

	if (feof(src) != 0)
		puts("파일 복사 완료!");
	else
		puts("파일 복사 실패!");

	fclose(src);
	fclose(des);
	return 0;
}