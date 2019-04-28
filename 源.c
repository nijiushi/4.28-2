#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 1;
	double temp = 0;
	for (i; i < 101; i++)
	{
		if (i % 2)
		{
			temp += 1.0 / i;
		}
		else
		{
			temp -= 1.0 / i;
		}
	}
	printf("%lf", temp);
	system("pause");
	return 0;
}