#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int income;

	printf("���ռҵ� �ݾ��� ���������� �Է����ּ���. ");
	scanf("%d", &income);

	if (income <= 30000)
	{
		if (income > 8800)
			printf("����: 35%%\n");
		else if (income > 4600)
			printf("����: 24%%\n");
		else if (income > 1200)
			printf("����: 15%%\n");
		else
			printf("����: 6%%\n");
	}
	else
		printf("����: 38%%\n");

	return 0;
}