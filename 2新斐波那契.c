//��쳲�����
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main2(void)
{
	long long fn_3 = 1, fn_2 = 1, fn_1 = 1;
	long long fn;
	int n, t, i;//tΪ������nΪ����ű�,iΪѭ������
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d",&n);
		fn_3 = 1, fn_2 = 1, fn_1 = 1;
		for (i = 1; i <= n - 3; i++)
		{
			fn = 2 * fn_1 + 3 * fn_2 + 5 * fn_3;
			fn_3 = fn_2;
			fn_2 = fn_1;
			fn_1 = fn;
		}
		printf("%lld\n", fn);
	}


	return 0;
}