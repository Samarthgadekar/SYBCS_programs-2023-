/*Write a program that merges two ordered linked lists into third new list.
When two lists are merged the data in the resulting list are also ordered. The
two original lists should be left unchanged. That is merged list should be new
one. Use linked implementation.*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *create();
void display(struct node *);
struct node *merge(struct node *, struct node *);

struct node *create() {
    int n, i;
    struct node *s, *f;
    printf("Enter how many nodes: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input for the number of nodes.\n");
        exit(1);
    }

    f = (struct node *)malloc(sizeof(struct node));
    if (f == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    printf("Enter data: ");
    scanf("%d", &f->data);
    s = f;

    for (i = 1; i < n; i++) {
        s->next = (struct node *)malloc(sizeof(struct node));
        if (s->next == NULL) {
            printf("Memory allocation failed.\n");
            exit(1);
        }
        s = s->next;
        printf("Enter data: ");
        scanf("%d", &s->data);
    }

    s->next = NULL;
    return f;
}

void display(struct node *f) {
    struct node *s;
    for (s = f; s != NULL; s = s->next) {
        printf("\t%d ", s->data);
    }
}

struct node *merge(struct node *f1, struct node *f2) {
    struct node *s;
    if (f1 == NULL) {
        return f2;
    } else if (f2 == NULL) {
        return f1;
    }

    for (s = f1; s->next != NULL; s = s->next) {
    }

    s->next = f2;
    return f1;
}

int main() {
    struct node *f1, *f2, *f3;
    f1 = create();
    f2 = create();

    printf("\n1st linked list: ");
    display(f1);
    printf("\n2nd linked list: ");
    display(f2);

    f3 = merge(f1, f2);
    printf("\nAfter merging LL is: ");
    display(f3);

    return 0;
}
