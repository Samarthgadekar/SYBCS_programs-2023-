#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *r;
void init()
{
r=NULL;
}
int isempty()
{
if(r==NULL)
return 1;
else
return 0;
}
void Add(int n)
{
struct node *nw;
nw=(struct node *)malloc(sizeof(struct node));
nw->data=n;
if(r==NULL)
{
r=nw;
r->next=r;
}
else
{
nw->next=r->next;
r->next=nw;
r=r->next;
}
}
int Delete()
{
int no;
struct node *temp;
temp=r->next;
if(r==temp->next)
{ r=NULL;
}
else
{
r->next=temp->next;
}
no=temp->data;
free(temp);
return (no);
}
int peek()
{
return r->next->data;
}
