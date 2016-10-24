#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
double pux(int n, int x);

int main(void)
{
	double Pnx;
	int n, x;

	printf("please input n, x: ");
	scanf("%d,%d", &n, &x);

	Pnx = pux(n, x);  /* userCode(<50�ַ�): ���ú�������Pn(x) */
	printf("\nThe answer is %.6f.\n", Pnx);
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */

double pux(int n, int x)
{

	double res;

	if (n == 0)
	{
	
		res = 1;
	}
	else
	{
	
		if (n == 1)
		{
			res = x;
		}
		else
		{
		
			res = ((2 * (n) - 1) * x * pux(n - 1, x) - (n - 1) * pux(n - 2, x)) / ((n) * 1.0);
		}
	}

	return res;
}
