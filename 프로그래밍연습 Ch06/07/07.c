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
		{
			printf("세율: 35%%\n");
			printf("세금 1천590만원 + %d만원으로 총 %d만원 \n", (income - 8800) / 35, 1590+ (income - 8800) / 35);
		}
		else if (income > 4600)
		{
			printf("세율: 24%%\n");
			printf("세금 582만원 + %d만원으로 총 %d만원 \n", (income - 4600) / 24, 582 + (income - 4600) / 24);
		}
		else if (income > 1200)
		{
			printf("세율: 15%%\n");
			printf("세금 72만원 + %d만원으로 총 %d만원 \n", (income - 1200) / 15, 72 + (income - 1200) / 15);
		}
		else
		{
			printf("세율: 6%%\n");
			printf("세금 0만원 + %만원으로 총 %d만원 \n", (income / 6), income / 6);
		}

	}
	else
	{
		printf("세율: 38%%\n");
		printf("세금 9천10만원 + %d만원으로 총 %d만원 \n", (income - 30000) / 38, 9010 + (income - 30000) / 38);
	}

	return 0;
}