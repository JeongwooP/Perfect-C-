#define _CRT_SRCURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	float pi;
	printf("�������� �Է��ϼ���.\n");
	scanf("%f", &pi);
	printf("%f\n", pi);

	char ch1, ch2;
	printf("�����ڸ� �������� �� ���ڸ� �Է��ϼ���.\n");
	//���� �տ� ������ �ξ� enter�� ����, �����ڷ� ����(���� ���� ����)�� ���
	scanf(" %c %c", &ch1, &ch2);
	printf("ch=%c ch2=%c\n", ch1, ch2);

	return 0;
}