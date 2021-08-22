#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, sum = 0;

	printf("정수를 입력해주세요. ");
	scanf("%d", &a);

	for (int i = 0; i <= a; i++)
	{
		sum += i;
	}

	printf("1부터 %d의 총합은: %d입니다.\n ", a, sum);

	return 0;
}