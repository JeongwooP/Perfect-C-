// basictype.c: 두 정수의 합, 두 실수의 차 출력

#include <stdio.h>

int main(void)
{
	int a = 30, b = 43;
	int sum;
	sum = a + b;

	double x = 38.342, y = 45.345;
	double subtract;
	subtract = x - y;

	printf("합: %d\n", sum);
	printf("차: %f\n", subtract);

	return 0;
}