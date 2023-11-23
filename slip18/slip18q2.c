
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

    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            f = (struct node *)malloc(sizeof(struct node));
            s = f;
        }
        else
        {
            s->next = (struct node *)malloc(sizeof(struct node));
            s = s->next;
        }

        printf("\n Enter coeff ");
        scanf("%d", &s->coeff);
        printf("\n Enter power ");
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
        printf("%dx^%d -> ", s->coeff, s->exp);
    }
}

struct node *Mult(struct node *p1, struct node *p2)
{
    struct node *t1, *t2, *t3 = NULL, *nw;
    struct node *p3;

    for (t1 = p1; t1 != NULL; t1 = t1->next)
    {
        for (t2 = p2; t2 != NULL; t2 = t2->next)
        {
            nw = (struct node *)malloc(sizeof(struct node));
            nw->next = NULL;
            nw->coeff = t1->coeff * t2->coeff;
            nw->exp = t1->exp + t2->exp;

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
    }

    return p3;
}

int main()
{
    struct node *p1 = NULL, *p2 = NULL, *p3 = NULL;
    p1 = create(p1);
    p2 = create(p2);

    printf("\n1st Polynomial is: ");
    display(p1);
    printf("\n2nd Polynomial is: ");
    display(p2);

    p3 = Mult(p1, p2);
    printf("\nMultiplication of 2 Polynomials is ");
    display(p3);

    return 0;
}

