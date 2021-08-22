#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int month;

	printf("월을 입력하세요.");
	scanf("%d", &month);

	if (month <= 12)
	{
		if (month > 9)
			printf("4사분기입니다.\n");
		else if (month > 6)
			printf("3사분기입니다.\n");
		else if (month > 3)
			printf("2사분기입니다.\n");
		else
			printf("1사분기입니다.\n");
	}
	else
		printf("월을 잘못 입력하셨습니다.\n");

	return 0;
}