#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
int minp(int aa[], int n);

int main(void)
{
	int arrA[5], arrB[8], minPosA, minPosB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	minPosA = minp(arrA, 5);  /* userCode(<30�ַ�): ���ú�������arrA��Ԫ�ص���Сֵ���ڵ��±� */
	printf("\nminPos(arrA) = %d", minPosA);
	minPosB = minp(arrB, 8);  /* userCode(<30�ַ�): ���ú�������arrB��Ԫ�ص���Сֵ���ڵ��±� */
	printf("\nminPos(arrB) = %d\n", minPosB);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int minp(int aa[], int n)
{

	int i, mini = aa[0], mip = 0;

	for (i = 0; i < n; i++)
	{
	
		if (aa[i] < mini)
		{
		
			mini = aa[i];
			mip = i;
		}
	}
	return mip;
}

