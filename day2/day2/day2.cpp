#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
void menu()
{
	printf("      ��������Ϸ     \n");
	printf("*********************\n");
	printf("***1.start*****0.exit\n");
	printf("*********************\n");
}
void game()
{
	int aim = rand() % 100 + 1;
	int a;
	while (1)
	{
		printf("�������>");
		scanf("%d", &a);
		if (a > aim)
		{
			printf("�´���\n");
		}
		else if (a < aim)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input;
	//menu();
	//printf("������>");
	//scanf("%d", &input);
	//while (input)
	//{
	//	if (input == 1)
	//	{
	//		game();
	//		menu();
	//		scanf("%d", &input);
	//	}
	//	else if (input != 1)
	//	{
	//		printf("�������\n");
	//		printf("���ٴ�����:");
	//		scanf("%d", &input);
	//	}
	//}
	do 
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����");
			break;
		default:
			printf("�������");
			break;
		}
	} while (input);
	return 0;
}