#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, sum = 0;

	printf("������ �Է����ּ���. ");
	scanf("%d", &a);

	for (int i = 0; i <= a; i++)
	{
		sum += i;
	}

	printf("1���� %d�� ������: %d�Դϴ�.\n ", a, sum);

	return 0;
}