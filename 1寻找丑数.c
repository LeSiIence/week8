//寻找丑数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int judge(int n)
{
	/*int i = 2;
	while (i <= n)
	{
		if (n % i == 0)
		{
			//如果i有>=6的因子，则不是丑数返回0，结束judge（）
			if (i >= 6)
			{
				return 0;
			}
			n = n / i;
		}
		//除不尽，i++
		else 
		{
			i++;
		}
	}
	//没有大于等于6的素因子，是丑数
	return 1;*/

	while(n%2==0)
	{
		n /= 2;
	}
	while (n % 3 == 0)
	{
		n /= 3;
	}
	while (n % 5 == 0)
	{
		n /= 5;
	}
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main1(void)
{
	int t, n, i1;//t为组数，n为待处理数
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		for (i1 = 1; i1 <= n; i1++)
		{
			if (judge(i1))
			{
				printf("%d ", i1);
			}
		}
		printf("\n");
	}
	
	return 0;
}

