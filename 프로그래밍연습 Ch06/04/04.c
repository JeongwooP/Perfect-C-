#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int gender;
	double height, weight;
	double BMI_male, BMI_female;

	printf("당신의 성별(남 = 0, 여 = 1), 신장, 몸무게를 입력해주세요. ");
	scanf("%d %lf %lf", &gender, &height, &weight);

	BMI_male = (weight / (height * height * 22)) * 100;
	BMI_female = (weight / (height * height * 21)) * 100;

	switch (gender) {
	case 0:
		if (BMI_male <= 20)
		{
			if (BMI_male > 10)
				printf("체중과다입니다.\n");
			else if (BMI_male > -10)
				printf("정상입니다.\n");
		}
		else
			printf("비만입니다.\n");
		break;
	case 1:
		if (BMI_female <= 20)
		{
			if (BMI_female > 10)
				printf("체중과다입니다.\n");
			else if (BMI_female > -10)
				printf("정상입니다.\n");
		}
		else
			printf("비만입니다.\n");
		break;
	}

	return 0;
}