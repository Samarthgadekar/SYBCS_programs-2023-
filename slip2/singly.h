//Q1. Implement a list library (singlylist.h) for a singly linked list of integerwith the operations create, display. Write a menu driven program to call these operations 
 #include<stdio.h> 
 #include<stdlib.h> 
 #define NODEALLOC (struct node*)malloc(sizeof(struct node)) 
 typedef struct node 
 { 
     int data; 
     struct node *next; 
 }Node; 
 Node *create(Node *list) 
 { 
    int i,n; 
    Node *newnode,*temp; 
    printf("Enter limit:"); 
    scanf("%d",&n); 
    for(i=0;i<n;i++) 
    { 
        newnode=NODEALLOC; 
        newnode->next=NULL; 
        printf("Enter number:"); 
        scanf("%d",&newnode->data); 
        if(list==NULL) 
        { 
            list=temp=newnode; 
        } 
        else 
        { 
           temp->next=newnode; 
           temp=newnode; 
        } 
    }return list; 
 } 
 void disp(Node *list) 
 { 
     Node *temp; 
     for(temp=list;temp!=NULL;temp=temp->next) 
     { 
           printf("%d\t",temp->data); 
     } 
 }
