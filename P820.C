#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
int func(int x);

int main(void)
{
	int n;
	long int Fn;

	printf("Please input a number: ");
	scanf("%d", &n);

	Fn = func(n);  /* userCode(<50�ַ�): ���ú�������f(n) */
	printf("\nf(%d) = %ld\n", n, Fn);
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */

int func(int x)
{

	int res;

	if (x == 1)
	{
	
		res = 1;
	}
	else
	{
	
		if (x < 1)
		{
		
			res = 0;
		}
		else
		{
		
			res = 2 * func(x / 2) + x;
		}
	}
	return res;
}
