
#include <stdio.h>
#include "ststack.h"
int main()
{
    int ch, num;
    do
    {
        printf("enter choice\n1-push\n2-pop\n3-disp");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter num");
            scanf("%d", &num);
            push(num);
            break;
        case 2:
            pop();
            break;
        case 3:
            disp();
        }
    } while (ch < 4);
}

