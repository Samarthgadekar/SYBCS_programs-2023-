#include <stdio.h>
#include <stdlib.h>
#define max 5
        struct stack
{
    int data[max];
    int top;
} s;
void init()
{
    s.top = -1;
}
int isempty()
{
    if (s.top == -1)
        return 1;
    else
        return 0;
}
int isfull()
{
    if (s.top == max - 1)
        return 1;
    else
        return 0;
}
void push(int num)
{
    if (isfull())
    {
        printf("overflow");
    }
    else
    {
        s.top++;
        s.data[s.top] = num;
        printf("push succ...");
    }
}
void pop()
{
    int val;
    if (isempty())
        printf("underflow");
    else
    {
        val = s.data[s.top];
        s.top--;
        printf("pop succ..");
    }
}
void disp()
{
    int i;
    for (i = s.top; i >= 0; i--)
    {
        printf("%d\n", s.data[i]);
    }
}

