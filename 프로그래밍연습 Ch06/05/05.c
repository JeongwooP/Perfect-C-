#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int num = 17;
	int input;

	printf("1~20���̿� ���ڸ� �̾��ּ���. ");
	scanf("%d", &input);

	if (input > num)
		printf("���亸�� Ů�ϴ�.\n");
	else if (input < num)
		printf("���亸�� �۽��ϴ�.\n");
	else
		printf("�����̶� �����ϴ�.\n");

	return 0;
}