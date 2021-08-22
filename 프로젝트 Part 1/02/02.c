#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int c;
	int a, b;

	while (1) {
		printf("[1] 비트 AND(&)\n");
		printf("[2] 비트 OR(|)\n");
		printf("[3} 비트 XOR(^)\n");
		printf("[4] 비트 COMPLEMENT(~)\n");
		printf("[0] 종료(stop)\n");
		printf("위 연산 중 하나를 선택하세요. >> ");

		scanf("%d", &c);

		if (c == 0)
			break;

		switch (c) {
		case 1:
			printf("비트를 연산할 두 정수 입력 >> ");
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
			printf("비트를 연산할 두 정수 입력 >> ");
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
			printf("비트를 연산할 두 정수 입력 >> ");
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
			printf("비트 보수(-) 연산할 하나의 정수 입력 >> ");
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