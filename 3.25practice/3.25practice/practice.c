#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"GAME.h"

void menu()
{
	printf("************************\n");
	printf("****1. play 0. quit*****\n");
	printf("************************\n");
}



void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	char(*p)[ROWS][COLS] = &show;
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS,COLS, '*');
	/*DisplayBoard(mine, ROW, COL);*/
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	FindMine(mine,show, ROW, COL);
}




int main()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));
		printf("扫雷游戏");
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		default:
		{
			printf("输入不合法");
			break;
		}
		}
	} while (input);
	return 0;
}
































//打印100-200的质数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", j);
//		}
//	}
//}









//打印1000-2000年的闰年
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("%d\n", count);
//}








//void Is_Leapyear(year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("是闰年");
//	}
//	else
//	{
//		printf("不是闰年");
//	}
//}
//
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	Is_Leapyear(year);
//}





//void Is_Prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("不是质数");
//			break;
//		}
//	}
//	if (n == i)
//	{
//		printf("是质数");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Is_Prime(n);
//	return 0;
//}



