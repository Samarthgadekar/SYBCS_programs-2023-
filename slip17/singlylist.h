#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *f;

void create()
{
    struct node *s;
    int n, i;
    printf("Enter how many nodes: ");
    scanf("%d", &n);
    f = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &f->data);
    s = f;
    for (i = 1; i < n; i++)
    {
        s->next = (struct node *)malloc(sizeof(struct node));
        s = s->next;
        printf("Enter data: ");
        scanf("%d", &s->data);
    }
    s->next = NULL;
}

void display()
{
    struct node *s;
    for (s = f; s != NULL; s = s->next)
    {
        printf("%d ->", s->data);
    }
    printf("NULL\n");
}

void reverse()
{
    struct node *prev, *current, *nextNode;
    prev = NULL;
    current = f;

    while (current != NULL)
    {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    f = prev; 
}
