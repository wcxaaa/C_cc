#include <stdio.h>
#include <math.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
int jpn(int m, int n);

int main(void)
{
	int m, n, cnt;

	printf("Input the m, n: ");
	scanf("%d,%d", &m, &n);

	printf("\nThe result:\n");
	for (cnt=0; cnt<n; m++)
	{
		if (jpn(m, n) == 1)/* userCode(<50�ַ�): ���ú����ж�m�Ƿ�Ϊ���� */
		{
			printf("%d ", m);
			cnt++;
		}
	}
	putchar('\n');

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */

int jpn(int m, int n)
{

	int i, flag = 1;

	for (i = 2; i <= m - 1; i++)
	{
	
		if (m % i == 0)
		{
			flag = 0;		
			break;
		}
	}
	if (flag == 0)
	{
	
		return 0;
	}
	else
	{
	
		return 1;
	}
}