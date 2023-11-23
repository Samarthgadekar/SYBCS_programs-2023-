#include<stdio.h>
int main() 
{
    int a[50], i, j, index, t, min, n;

    printf("Enter limit: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++) {
        min = a[i];
        index = i;

        for (j = i + 1; j < n; j++) {
            if (a[j] < min) {
                min = a[j];
                index = j;
            }
        }

        
        t = a[i];
        a[i] = a[index];
        a[index] = t;
    }

    printf("Sorted numbers: ");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);

    return 0;
}

