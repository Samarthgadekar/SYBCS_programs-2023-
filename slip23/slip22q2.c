#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct city
{
    char name[20];
    int code;
} ct[10];

int readFile(struct city a[])
{
    int i = 0;
    FILE *fp;

    if ((fp = fopen("cities.txt", "r")) != NULL)
    {
        while (fscanf(fp, "%s%d", a[i].name, &a[i].code) == 2)
        {
            i++;
        }
        fclose(fp);
    }
    return i;
}

int binarysearch(struct city a[10], int lb, int ub, char sr[20])
{
    int mid = 0;
    while (lb <= ub)
    {
        mid = (lb + ub) / 2;
        int cmp = strcmp(a[mid].name, sr);
        if (cmp == 0)
            return mid;
        else if (cmp > 0)
            ub = mid - 1;
        else
            lb = mid + 1;
    }
    return -1;
}

int main()
{
    int n, p;
    char sr[20];
    n = readFile(ct);

    if (n == 0)
    {
        printf("File not found or empty");
    }
    else
    {
        printf("Enter city name to search: ");
        scanf("%s", sr);
        p = binarysearch(ct, 0, n - 1, sr);

        if (p >= 0)
            printf("\nCity is found, and code = %d", ct[p].code);
        else
            printf("\nCity not found.");
    }

    return 0;
}

