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
//		printf("�������:>");
//		scanf_s("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//			
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�����\n");
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
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)��
//		{
//			case 1��
//				game();
//				break;
//			case 0��
//				printf("�˳���Ϸ\n");
//				break;
//			default��
//			    printf("ѡ�����\n");
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
//	printf("���Խ�����1����֮�ڹػ���������ȡ���ػ�\n����>:");
//	scanf_s("%s", input);
//	if (strcmp(input, "ȡ���ػ�") == 0)
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
		printf("���Խ�����1����֮�ڹػ���������ȡ���ػ�\n����>:");
		scanf_s("%s", input);
		if (strcmp(input, "ȡ���ػ�") == 0)
		{
			system("shutdoen - a");
			break;
		}
	}
	return 0;
}