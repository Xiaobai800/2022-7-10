#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//void menu()
//{
//	printf("*********************************\n");
//	printf("***   1.play        0.exit    ***\n");
//	printf("*********************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	//printf("%d\n", ret); 
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf_s("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//			
//		}
//		else
//		{
//			printf("恭喜你，猜对了！！！\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input=0;
//	srand(unsigned)time(NULL);
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)：
//		{
//			case 1：
//				game();
//				break;
//			case 0：
//				printf("退出游戏\n");
//				break;
//			default：
//			    printf("选择错误\n");
//				break;
//		}
//	} while (input);
//
//	return 0;
//}
//#include<string.h>
//int main()
//{
//
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("电脑将会在1分钟之内关机，请输入取消关机\n请输>:");
//	scanf_s("%s", input);
//	if (strcmp(input, "取消关机") == 0)
//	{
//		system("shutdoen - a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
#include<string.h>
int main()
{

	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("电脑将会在1分钟之内关机，请输入取消关机\n请输>:");
		scanf_s("%s", input);
		if (strcmp(input, "取消关机") == 0)
		{
			system("shutdoen - a");
			break;
		}
	}
	return 0;
}