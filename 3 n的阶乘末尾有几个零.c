// n�Ľ׳�ĩβ�м�����
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main3(void)
{
	int t, n, num2, num5, n1;//tΪ������nΪ�����������num2��num5Ϊ2��5���ӵĸ�����n1Ϊ ѭ���м�����������
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		num2 = 0, num5 = 0;
		n1 = n;
		while (n1--)
		{
			//��������2�ĸ���
			while (n % 2 == 0)
			{
				n /= 2;
				num2++;
			}
			//��������5�ĸ���
			while (n % 5 == 0)
			{
				n /= 5;
				num5++;
			}
			n = n1;
		}
		//��ӡ10���Ӹ���
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