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
		{
			printf("����: 35%%\n");
			printf("���� 1õ590���� + %d�������� �� %d���� \n", (income - 8800) / 35, 1590+ (income - 8800) / 35);
		}
		else if (income > 4600)
		{
			printf("����: 24%%\n");
			printf("���� 582���� + %d�������� �� %d���� \n", (income - 4600) / 24, 582 + (income - 4600) / 24);
		}
		else if (income > 1200)
		{
			printf("����: 15%%\n");
			printf("���� 72���� + %d�������� �� %d���� \n", (income - 1200) / 15, 72 + (income - 1200) / 15);
		}
		else
		{
			printf("����: 6%%\n");
			printf("���� 0���� + %�������� �� %d���� \n", (income / 6), income / 6);
		}

	}
	else
	{
		printf("����: 38%%\n");
		printf("���� 9õ10���� + %d�������� �� %d���� \n", (income - 30000) / 38, 9010 + (income - 30000) / 38);
	}

	return 0;
}