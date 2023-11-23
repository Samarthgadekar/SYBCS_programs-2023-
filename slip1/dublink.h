/*Implement a list library (doublylist.h) for a doubly linked list of integers with
the create, display operations. Write a menu driven program to call these operations.*/
// header file
#include<stdio.h>  
#include<stdlib.h>  
  typedef struct node  
  {  
    int data;  
   struct node *next,*prev;  
  }node;  
  
   struct node *create(struct node *list)  
  {  
   int i,n;  
   struct node *newnode,*temp;  
   printf("enter limit");  
   scanf("%d",&n);  
   for(i=0;i<n;i++)  
  {  
   newnode=(struct node*)malloc(sizeof(struct node));  
   printf("enter value");  
   scanf("%d",&newnode->data);  
    newnode->next=NULL;  
   if(list==NULL)  
  {  
    list=newnode;  
    temp=newnode;  
  }  
  else  
  {  
   temp->next=newnode;  
   newnode->prev=temp;  
   temp=newnode;  
  }  
  }  
  return list;  
  }  
   void disp(struct node *list)  
  {  
   struct node *temp;  
   for(temp=list;temp!=NULL;temp=temp->next)  
  {  
   printf("%d\t",temp->data);  
  }  
  }  
  
  struct node* insertbeg(struct node *list,int num)  
  {  
   struct node *newnode;  
   newnode=(struct node*)malloc(sizeof(struct node));  
  newnode->data=num;  
  newnode->next=list;  
  list->prev=newnode;  
   list=newnode;  
   return list;  
  }  
  /* 
  struct node* insertbeg(struct node *list, int num)  
 {  
     struct node *newnode;  
     newnode = (struct node*)malloc(sizeof(struct node));  
     newnode->data = num;  
     newnode->next = list;  // Set the next pointer of the new node to the current list 
     newnode->prev = NULL;  // Since this is the new head, there is no previous node 
  
     if (list != NULL)  
     { 
         list->prev = newnode;  // Update the previous pointer of the old head node 
     } 
  
     list = newnode;  // Update the list to point to the new head node 
     return list;  
 }*/ 
  struct node* insertend(struct node* list,int num)  
  {  
    struct node *newnode,*temp;  
    newnode=(struct node*)malloc(sizeof(struct node));  
    newnode->data=num;  
    newnode->next=NULL;  
    for(temp=list;temp->next!=NULL;temp=temp->next);  
    temp->next=newnode;  
    newnode->prev=temp;  
    return list;  
  }  
  struct node* insertmid(struct node *list,int pos,int num)  
  {  
    struct node *newnode,*temp;  
    int i;  
   newnode=(struct node*)malloc(sizeof(struct node));  
   newnode->data=num;  
   for(i=1,temp=list;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);  
   newnode->next=temp->next;  
   temp->next->prev=newnode;  
   temp->next=newnode;  
   newnode->prev=temp;  
   return list;  
  }  
  struct node* delbeg(struct node *list)  
  {  
    struct node *temp;  
   temp=list;  
   list=list->next;  
   free(temp);  
   return list;  
  }  
  struct node* delend(struct node *list)  
  {  
    struct node *temp,*temp1;  
    for(temp=list;temp->next->next!=NULL;temp=temp->next);  
    temp1=temp->next;  
   temp->next=NULL;  
   free(temp1);  
   return list;  
  }  
  struct node* delmid(struct node *list,int pos)  
  {  
    struct node *temp,*temp1;  
     int i;  
   for(i=1,temp=list;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);  
   temp1=temp->next;  
   temp->next=temp1->next;  
   temp1->next->prev=temp;  
   free(temp1);  
   return list;  
  }  
  
  struct node *insert(struct node *list,int num,int pos)  
  {  
          struct node *temp,*newnode;  
           int i;  
           newnode=(struct node *)malloc(sizeof(struct node));  
           newnode->data=num;  
           if(pos==1)  
           {  
                   newnode->next=list;  
                   list->prev=newnode;  
                   list=newnode;  
           }  
           else  
           {  
                   for(i=1,temp=list;i<pos-1&&temp!=NULL;temp=temp->next,i++);  
                   newnode->next=temp->next;  
                   temp->next=newnode;  
                   newnode->prev=temp;  
  
           }  
           return list;  
  
  }  
  
  struct node *del(struct node *list,int pos)  
  {  
          int i;  
          struct node *temp,*temp1; 
          if(list == NULL)  
              return list; 
          if(pos==1)  
          {  
                  temp=list;  
                  list=list->next;  
                  free(temp);  
  
  
          }  
          else  
          {  
                  for(i=1,temp=list;i<(pos-1)&&temp->next!=NULL;temp=temp->next,i++);  
                  temp1=temp->next;  
                  temp->next=temp1->next;  
                  temp1->next->prev=temp;  
                  free(temp1);  
  
          }  
          return list;  
  }
