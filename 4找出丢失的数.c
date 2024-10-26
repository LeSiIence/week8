//找出丢失的数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int t, n, i, j, sum, sum1, target;
	scanf("%d", &t);
	
	while (t--)
	{
		i = -1, n = 1, sum = 0, sum1 = 0;
		
		//获取输入数个数，计算输入数之和
		while (n)
		{
			scanf("%d", &n);
			i++;
			sum += n;
		}
		
		//计算1+……+n
		for (j = 1; j <= i + 1; j++)
		{
			sum1 += j;
		}

		target = sum1 - sum;
		printf("%d\n", target);
	}


	return 0;
}