#include <stdio.h>

int main()
{
	int count = 0;

	for (int j = 2; j <= 257; j++)
	{

		for (int n = 1; n <= j; n++) {
			if (j % n != 0)
				{
					count++;	//j´Â ¼Ò¼ö
				}
		}
		if (count == 0)
		{
			int p = 1;
			for (int i = 1; i <= p; i++)
			{
				printf("%d ", j);
			}
			puts("");
		}
		else
			continue;
	}
}