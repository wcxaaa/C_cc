#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <Winreg.h>
#include <WINERROR.h>

#define BOOL int
#define TRUE 1
#define FALSE 0
#define ver 0.90

int seccheck(void);
void updatecheck(void);
void suoyaoK(void);
void zengsongK(void);
long restor(void);
long restst(void);
long restup(void);


int main()
{
	int keyent;
	int flag = 0; // an quan jian cha
	long res;
//	int i;

	system("color 97");

	printf("\t\t--------Billy-CDK Recovery Mode v");
	printf("%.2lf", ver);
	printf("--------\n\n");

	system("pause");
	printf("- ��ӭ����Billy CD-Key\n");
	printf("- �汾��Billy CD-Key ��ͥ����ƻ����\n");
	printf("- ��ǰ������CM Recovery Mode\n");
	system("pause");

	updatecheck();

	for (;;)
	{
		if (flag == 0) // jin ru an quan jian cha
		{
			printf("\n���������ƺ��ǵ�һ�δ��������Ϊ����֤���Ƿ������Billy-CDK�߼�������Ա\n����������ǽ��а�ȫ��飬");
			printf("Billy-CDKлл����������֧�֣�\n");
			system("pause");
			flag = seccheck();
		}
		else // an quan jian cha zuo guo
		{
			if (flag == 2) // an quan jian cha mei guo
			{
				printf("�Բ�����û��ͨ����ȫ��飡�������ڶ����ĸ߼�������Ա���������صĻ��ɡ�_����~~~\n�����������������´���~~��л��ʹ�ñ�����~~~~��\n");
				system("pause");
				return 0;
			}
			else // an quan jian cha tong guo
			{
				printf("******************************************************\n");
				printf("******************************************************\n");
				printf("*****************-----1 -��ҪCDK-------***************\n");
				printf("*****************-----2 -����CDK-------***************\n");
				printf("*****************-----3 -��δ���ţ��һ�CDK-------*****\n");
				printf("*****************-----4 -������Ա������Origin-----****\n");
				printf("*****************-----5 -������Ա������Steam-----*****\n");
				printf("*****************-----6 -������Ա������Uplay-----*****\n");
				printf("******************************************************\n");
				printf("******************************************************\n");
				printf("******************----0 -�˳�----------***************\n");

				printf(">>");
				scanf("%d", &keyent);
				if (keyent == 0)
				{
					break; // shu 0 jiu tui chu
				}

				if (keyent == 1)
				{
					system("cls");
					printf("\t\t--------Billy-CDK Recovery Mode v");
					printf("%.2lf", ver);
					printf("--------\n\n");
					suoyaoK();
				}

				if (keyent == 2)
				{
					system("cls");
					printf("\t\t--------Billy-CDK Recovery Mode v");
					printf("%.2lf", ver);
					printf("--------\n\n");
					zengsongK();
				}
				if (keyent == 3)
				{
					system("cls");
					printf("\t\t--------Billy-CDK Recovery Mode v");
					printf("%.2lf", ver);
					printf("--------\n\n");
					;
				}
				if (keyent == 4)
				{
					system("cls");
					printf("\t\t--------Billy-CDK Recovery Mode v");
					printf("%.2lf", ver);
					printf("--------\n\n");
					restor();
				}

				if (keyent == 5)
				{
					system("cls");
					printf("\t\t--------Billy-CDK Recovery Mode v");
					printf("%.2lf", ver);
					printf("--------\n\n");
					res = restst();
				}

				if (keyent == 6)
				{
					system("cls");
					printf("\t\t--------Billy-CDK Recovery Mode v");
					printf("%.2lf", ver);
					printf("--------\n\n");
					res = restup();
				}

			}

		}

	}

	printf("- ��л��ʹ�ñ�����\n");

	system("pause");
	return 0;
}

//-------------------------------------------------------an quan jian cha
int seccheck(void)
{
//	

	int t; // time waited
//	int num;
	char name[20];
	char yzm[30] = "MSqvBillyGeiWoCDK10010"; // yzm
	char nameans[6] = "billy"; // zheng que de ming zi
	char ch;

	BOOL f1 = FALSE;
	BOOL f2 = FALSE;
	BOOL f3 = FALSE;
	BOOL f4 = FALSE;
	BOOL f5 = FALSE;
	BOOL f6 = FALSE;

	printf("\n---------------------------------\n");
	printf("| �������߼����Ŀ�����ԡ�����|");
	printf("\n---------------------------------\n");
	printf("Ŀ�꣺��ȷ�ش�������������ſ���ͨ����ȫ��顣\nͨ����ȫ���ſ��Խ��б��������ز�����\n\n");

	srand((int)time(0));
	t = rand() % 2000 + 2000 ;
	Sleep(t);
	printf("\n ---���棡�޷����ӵ���������\n");
	printf("��Ŀ���ͨ��������������⡣����\n\n");
	Sleep(1000);

//>>>>>>> No.1
	printf("##1. Billy�ǰ�׿�ۻ���ƻ����\n");
	printf("A.��׿�ۣ������ǹ���\tB.�ǹ��ڵ�����׿��\nC.����׿�����ǹ���\tD.�Ȳ��ǰ�׿��Ҳ���ǹ���\n");
	setbuf(stdin, NULL);
	printf(">>");
	scanf("%c", &ch);
	if (ch == 'C' || ch == 'c')
	{
		f1 = TRUE;
//		printf("duide!\n");
	}

//>>>>>>> No.2
	printf("##2. ������������֤�룺\n");
	printf("%s\n", yzm);
	fflush(stdin);
	printf(">>");
	scanf("%s", name);
	if (strcmp(name, yzm) == 0)
	{
		f2 = TRUE;
//		printf("duide!\n");
	}
//	*name = '\0';
	

//>>>>>>> No.3
	printf("##3. ��ֹ2014��7��17�գ�Billy�ܹ�����Steve_____��CDK\n");
	printf("A.7��\tB.8��\tC.9��\tD.10��\n");
	setbuf(stdin, NULL);
	printf(">>");
	scanf("%c", &ch);
	if (ch == 'A' || ch == 'a')
	{
		f3 = TRUE;
//		printf("duide!\n");
	}

//>>>>>>> No.4
	printf("##4. ĿǰBilly��Steam�˺��ǳ���_____\n");
	setbuf(stdin, NULL);
	printf(">>");
	scanf("%s", name);
	if (strcmp(nameans, name) == 0)
	{
		f4 = TRUE;
//		printf("duide!\n");
	}

//>>>>>>> No.5
	printf("##5. Billy��Steve�������Steam��Ϸ�ֱ���_____��_____\n");
	printf("A.����֮·2�� �����뿳ɱ ս��\tB.������2�� �̿�����4\nC.����2�� �Ϲž���5\tD.���֮��2�� ���֮��2\n");
	setbuf(stdin, NULL);
	printf(">>");
	scanf("%c", &ch);
	if (ch == 'C' || ch == 'c')
	{
		f5 = TRUE;
//		printf("duide!\n");
	}

//>>>>>>> No.6
	printf("##6. Steve����Billy CDK��\n");
	printf("A.����\tB.û����\n");
	setbuf(stdin, NULL);
	printf(">>");
	scanf("%c", &ch);
	if (ch == 'A' || ch == 'a')
	{
		f6 = TRUE;
//		printf("duide!\n");
	}



	if (f1 && f2 && f3 && f4 && f5 && f6)
	{
		printf("��������ϲ������ȫ�����ͨ�������ڼ������˵���������\n\n");
		return 1;
	}
	else
	{
		return 2;
	} 
 
	return 1;

}
//---------------------------------------------------------jian cha geng xin
void updatecheck(void)
{
	char ch;
	int t; // time waited

	printf("�������Ƿ�ϣ�����һ�¸��£� Y/N\n");
	printf(">>");
	scanf("%c", &ch);

	if (ch == 'Y' || ch == 'y')
	{
		printf("���������Ҿ�����������~~~\n\n");
	}
	else
	{
		if (ch == 'N' || ch == 'n')
		{
			printf("���У�������Ҽ����£�(��=��=)�Ωߩ���\n\n");
		}
		else
		{
			printf("��ѽ�������ˣ�yes��no���䲻��~~���ˣ�������Ҫ���£���ֻ��֪ͨ��һ��~~~~\n\n");
		}
	}
	printf("- ���Ҹ����У���������Billy-CDK������������\n");  // ! she ge zi dong geng xin

	srand((int)time(0));
	t = rand() % 2000 + 2000 ;

	Sleep(t);
	printf("- ���棡�����޷����ӵ��������������������޷��ɹ�����CDK������ \n");

	system("pause");
}

//-------------------------------------------------------1- suo yao K
void suoyaoK(void)
{
	int i;
	char ch;
	int stat[2] = {1};
	char game[128] = {'\0'};

	printf("\n��ȷ��Ҫ��Billy-CDK��Ҫ����CDK����ע�������������undone������\n\n\n");

	printf("----1--�����Ҳ�����Billy-CDKҪCDK��\n");
	printf("----2--�����Ҳ�����Billy-CDKҪCDK��\n");
	printf("----3--�����Ҳ�����Billy-CDKҪCDK��\n");
	printf("----4--�����Ҳ�����Billy-CDKҪCDK��\n");
	printf("----5--�����Ҳ�����Billy-CDKҪCDK��\n");
	printf("----6--�����Ҳ�����Billy-CDKҪCDK��\n");
	printf("----7--�ǵģ���ϣ����Billy-CDKҪCDK��\n");
	printf("----8--�����Ҳ�����Billy-CDKҪCDK��\n");
	printf("----9--�����Ҳ�����Billy-CDKҪCDK��\n");
	printf("----0--�����Ҳ�����Billy-CDKҪCDK��\n");
	setbuf(stdin, NULL);
	printf(">>");
	scanf("%d", &i);

	if (i == 7)
	{
		printf("�õģ�����Billy�Ƿ����ڹۿ������Ƶ�� Y/N \n\n");
		setbuf(stdin, NULL);
		printf(">>");
		scanf("%c", &ch);
		if (ch == 'N' || ch == 'n')
		{
			stat[0] = 0; // bu zai kan
			printf("�õģ�������ϣ��ͨ�����ַ�ʽ��Billy-CDK��ҪCDK��\n\n");
			printf("----1-�绰��ϵ\n");
			printf("----2-QQ��Ҫ\n");
			printf("----3-Origin�ͷ�ˣ��\n");
			setbuf(stdin, NULL);
			printf(">>");
			scanf("%d", &stat[1]);
		}

		printf("\n�õģ�����Ҫʲô��Ϸ��CDK�������� \n\n");
		printf(">>");
		setbuf(stdin, NULL);
		gets(game);
			
		printf("�õģ�����ʹ��");

		if (stat[0] == 0)
		{
			switch (stat[1])
			{
				case 1:
					printf(" �绰��ϵ ");
					break;
				case 2:
					printf(" QQ��Ҫ ");
					break;
				case 3:
					printf(" Origin�ͷ�ˣ�� ");
					break;
				default:
					printf(" ĳ��δ֪ ");
			}
		}
		else
		{
			printf(" ��Ƶ���� ");
		}
		printf("�ķ�ʽ����Billy����Ҫ ");
		printf("%s ", game);
		printf("��CDK\n");

		system("pause");
		
		if (stat[0] == 0)
		{
			printf("******************************************************\n");
			printf("******************************************************\n");
			printf("******************************************************\n");
			printf("******************************************************\n");
			printf("******************************************************\n");
			switch (stat[1])
			{
				case 1:
					printf("�벦��Billy-CDK�ĵ绰 184****9552 ���ƶ��� ���� 138****9077 ����������������ҪCDK~~~��Ҫ������Skype��������϶�ûװ�������ܲ��ܳɹ����㿩~~~\n");
					break;
				case 2:
					printf("���BillyCDK��QQ ����Ҫ��ǹ����������ĳ����ݰݰݰݣ�ͨ��������֤����֮�󷽿��öԷ�����CDK\n");
					break;
				case 3:
					printf("����Ϊ������Origin�ͷ������������Ժ󡣡�\n");
					printf("���ǺͿͷ������Ӣ������BillyCDK��ҪCD-K��ɶ��ϵ��Ѩ���\n");
					ShellExecute(0, "open", "C:\\Program Files\\Internet Explorer\\iexplore.exe", "http://help.ea.com/en/contact-us/new/?product=origin&platform=pc&category=codes", NULL, SW_SHOW);
					break;
				default:
					printf("�Բ���������Ҫ��ʽ�����ݲ�֧�֣�лл��\n");
			}
		}
		else
		{
			printf("\n���ڿ������Ƶ��Billy������Ҫ ");
			printf("%s", game);
			printf("��CDK���ò�����ò�����ò�����ò������ ");
			printf("%s", game);
			printf("��CDK���ò�����ò�����ò�����ò�����ò�����ò�����ò�����ò�����ò�����ò�����ò�����ò�����ò�����ò�����ò�����ò�����ò�����ò�����ò�����ò�����ò����\n\n");
			printf("��~~~������ϣ�\n");
		}
	}

	system("pause");
	printf("\n\n�������������ڷ������˵�������\n");

}
//-------------------------------------------------------2- zeng song K
void zengsongK(void)
{
	int i;
	char ch;
	int stat[2] = {1};
	char game[128] = {'\0'};
	int t;
	char cdk[50] = {'\0'};
	int num = 0;
	int Gpan = 0;

	printf("\n��ȷ��Ҫ����Billy CDK����ע��һ����������CDK������ʧȥ��öCDK��\n\n\n");

	printf("----1--�����ҵĿ��ܽ�\n");
	printf("----2--������ûǮ�ˣ�\n");
	printf("----3--�����ҿ�N�������޸���������ˣ�\n");
	printf("----4--�������ϴ��Ѿ����Billy�Կϵ»��ˣ�\n");
	printf("----5--�����ұ���������Ѿ������ˣ�\n");
	printf("----6--�ǵģ���˼���Ѿã��¶����ģ�Ҫ����Billy�ҵĶ���CDK��\n");
	printf("----7--�����ҵİ�׿С�ֻ�û���ˣ�\n");
	printf("----8--�����ҵ�ƻ��Խ��ʧ�����Һ����ģ�\n");
	printf("----9--�����ҵĵ����¶ȹ���³�������ڱ�����\n");
	printf("----0--�����Ҿ������������ں��濴�ң�\n");
	setbuf(stdin, NULL);
	printf(">>");
	scanf("%d", &i);

	if (i == 6)
	{
		printf("�õģ�����Billy�Ƿ�����ʹ�ã����߹ۿ�����ʹ�ã���������� Y/N \n\n");
		setbuf(stdin, NULL);
		printf(">>");
		scanf("%c", &ch);
		if (ch == 'N' || ch == 'n')
		{
			stat[0] = 0; // bu zai kan
			printf("�õģ�������ϣ��ͨ�����ַ�ʽ����Billy CDK��\n\n");
			printf("----1-�绰��ϵ\n");
			printf("----2-QQ����\n");
			printf("----3-��Steam��G����\n");
			setbuf(stdin, NULL);
			printf(">>");
			scanf("%d", &stat[1]);
		}

		printf("\n�õģ�����Ҫ����ʲô��Ϸ��CDK�������� \n\n");
		printf(">>");
		setbuf(stdin, NULL);
		gets(game);
			
		printf("�õģ�����ʹ��");

		if (stat[0] == 0)
		{
			switch (stat[1])
			{
				case 1:
					printf(" �绰��ϵ ");
					break;
				case 2:
					printf(" QQ���� ");
					break;
				case 3:
					printf(" ��Steam��G���� ");
					Gpan = 1;
					break;
				default:
					printf(" ĳ��δ֪ ");
			}
		}
		else
		{
			printf(" ��Ƶ���� ");
		}
		printf("�ķ�ʽ����Billy����Ҫ���� ");
		printf("%s ", game);
		printf("��CDK\n");

		system("pause");

		if (Gpan == 0)
		{
			printf("���ڻ��CDK�����Ժ󡣡�����\n");
		}
		else
		{
			printf("��������G�֣��ȴ��Է���������������\n");
		}
		
		while (num != 15)
		{
			srand((int)time(0) + num);
			t = rand() % 61 + 30 ;
			if ((48 <= t && t <= 57) || (65 <= t && t <= 90))
			{
				cdk[num] = (char)t;
				num++;
			}
		}

	
		if (stat[0] == 0)
		{
			printf("******************************************************\n");
			printf("******************************************************\n");
			printf("******************************************************\n");
			printf("******************************************************\n");
			printf("******************************************************\n");
			switch (stat[1])
			{
				case 1:
					printf("������Ϸ %s ��CDK �� %s\n", game, cdk);
					printf("�벦��Billy-CDK�ĵ绰 184****9552 ���ƶ��� ���� 138****9077 ������������������������CDK��~~~��Ҫ������Skype��������϶�ûװ������\n");
					break;
				case 2:
					printf("������Ϸ %s ��CDK �� %s\n", game, cdk);
					printf("����BillyCDK������QQ��������BillyCDK��QQ ����Ҫ��ǹ����������ĳ����ݰݰݰݣ�ͨ��������֤����֮�󷽿���Է�չʾ���CDK\n");
					break;
				case 3:
					printf("G�ֱ�ʾ����̫æ�ˣ����Լ������cdk������\n");
					break;
				default:
					printf("�Բ����������ͷ�ʽ�����ݲ�֧�֣�лл��\n");
			}
		}
		else
		{
			printf("\n���ڿ��������������Billy���ҡ�������֪���� ");
			printf("%s", game);
			printf("��CDK�������Ȼ������ô�Ĺ��ء����ǣ��ص��������Ϸ�ǳ��غ��档�������� ���Ǹ����K��   %s   \n�����Ҳ��֪��Ϊɶ���Ǻ������� ", cdk);
			printf("%s", game);
			printf("��CDK�������Ҿ��ã�CDK���ֶ����أ���Ȼ����һ�����������Ӣ����ĸ���֣����Ǳ���ĸ���ȷʵ�ܶ��~~~\n\n");
			printf("��~~~������ϣ�\n\n\n");
		}
	}

	system("pause");
	printf("\n\n�������������ڷ������˵�������\n");

}
//---------------------------------------------------------restart origin
long restor(void)
{
	HKEY hKey; 
	long retVal; 
	char SubKey[512]; 
	unsigned long type = REG_EXPAND_SZ;
	unsigned char buff[512];
	unsigned long len;
	int i;

	printf("\n��ȷ��Ҫ����Origin����ע�����һ����ʼ���޷�ֹͣ������\n");
	printf("\n---���棡����Origin���п�����Ҫ���µ�¼��---\n\n\n");



	printf("----1--�ǣ���̫������Origin�ˣ�����\n");
	printf("----2--�ǣ���̫������Origin�ˣ�����\n");
	printf("----3--�ǣ���̫������Origin�ˣ�����\n");
	printf("----4--�ǣ���̫������Origin�ˣ�����\n");
	printf("----5--�ǣ���̫������Origin�ˣ�����\n");
	printf("----6--�ǣ���̫������Origin�ˣ�����\n");
	printf("----7--�ǣ���̫������Origin�ˣ�����\n");
	printf("----8--�ǣ���̫������Origin�ˣ�����\n");
	printf("----9--�ǣ���̫������Origin�ˣ�����\n");
	printf("----0--��������Origin������˵���۹��ߣ�����\n");
	setbuf(stdin, NULL);
	printf(">>");
	scanf("%d", &i);

	if (i != 0)
	{
		printf("\n\n��������Origin�����Ժ󡣡���\n");
		hKey = HKEY_LOCAL_MACHINE;
		strcpy(SubKey, "SOFTWARE\\Wow6432Node\\Electronic Arts\\EADM"); 

		retVal = RegOpenKeyEx(HKEY_LOCAL_MACHINE, (LPCTSTR) SubKey, 0, KEY_ALL_ACCESS, &hKey);

		if(retVal == ERROR_SUCCESS)
		{
			RegQueryValueEx(hKey,"ClientPath", NULL, &type, buff, &len);

			system("taskkill /f /im Origin.exe /t");
			ShellExecuteA(NULL, "open", buff, NULL, NULL, SW_SHOWNORMAL );
			RegCloseKey(hKey); 
			return 11;
		}

		MessageBox(NULL,TEXT("������˼ѽ~~~���Ҳ������Origin����ȫ��������Խ��д˲���������"),TEXT("���棡"),MB_OK|MB_ICONWARNING);
		RegCloseKey(hKey); 
		return 10;
	}

	return 12;

}

//---------------------------------------------------------restart steam
long restst(void)
{
	HKEY hKey; 
	long retVal; 
	char SubKey[512]; 
	unsigned long type = REG_EXPAND_SZ;
	unsigned char buff[512];
	unsigned long len;
	char stmname[20] = "\\Steam.exe";
	int i;

	printf("\n��ȷ��Ҫ����Steam����ע�����һ����ʼ���޷�ֹͣ������\n\n\n");

	printf("----1--�ǣ���̫������Steam�ˣ�����\n");
	printf("----2--�ǣ���̫������Steam�ˣ�����\n");
	printf("----3--�ǣ���̫������Steam�ˣ�����\n");
	printf("----4--�ǣ���̫������Steam�ˣ�����\n");
	printf("----5--��������Steam������˵���۹��ߣ�����\n");
	printf("----6--�ǣ���̫������Steam�ˣ�����\n");
	printf("----7--�ǣ���̫������Steam�ˣ�����\n");
	printf("----8--�ǣ���̫������Steam�ˣ�����\n");
	printf("----9--�ǣ���̫������Steam�ˣ�����\n");
	printf("----0--�ǣ���̫������Steam�ˣ�����\n");
	setbuf(stdin, NULL);
	printf(">>");
	scanf("%d", &i);

	if (i != 5)
	{
		printf("\n\n��������Steam�����Ժ󡣡���\n");
		hKey = HKEY_LOCAL_MACHINE;
		strcpy(SubKey,"SOFTWARE\\Wow6432Node\\Valve\\Steam"); 

		retVal = RegOpenKeyEx(HKEY_LOCAL_MACHINE, (LPCTSTR) SubKey, 0, KEY_ALL_ACCESS, &hKey);

		if(retVal == ERROR_SUCCESS)
		{
			RegQueryValueEx(hKey,"InstallPath", NULL, &type, buff, &len);

			strcat(buff, stmname);
			system("taskkill /f /im Steam.exe /t");
			ShellExecuteA(NULL, "open", buff, NULL, NULL, SW_SHOWNORMAL );
			RegCloseKey(hKey); 
			return 11;
		}

		MessageBox(NULL,TEXT("������˼ѽ~~~���Ҳ������Steam����ȫ��������Խ��д˲���������"),TEXT("���棡"),MB_OK|MB_ICONWARNING);
		RegCloseKey(hKey); 
		return 10;
	}

	return 12;

}

//---------------------------------------------------------restart Uplay
long restup(void)
{
	HKEY hKey; 
	long retVal; 
	char SubKey[512]; 
	unsigned long type = REG_EXPAND_SZ;
	unsigned char buff[512];
	unsigned long len;
	char proname[20] = "\\BrunUplay.bat";
	char pronameyinhao[20] = "\"\nBrunUplay.bat\"";
	int i;
	char dirn[512];

	FILE *fp;
	int j = 0;
//	char Upname1[20] = "cd \""
	char Upname2[20] = "\nUplay.exe\nexit";
	int stat;

	char cd[512] = "cd /d \"";
	char yinhao[5] = "\"";
	char cx[512] = "\"";

	printf("\n��ȷ��Ҫ����Uplay����ע�����һ����ʼ���޷�ֹͣ������\n\n\n");

	printf("----1--�ǣ���˹����̫�����ˣ�����\n");
	printf("----2--�ǣ���̫������Uplay�ˣ�����\n");
	printf("----3--��������Uplay������˵���۹��ߣ�����\n");
	printf("----4--�ǣ�Play U,Play me,Play U always~~������\n");
	printf("----5--�ǣ���������̫�̼��ˣ�����\n");
	printf("----6--�ǣ���������~~~������\n");
	printf("----7--�ǣ��ҵĳ������ˣ�����\n");
	printf("----8--�ǣ�������̫���ˣ�����\n");
	printf("----9--�ǣ��һ�������һ�θǷ��ӣ�����\n");
	printf("----0--�ǣ���Ϊ��̫ϲ�������ˣ�����\n");
	setbuf(stdin, NULL);
	printf(">>");
	scanf("%d", &i);

	if (i != 3)
	{
		printf("\n\n��������Uplay�����Ժ󡣡���\n");
		hKey = HKEY_LOCAL_MACHINE;
		strcpy(SubKey, "SOFTWARE\\Wow6432Node\\Ubisoft\\Launcher"); 

		retVal = RegOpenKeyEx(HKEY_LOCAL_MACHINE, (LPCTSTR) SubKey, 0, KEY_ALL_ACCESS, &hKey);

		if(retVal == ERROR_SUCCESS)
		{
			RegQueryValueEx(hKey,"InstallDir", NULL, &type, buff, &len);
			strcpy(dirn, buff);
			strcat(dirn, proname);

			fp = fopen(dirn, "w");

			while (fp == NULL)
			{
				fp = fopen(dirn, "w");
				j++;
				if (j == 4)
				{
					printf("�޷����в������������: -1 \n");  //�޷������ļ�
					return -1;
				}
			}

			strcat(cd, buff);
			strcat(cd, yinhao);
			strcat(cd, Upname2);

			stat = fputs(cd, fp);
			if (stat == EOF)
			{
				printf("�޷����в������������: -2 \n");  //�޷�д���ļ�
				fclose(fp);
				return -2;
			}

			system("taskkill /f /im Uplay.exe /t");

			strcat(cx, buff);
			strcat(cx, "BrunUplay.bat");
			strcat(cx, yinhao);

			system(cx);

			strcat(buff, "Uplay.exe");
			ShellExecuteA(NULL, "open", buff, NULL, NULL, SW_SHOWNORMAL );

			RegCloseKey(hKey); 
			fclose(fp);
			return 11;
		}

		MessageBox(NULL,TEXT("������˼ѽ~~~���Ҳ������Uplay����ȫ��������Խ��д˲���������"),TEXT("���棡"),MB_OK|MB_ICONWARNING);
		RegCloseKey(hKey); 
		return 10;
	}

	return 12;

}