#include <stdio.h>

int main(void)
{

	int cock = 0, hen = 0, chick = 0, money = 0, num = 0;

	printf("Input the money: ");
	scanf("%d", &money);
	printf("Input the number: ");
	scanf("%d", &num);

	// x+y+z=num
	// 5x+3y+z/3=money
	// z=num-y-x

	printf("\n  cock   hen chick\n");
	for (cock = 0; cock <= (money / 5); cock++) // (num / 5)Ӧ�ø�Ϊ(money / 5)
	{
	
		for (hen = 0; hen <= (money / 3); hen++) // (num / 3)Ӧ�ø�Ϊ(money / 3)
		{
			chick = num - hen - cock;

			if ((chick >= 0) && (chick % 3 == 0)) //(chick >= 0), ����(chick > 0)��Ҫ����chickΪ������
			{
			
				if (5 * cock + 3 * hen + chick / 3 == money)
				{
				
					printf("%6d%6d%6d\n", cock, hen, chick); //������ĿҪ�������ʽӦ����%6d%6d%6d\n
				}
			    //�˴��Ѿ�ɾ��else��֧����Ϊelse��֧����Ҫ���κβ��������Դ˴�ѡ���һ����ʽ��if��䣬��ֻ��ifû��else
			}
			//�˴��Ѿ�ɾ��else��֧����Ϊelse��֧����Ҫ���κβ��������Դ˴�ѡ���һ����ʽ��if��䣬��ֻ��ifû��else
			
		}
	}


	return 0;
}