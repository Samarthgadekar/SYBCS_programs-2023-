
#include<stdio.h>
#include "Q.h"
void main()
{
int n, i = 0, t;
printf("Enter the size of Queue");
scanf("%d", &n);
printf("\nEnter the data for Queue");
while (i < n)
{
scanf("%d", &t);
enqueue(t, n);
i++;
}
printf("\nQueue which you have entered:-");
display();
reverse();
printf("\nQueue after reversing:-");
display();
}
