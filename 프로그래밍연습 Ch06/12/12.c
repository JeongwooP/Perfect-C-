#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char a;
	double temperature;

	switch (a)
	{
	case 'F':case 'f':
		printf("%lf", (5.0 / 9.0)*(temperature - 32));
		break;

	case 'C':case'c':
		printf("%lf", (5.0 / 9.0)*temperature + 32);
		break;

	}

	return 0;
}