#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main__()
{
	int i = 0, n = 1, m = 0, bOK = 1;
	for (n = 2; n <= 1000; n++)
	{
		m = (int)sqrt(n);
		//bOK = 1;
		for (i = 2; i <= m; i++)
		{
			if (n % i == 0)
			{
				bOK = 0;  break;

			}
		}
		if (bOK == 1)	 printf("%d\n", n);
	}
	return 0;
}