#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a;

	do {
		printf("정수를 입력해주세요~, 0을 입력시 종료합니다.");
		scanf("%d", &a);

		if (a == 0)
			break;



	}while(1);


}