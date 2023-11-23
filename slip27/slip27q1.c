#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coeff, exp;
    struct node *next;
};

struct node *create(struct node *f)
{
    int i, n;
    struct node *s;
    printf("\nEnter no of terms ");
    scanf("%d", &n);
    printf("Enter term in descending order of power ");
    f = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter coeff");
    scanf("%d", &f->coeff);
    printf("\nEnter power ");
    scanf("%d", &f->exp);
    s = f;
    for (i = 1; i < n; i++)
    {
        s->next = (struct node *)malloc(sizeof(struct node));
        s = s->next;
        printf("\nEnter coeff");
        scanf("%d", &s->coeff);
        printf("\nEnter power ");
        scanf("%d", &s->exp);
    }
    s->next = NULL;
    return f;
}

void display(struct node *f)
{
    struct node *s;
    for (s = f; s != NULL; s = s->next)
    {
        printf("%dx^%d ->", s->coeff, s->exp);
    }
}

struct node *Add(struct node *p1, struct node *p2)
{
    struct node *t1, *t2, *t3 = NULL, *nw;
    struct node *p3;
    t1 = p1;
    t2 = p2;
    printf("\n%d %d", t1->exp, t2->exp);
    while (t1 != NULL && t2 != NULL)
    {
        nw = (struct node *)malloc(sizeof(struct node));
        nw->next = NULL;
        if (t1->exp > t2->exp)
        {
            nw->exp = t1->exp;
            nw->coeff = t1->coeff;
            t1 = t1->next;
        }
        else if (t2->exp > t1->exp)
        {
            nw->exp = t2->exp;
            nw->coeff = t2->coeff;
            t2 = t2->next;
        }
        else
        {
            nw->exp = t1->exp;
            nw->coeff = t1->coeff + t2->coeff;
            t1 = t1->next;
            t2 = t2->next;
        }
        if (t3 == NULL)
        {
            p3 = nw;
            t3 = nw;
        }
        else
        {
            t3->next = nw;
            t3 = t3->next;
        }
    }
    while (t1 != NULL)
    {
        nw = (struct node *)malloc(sizeof(struct node));
        nw->next = NULL;
        nw->exp = t1->exp;
        nw->coeff = t1->coeff;
        t1 = t1->next;
        t3->next = nw;
        t3 = t3->next;
    }
    while (t2 != NULL)
    {
        nw = (struct node *)malloc(sizeof(struct node));
        nw->next = NULL;
        nw->exp = t2->exp;
        nw->coeff = t2->coeff;
        t2 = t2->next;
        t3->next = nw;
        t3 = t3->next;
    }
    return p3;
}

int main(void)
{
    struct node *p1 = NULL, *p2 = NULL, *p3 = NULL;
    p1 = create(p1);
    p2 = create(p2);

    printf("\n1st Polynomial is: ");
    display(p1);
    printf("\n2nd Polynomial is: ");
    display(p2);
    p3 = Add(p1, p2);
    printf("\nAddition of 2 Polynomials is ");
    display(p3);

    return 0;
}
