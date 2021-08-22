#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a;

	printf("정수를 하나 입력하세요. >> ");
	scanf("%d", &a);

	printf("이진수: ");
	for (int i = 32; i >= 1; i--)
	{
		printf("%d", (a >> (i - 1) & 1));
	}

	printf("팔진수: ");

	for(int n= 0 ; n)

	}