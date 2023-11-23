#include <stdio.h>

int search(int a[20], int num, int n);

int main() {
    int a[20], i, p, n, num;

    printf("enter limit::");
    scanf("%d", &n);

    printf("enter %d numbers::", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("enter number to search::");
    scanf("%d", &num);

    p = search(a, num, n);

    if (p == n)
        printf("not found");
    else
        printf("found at position=%d", p);

    return 0;
}

int search(int a[20], int num, int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == num) {
            return i;
        }
    }
    return i;
    
    }
                                              

