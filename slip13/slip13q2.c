 #include<stdio.h> 
 #include<stdlib.h> 
  
 typedef struct node 
 { 
         int data; 
         struct node *next; 
 }NODE; 
  
 NODE *create(NODE *list) 
 { 
         NODE *newnode,*temp; 
         int i,n; 
         printf("enter limit"); 
         scanf("%d",&n); 
         for(i=1;i<n;i++) 
         { 
                 newnode=(NODE *)malloc(sizeof(NODE)); 
                 printf("enter value"); 
                 scanf("%d",&newnode->data); 
                 newnode->next=NULL; 
  
                 if(list==NULL) 
                 { 
                         list=temp=newnode; 
                 } 
                 else 
                 { 
                         temp->next=newnode; 
                         temp=newnode; 
  
                 } 
  
         } 
         return list; 
 } 
  
  
  
 void disp(NODE *list) 
 { 
         NODE *temp; 
         for(temp=list;temp!=NULL;temp=temp->next) 
         { 
                 printf("%d",temp->data); 
         } 
 } 
  
  
 NODE *bubble(NODE *list) 
 { 
         NODE *temp,*temp1; 
         int t; 
  
         for(temp=list;temp->next!=NULL;temp=temp->next) 
         { 
                 for(temp1=list;temp1->next!=NULL;temp1=temp->next) 
                 { 
                         if(temp1->data>temp1->next->data) 
                         { 
                                 t=temp1->data; 
                                 temp1->data=temp1->next->data; 
                                 temp1->next->data=t; 
  
                         } 
                 } 
         } 
         return list; 
  
 } 
  
  
 int main() 
 { 
         int ch,num; 
         NODE *list=NULL; 
         list=create(list); 
         disp(list); 
         printf("\n sorted list"); 
         bubble(list); 
         disp(list); 
 }
