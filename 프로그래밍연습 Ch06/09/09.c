#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int month;

	printf("���� �Է��ϼ���.");
	scanf("%d", &month);

	if (month <= 12)
	{
		if (month > 9)
			printf("4��б��Դϴ�.\n");
		else if (month > 6)
			printf("3��б��Դϴ�.\n");
		else if (month > 3)
			printf("2��б��Դϴ�.\n");
		else
			printf("1��б��Դϴ�.\n");
	}
	else
		printf("���� �߸� �Է��ϼ̽��ϴ�.\n");

	return 0;
}