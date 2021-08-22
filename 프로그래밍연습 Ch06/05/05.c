#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int num = 17;
	int input;

	printf("1~20사이에 숫자를 뽑아주세요. ");
	scanf("%d", &input);

	if (input > num)
		printf("정답보다 큽니다.\n");
	else if (input < num)
		printf("정답보다 작습니다.\n");
	else
		printf("정답이랑 같습니다.\n");

	return 0;
}