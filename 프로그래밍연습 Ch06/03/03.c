#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	double height, weight;
	double BMI;

	printf("����(m)�� ������(kg)�� �Է����ּ���. ");
	scanf("%lf %lf", &height, &weight);

	BMI = weight / (height * height);

	if (BMI < 35)
	{
		if (BMI >= 30)
			printf("�����Դϴ�.\n");
		else if (BMI >= 25)
			printf("���Դϴ�.\n");
		else if (BMI >= 23)
			printf("��ü���Դϴ�.\n");
		else if (BMI >= 18.5)
			printf("�����Դϴ�.\n");
		else
			printf("��ü���Դϴ�.\n");
	}
	else
		printf("�ʰ����Դϴ�.\n");

	return 0;
}