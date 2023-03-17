#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
void menu()
{
	printf("      猜数字游戏     \n");
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
		printf("请猜数字>");
		scanf("%d", &a);
		if (a > aim)
		{
			printf("猜大了\n");
		}
		else if (a < aim)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input;
	//menu();
	//printf("请输入>");
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
	//		printf("输入错误\n");
	//		printf("请再次输入:");
	//		scanf("%d", &input);
	//	}
	//}
	do 
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束");
			break;
		default:
			printf("输入错误");
			break;
		}
	} while (input);
	return 0;
}