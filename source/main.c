#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, k;
	for (i = 1; i <= 500; i++)
	{
		for (j = 1; j <= 500; j++)
		{
			for (k = 1; k <= 500; k++)
			{
				if (i*i + j*j == k*k)
					printf("%d	%d	%d\n", i, j, k);
			}
		}
	}
	system("pause");
	return 0;
}

