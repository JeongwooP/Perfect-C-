#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int year;

	printf("�⵵�� ������ �Ǵ��ϰڽ��ϴ�. �⵵�� �Է����ּ���. ");
	scanf("%d", &year);

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
			printf("����Դϴ�.\n");
		else if (year % 400 == 0)
			printf("�����Դϴ�. \n");
	}
	 
	return 0;
}