#define	_CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int before, after;
	double input;

	printf("from 단위: [1] 미터단위 [2]인치단위 [3]피드단위 [4]야드단위 ");
	scanf("%d", &before);
	printf("to 단위: [1] 미터단위 [2]인치단위 [3]피드단위 [4]야드단위 ");
	scanf("%d", &after);

	while (1)
	{
		printf("변환한 길이를 입력: ");
		scanf("%lf", &input);


		
		if (input == 0)
			break;

		if (before == 1) 
		{
			switch (after) 
			{
			case 1:
				printf("%lf(미터) --> %lf(미터)\n", input, input);
				break;
			case 2:
				printf("%lf(미터) --> %lf(인치)\n", input, input * 39.370079);
				break;
			case 3:
				printf("%lf(미터) --> %lf(피트)\n", input, input * 3.28084);
				break;
			case 4:
				printf("%lf(미터) --> %lf(야드)\n", input, input * 1.093613);
				break;
			}
		}
		else if (before == 2)
		{
			switch (after)
			{
			case 1:
				printf("%lf(인치) --> %lf(미터)\n", input, input * 0.0254);
				break;
			case 2:
				printf("%lf(인치) --> %lf(인치)\n", input, input);
				break;
			case 3:
				printf("%lf(인치) --> %lf(피트)\n", input, input * 0.083333);
				break;
			case 4:
				printf("%lf(인치) --> %lf(야드)\n", input, input * 0.027778);
				break;
			}
		}
		else if (before == 3)
		{
			switch (after)
			{
			case 1:
				printf("%lf(피트) --> %lf(미터)\n", input, input * 0.3048); 
				break;
			case 2:
				printf("%lf(피트) --> %lf(인치)\n", input, input * 12); 
				break;
			case 3:
				printf("%lf(피트) --> %lf(피트)\n", input, input); 
				break;
			case 4:
				printf("%lf(피트) --> %lf(야드)\n", input, input * 0.333333); 
				break;
			}
		}
		else if (before == 4)
		{
			switch (after)
			{
			case 1:
				printf("%lf(야드) --> %lf(미터)\n", input, input * 0.9144);
				break;
			case 2:
				printf("%lf(야드) --> %lf(인치)\n", input, input * 36); 
				break;
			case 3:
				printf("%lf(야드) --> %lf(피트)\n", input, input * 3); 
				break;
			case 4:
				printf("%lf(야드) --> %lf(야드)\n", input, input); 
				break;
			}
		}
	}
	

}