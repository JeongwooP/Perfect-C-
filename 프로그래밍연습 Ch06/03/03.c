#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	double height, weight;
	double BMI;

	printf("신장(m)과 몸무게(kg)를 입력해주세요. ");
	scanf("%lf %lf", &height, &weight);

	BMI = weight / (height * height);

	if (BMI < 35)
	{
		if (BMI >= 30)
			printf("고도비만입니다.\n");
		else if (BMI >= 25)
			printf("비만입니다.\n");
		else if (BMI >= 23)
			printf("과체중입니다.\n");
		else if (BMI >= 18.5)
			printf("정상입니다.\n");
		else
			printf("저체중입니다.\n");
	}
	else
		printf("초고도비만입니다.\n");

	return 0;
}