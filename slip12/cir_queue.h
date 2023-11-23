#include <stdio.h>
#include <stdlib.h>
#define memory (struct node*)malloc(sizeof(struct node))
struct node {
    int data;
    struct node *next;
} *front, *rear, *newnode, *temp;

void init() {
    front = rear = NULL;
}

int isempty() {
    if (front == NULL)
        return 1;
    else
        return 0;
}

void insertq(int num) {
    newnode = memory;
    newnode->data = num;
    newnode->next = NULL;
    if (isempty())
        front = rear = newnode;
    else {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
        printf("\nInserted successfully:");
    }
}

void delq() {
    int val;
    if (isempty()) {
        printf("Queue is underflow.");
    } else {
        temp = front;
        val = front->data;
        if (front == rear) {
            free(front);
            front = rear = NULL;
        } else {
            front = front->next;
            rear->next = front;
            free(temp);
        }
        printf("\nDeleted value=%d", val);
    }
}

void disp() {
    temp = front;
    do {
        printf("%d\t", temp->data);
        temp = temp->next;
    } while (temp != front);
}
