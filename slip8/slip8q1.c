#include"singly.h" 
 int main( ) 
 { 
    int ch; 
    Node *list=NULL; 
    do 
    { 
          printf("\n1-create\n2-display"); 
          printf("\nEnter choice:"); 
          scanf("%d",&ch); 
          switch(ch) 
          { 
               case 1:list=create(list); 
                           break; 
               case 2:disp(list); 
                             break; 
          } 
    }while(ch<3); 
 }
