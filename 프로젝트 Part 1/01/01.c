#define	_CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int before, after;
	double input;

	printf("from ����: [1] ���ʹ��� [2]��ġ���� [3]�ǵ���� [4]�ߵ���� ");
	scanf("%d", &before);
	printf("to ����: [1] ���ʹ��� [2]��ġ���� [3]�ǵ���� [4]�ߵ���� ");
	scanf("%d", &after);

	while (1)
	{
		printf("��ȯ�� ���̸� �Է�: ");
		scanf("%lf", &input);


		
		if (input == 0)
			break;

		if (before == 1) 
		{
			switch (after) 
			{
			case 1:
				printf("%lf(����) --> %lf(����)\n", input, input);
				break;
			case 2:
				printf("%lf(����) --> %lf(��ġ)\n", input, input * 39.370079);
				break;
			case 3:
				printf("%lf(����) --> %lf(��Ʈ)\n", input, input * 3.28084);
				break;
			case 4:
				printf("%lf(����) --> %lf(�ߵ�)\n", input, input * 1.093613);
				break;
			}
		}
		else if (before == 2)
		{
			switch (after)
			{
			case 1:
				printf("%lf(��ġ) --> %lf(����)\n", input, input * 0.0254);
				break;
			case 2:
				printf("%lf(��ġ) --> %lf(��ġ)\n", input, input);
				break;
			case 3:
				printf("%lf(��ġ) --> %lf(��Ʈ)\n", input, input * 0.083333);
				break;
			case 4:
				printf("%lf(��ġ) --> %lf(�ߵ�)\n", input, input * 0.027778);
				break;
			}
		}
		else if (before == 3)
		{
			switch (after)
			{
			case 1:
				printf("%lf(��Ʈ) --> %lf(����)\n", input, input * 0.3048); 
				break;
			case 2:
				printf("%lf(��Ʈ) --> %lf(��ġ)\n", input, input * 12); 
				break;
			case 3:
				printf("%lf(��Ʈ) --> %lf(��Ʈ)\n", input, input); 
				break;
			case 4:
				printf("%lf(��Ʈ) --> %lf(�ߵ�)\n", input, input * 0.333333); 
				break;
			}
		}
		else if (before == 4)
		{
			switch (after)
			{
			case 1:
				printf("%lf(�ߵ�) --> %lf(����)\n", input, input * 0.9144);
				break;
			case 2:
				printf("%lf(�ߵ�) --> %lf(��ġ)\n", input, input * 36); 
				break;
			case 3:
				printf("%lf(�ߵ�) --> %lf(��Ʈ)\n", input, input * 3); 
				break;
			case 4:
				printf("%lf(�ߵ�) --> %lf(�ߵ�)\n", input, input); 
				break;
			}
		}
	}
	

}