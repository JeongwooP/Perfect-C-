// intchar.c: �ƽ�Ű �ڵ尪 126 ���� '~'�� �پ��� ���

#include <stdio.h>

int main(void)
{
	int ch = 126;

	printf("%d\n", 126);
	printf("%c\n", ch);
	printf("%c\n", '/176');
	printf("%c\n", '/x7E');

	return 0;
}