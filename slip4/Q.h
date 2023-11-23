#include <stdio.h>
int front = -1, rear = -1;
int q[50];
void enqueue(int data, int l) // Enqueue for inserting data
{
if (rear == l - 1)
{
printf("Queue is full");
}
else if ((front == -1) && (rear == -1))
{
front = rear = 0;
q[rear] = data;
}
else
{
rear++;
q[rear] = data;
}
}
void display()
{
int i;
for (i = front; i <= rear; i++)
{
printf("\n%d", q[i]);
}
}
void reverse() // reverse function for reversing the data
{
int i, j, t;
for (i = front, j = rear; i < j; i++, j--)
{
t = q[i];
q[i] = q[j];
q[j]=t;
}
}
