#include <stdio.h>

void input(int aa[], int *count);  /* userCode(<50�ַ�): �Զ��庯��1֮ԭ������ */
void output(int aa[], int *count);  /* userCode(<50�ַ�): �Զ��庯��2֮ԭ������ */

int main(void)
{
	int num[16], count;

	printf("���������ɸ���: ");
	input(num, &count);  /* userCode(<30�ַ�): ���ú����������ݵ�num�в�ͳ�Ƹ��� */

	printf("\n��%d����������Ϊ: ", count);
	output(num, &count);  /* userCode(<30�ַ�): ���ú����������num������Ԫ�� */

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void input(int aa[], int *count)
{

	int i = 0, tmp;

	scanf("%d", &tmp);

	for (i = 0; i < 16; i++)
	{
	
		if (tmp == -1)
		{
		
			break;
		}
		else
		{	
			aa[i] = tmp;
			scanf("%d", &tmp);
		}

	}

	*count = i;
}

void output(int aa[], int *count)
{

	int i;

	for (i = *count - 1; i >= 0; i--)
	{
		printf("%d ", aa[i]);
	}
	
}