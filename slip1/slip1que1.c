// main function

#include<stdio.h> 
 #include<stdlib.h> 
 #include "dublink.h" 
  
 int main() 
 { 
     int ch; 
     struct node *list=NULL; 
     do 
     { 
         printf("\n 1 : CREATE  \n 2 : DISPLAY \n Enter Choice :: "); 
         scanf("%d",&ch); 
  
         switch(ch) 
         { 
             case 1 : list=create(list); 
                     break; 
             case 2 : disp(list); 
                     break; 
             default : printf("\nInvalid Choice."); 
         } 
  
     }while(ch<3); 
 }
