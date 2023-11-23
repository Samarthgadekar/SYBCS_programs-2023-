#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *f,*r;
void init()
{
f=NULL;
r=NULL;
}
int isempty()
{
if(f==NULL)
return 1;
else
return 0;
}
void enqueue()
{
struct node*nw;
int n;
nw=(struct node*)malloc(sizeof(struct node));
nw->data=n;
nw->next=NULL;
if(f==NULL)
{
f=nw;
r=nw;
}
else
{
r->next=nw;
r=r->next;
}
}
int dequeue()
{
int n;
struct node *temp;
if(isempty()==1)
printf("queue is empty");
else
{
temp=f;
f=f->next;
n=temp->data;
free(temp);
}
}
int peek() {
    if (isempty() == 1) {
        printf("queue is empty\n");
        return -1; // You should return a special value or handle the error in some way
    }
    return f->data;
}
