/*Q1. Write a program that reverses a string of characters. The function should
use a stack library(cststack.h). Use a static implementation of the stack.*/
#include<stdio.h>
char s[20];
int top;
void init()
{
top==-1;
}
int isempty()
{
if(top==-1)
return 1;
else
return 0;
}
int isfull()
{
if(top==19)
return 1;
else
return 0;
}
void push(char ch)
{
if(isfull()==1)
printf("Stack is full");
else
{
top++;
s[top]=ch;
}
}
char pop()
{
char ch;
if(isempty()==1)
printf("Stack is empty");
else
{
ch=s[top];
top--;
return ch;
}
}
