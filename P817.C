#include<stdio.h>
#include<string.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
void nixu(char str[]);

int main(void)
{
	char str[128];

	printf("Input a string: ");
	gets(str);

	nixu(str);  /* userCode(<50�ַ�): ���ú������ַ���str������ */
	printf("\nThe result is: %s\n", str);
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */

void nixu(char str[])
{

	int i, j, len;
	char rts[128] = {'\0'};

	strcpy(rts, str);
	len = strlen(str);
	for (i = len, j = 0 ; i >= 0; i--, j++)
	{
	
		str[j + 0] = rts[i - 1];
	}
	str[j - 1] = '\0';

}