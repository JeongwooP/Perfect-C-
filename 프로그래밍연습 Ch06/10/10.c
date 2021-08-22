#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int year;

	printf("년도의 윤년을 판단하겠습니다. 년도를 입력해주세요. ");
	scanf("%d", &year);

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
			printf("평년입니다.\n");
		else if (year % 400 == 0)
			printf("윤년입니다. \n");
	}
	 
	return 0;
}