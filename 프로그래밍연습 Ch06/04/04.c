#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int gender;
	double height, weight;
	double BMI_male, BMI_female;

	printf("����� ����(�� = 0, �� = 1), ����, �����Ը� �Է����ּ���. ");
	scanf("%d %lf %lf", &gender, &height, &weight);

	BMI_male = (weight / (height * height * 22)) * 100;
	BMI_female = (weight / (height * height * 21)) * 100;

	switch (gender) {
	case 0:
		if (BMI_male <= 20)
		{
			if (BMI_male > 10)
				printf("ü�߰����Դϴ�.\n");
			else if (BMI_male > -10)
				printf("�����Դϴ�.\n");
		}
		else
			printf("���Դϴ�.\n");
		break;
	case 1:
		if (BMI_female <= 20)
		{
			if (BMI_female > 10)
				printf("ü�߰����Դϴ�.\n");
			else if (BMI_female > -10)
				printf("�����Դϴ�.\n");
		}
		else
			printf("���Դϴ�.\n");
		break;
	}

	return 0;
}