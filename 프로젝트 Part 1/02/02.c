#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int c;
	int a, b;

	while (1) {
		printf("[1] ��Ʈ AND(&)\n");
		printf("[2] ��Ʈ OR(|)\n");
		printf("[3} ��Ʈ XOR(^)\n");
		printf("[4] ��Ʈ COMPLEMENT(~)\n");
		printf("[0] ����(stop)\n");
		printf("�� ���� �� �ϳ��� �����ϼ���. >> ");

		scanf("%d", &c);

		if (c == 0)
			break;

		switch (c) {
		case 1:
			printf("��Ʈ�� ������ �� ���� �Է� >> ");
			scanf("%d %d ", &a, &b);

			printf("x = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((a >> i) & 1) ? '1' : '0');
			}
			printf(" %d\n", a);

			printf("y = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((b >> i) & 1) ? '1' : '0');
			}
			printf(" %d\n", b);

			printf("x & y = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((a&b >> i) & 1) ? '1' : '0');
			}
			printf(" %d\n", a&b);

			break;
		case 2:
			printf("��Ʈ�� ������ �� ���� �Է� >> ");
			scanf("%d %d ", &a, &b);

			printf("x = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((a >> i) & 1) ? '1' : '0');
			}
			printf(" %d\n", a);

			printf("y = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((b >> i) & 1) ? '1' : '0');
			}
			printf(" %d\n", b);

			printf("x | y = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((a | b >> i) & 1) ? '1' : '0');
			}
			printf(" %d\n", a | b);

			break;

		case 3:
			printf("��Ʈ�� ������ �� ���� �Է� >> ");
			scanf("%d %d", &a, &b);

			printf("x = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((a >> i) & 1) ? '1' : '0');
			}
			printf(" %d\n", a);

			printf("y = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((b >> i) & 1) ? '1' : '0');
			}
			printf(" %d\n", b);

			printf("x ^ y = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((a ^ b >> i) & 1) ? '1' : '0');
			}
			printf(" %d\n", a ^ b);

			break;

		case 4:
			printf("��Ʈ ����(-) ������ �ϳ��� ���� �Է� >> ");
			scanf("%d", &a);

			printf("x = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((a >> i) & 1) ? '1' : '0');
			}
			printf(" %d", a);

			printf("~x = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((~a >> i) & 1) ? '1' : '0');
			}
			printf(" %d\n", ~a);

			break;

		}
	}
	return 0;

}