#include <stdio.h>
#include <stdlib.h>

struct Emp
{
    char ename[20];
    int age, sal;
} e1[100], t;

void bubble(struct Emp e1[], int n)
{
    int i, pass;
    for (pass = 1; pass < n; pass++)
    {
        for (i = 0; i < n - pass; i++)
        {
            if (e1[i].age > e1[i + 1].age)
            {
                t = e1[i];
                e1[i] = e1[i + 1];
                e1[i + 1] = t;
            }
        }
    }

    printf("\nBubble Sort\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t%d\t%d\n", e1[i].ename, e1[i].age, e1[i].sal);
    }
}

void selection(struct Emp e1[], int n)
{
    int i, j, min, index;
    for (i = 0; i < n; i++)
    {
        min = e1[i].age;
        index = i;
        for (j = i + 1; j < n; j++)
        {
            if (e1[j].age < min)
            {
                min = e1[j].age;
                index = j;
            }
        }
        t = e1[i];
        e1[i] = e1[index];
        e1[index] = t;
    }

    printf("\nSelection Sort\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t%d\t%d\n", e1[i].ename, e1[i].age, e1[i].sal);
    }
}

int main()
{
    FILE *f1;
    int i = 0, n;
    f1 = fopen("empp.txt", "r");
    if (f1 == NULL)
    {
        printf("File not found");
        exit(0);
    }
    while (fscanf(f1, "%s%d%d", e1[i].ename, &e1[i].age, &e1[i].sal) != EOF)
    {
        i++;
    }
    n = i;

    if (n == 0)
    {
        printf("File is empty.\n");
        fclose(f1);
        return 0;
    }

    bubble(e1, n);
    selection(e1, n);
    fclose(f1);

    return 0;
}

