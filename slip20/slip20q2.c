/*Q2. There are lists where new elements are always appended at the end of the
list. The list can be implemented as a circular list with the external pointer
pointing to the last element of the list. Implement singly linked circular list of
integers with append and display operations. The operation append(L, n),
appends to the end of the list, n integers either accepted from user or randomly
generated.*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next, *prev;
};

struct node *f;

void create()
{
    struct node *s;
    int i, n;
    printf("Enter how many nodes: ");
    scanf("%d", &n);
    f = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &f->data);
    s = f;
    for (i = 1; i < n; i++)
    {
        s->next = (struct node *)malloc(sizeof(struct node));
        s->next->prev = s;
        s = s->next;
        printf("Enter data: ");
        scanf("%d", &s->data);
    }
    s->next = f;
    f->prev = s;
}

void display()
{
    struct node *s;
    printf("\nCircular linked list is:: ");
    s = f;
    do
    {
        printf("%d->", s->data);
        s = s->next;
    } while (s != f);
    printf("(head)\n");
}

void append()
{
    struct node *nw, *s;
    int n, i;
    printf("\nEnter how many new nodes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        nw = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter new node data: ");
        scanf("%d", &nw->data);
        s = f->prev; 
        s->next = nw;
        nw->prev = s;
        nw->next = f;
        f->prev = nw;
    }
}

int main()
{
    create();
    display();
    append();
    display();

    return 0;
}

