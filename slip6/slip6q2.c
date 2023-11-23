#include<stdio.h>
#include"dyqueue.h"
main()
{
int ch,no;
init();
do
{
printf("\n1.enqueue \n2.dequeue \n3.peek \n0.exit");
printf("enter choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter data:");
scanf("%d",&no);
enqueue(no);
break;
case 2:if(isempty()==1)
printf("\n queue is empty");
else
printf("dequeue element=%d",dequeue());
break;
case 3:printf("top element=\t%d",peek());
break;
case 0:break;
}
}while(ch!=0);
}
