#include<stdio.h>

#define SNUM 4 /* student number */
#define CNUM 3 /* course number */

/* User Code Begin(�������ڱ��к����Ӵ��룬����ṹ��Ķ��塢����ԭ�������ȣ���������) */
struct student
{
	char num[6], name[8];
	int score[3];
};

void DispScore(struct student stu[]);
void FindNoPass(struct student stu[]);

/* User Code End(�������Ӵ������) */

int main(void)
{
	int i, j;
	struct student stu[SNUM];

	printf("Please input student num name and score:\n");
	for (i=0; i<SNUM; i++)
	{ 
		printf("Student %d: ", i+1);
		scanf("%s %s", stu[i].num, stu[i].name);
		for (j=0; j<CNUM; j++)
		{
			scanf("%d", &stu[i].score[j]);
		}
	}
	
	DispScore(stu);
	FindNoPass(stu);

	return 0;
}

/* User Code Begin(�����ڴ˺�����Զ��庯������ƣ���������) */
void DispScore(struct student stu[])
{
	int i, j;

	printf("\nStudent Info and Score:\n");
	for (i = 0; i < SNUM; i++)
	{ 
		printf("%6s %8s ", stu[i].num, stu[i].name);
		for (j = 0; j < CNUM; j++)
		{
			printf("%5d ", stu[i].score[j]);
		}
		printf("\n");
	}
}
/*---------------------------------------------------------------*/
void FindNoPass(struct student stu[])
{
	int i, j;
	int num = 0;

	printf("\nTwo Course No Pass Students:\n");

	for (i = 0; i < SNUM; i++)
	{
		for (j = 0; j < CNUM; j++)
		{
			if (stu[i].score[j] < 60)
			{
				num++;
			}
		}
		if (num >= 2)
		{
			printf("%6s %8s ", stu[i].num, stu[i].name);
			for (j = 0; j < CNUM; j++)
			{
				if (stu[i].score[j] < 60)
				{
					printf("%5d ", stu[i].score[j]);
				}			
			}
			printf("\n");
		}
		num = 0;
	}
}