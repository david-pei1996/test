#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("************************\n");
	printf("*******��������Ϸ(0~99)********\n");
	printf("*******���� 1:begin 0:out*******\n");
	printf("************************\n");
}
void game()
{
	int input = 0;
	int i = 0;
	int ran = rand()%100;
	printf("���������²�����֣�\n");
	scanf("%d",&input);
	for(i=0;i<5;i++)
	{
		if(input>ran)
			{
				printf("�²����ֹ�������������:");
			    scanf("%d",&input);
		    }
		else if(input<ran)
			{
				printf("�²����ֹ�С������������:");
			    scanf("%d",&input);
		    }
		else
			{
				printf("You win!!");
				break;
		    }
	}
	if(i==5)
		printf("You fail!!");
}
int main()
{
	srand((unsigned int)time(NULL));
	int choice = 1;
	do
	{
		menu();
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");	
			break;
		default:
			printf("�������\n");
			break;
		}
	}while(choice);
	return 0;
}