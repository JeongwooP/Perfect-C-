#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int x, y;
	int swap;
	int dump;

	printf("��ȯ�� �� ������ �Է��ϼ���. >> ");
	scanf("%d %d", &x, &y);
	printf("�Է��� �� ��: x = %d and y = %d\n", x, y);

	printf("�ӽ� ���� ��� �̿���[1]\n");
	printf("������ �������� ��ȯ ���[2]\n");
	printf("������ ���������� ��ȯ ���[3]\n");
	printf("XOR ������ ^	�̿� ���[4]\n");
	printf("�� ��ȯ ��� �� �� ��ȣ�� �����ϼ���. >> ");
	scanf("%d", &swap);

	switch (swap) {
	case 1:
		dump = x;
		x = y;
		y = dump;
		printf("��ȯ�� �� �� : x = %d and y = %d\n", x, y);
		break;
	case 2:
		x = x + y;
		y = x - y;
		x = x - y;
		printf("��ȯ�� �� �� : x = %d and y = %d\n", x, y);
		break;
	case 3:
		x = x*y;
		y = x / y;
		x = x / y;
		printf("��ȯ�� �� �� : x = %d and y = %d\n", x, y); 
		break;
	case 4:
		x = x^y;
		y = x^y;
		x = x^y;
		printf("��ȯ�� �� �� : x = %d and y = %d\n", x, y); 
		break;
	}
}