#include <stdio.h>
#include<stdlib.h>

void countingsort_recursive(int a[], int b[], int count[], int i, int n) {
    if (i < n) {
        count[a[i]]++;
        countingsort_recursive(a, b, count, i + 1, n);
    } else {
        int j;
        for (j = 1; j < 50; j++) {
            count[j] = count[j] + count[j - 1];
        }
        for (j = n - 1; j >= 0; j--) {
            b[--count[a[j]]] = a[j];
        }
    }
}

int main() {
    int a[20], b[20], count[50] = {0}, n, i, max;
    printf("Enter how many elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        a[i] = rand() % 10;
    }

    printf("\nBefore sorting, the array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    countingsort_recursive(a, b, count, 0, n);

    printf("\nAfter sorting, the array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
