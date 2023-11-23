#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include"cir_queue.h"
int main()
	{
	int num,ch;
	init();
	do
	{
	printf("\n 1-insert \n 2-del\n 3-disp:");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:printf("enter number:");
		scanf("%d",&num);
		insertq(num);
		break;
	case 2:delq();
		break;
	case 3:disp();
		break;
	}
}while(ch<4);
}
