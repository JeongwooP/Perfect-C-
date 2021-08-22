#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int income;

	printf("종합소득 금액을 만원단위로 입력해주세요. ");
	scanf("%d", &income);

	if (income <= 30000)
	{
		if (income > 8800)
			printf("세율: 35%%\n");
		else if (income > 4600)
			printf("세율: 24%%\n");
		else if (income > 1200)
			printf("세율: 15%%\n");
		else
			printf("세율: 6%%\n");
	}
	else
		printf("세율: 38%%\n");

	return 0;
}