// n的阶乘末尾有几个零
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main3(void)
{
	int t, n, num2, num5, n1;//t为组数，n为待处理的数，num2、num5为2，5因子的个数，n1为 循环中计数辅助变量
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		num2 = 0, num5 = 0;
		n1 = n;
		while (n1--)
		{
			//计算因子2的个数
			while (n % 2 == 0)
			{
				n /= 2;
				num2++;
			}
			//计算因子5的个数
			while (n % 5 == 0)
			{
				n /= 5;
				num5++;
			}
			n = n1;
		}
		//打印10因子个数
		if (num2 > num5)
		{
			printf("%d\n", num5);
		}
		else
		{
			printf("%d\n", num2);
		}
	}

	return 0;
}