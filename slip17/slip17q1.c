#include <stdio.h>
#include <stdlib.h>
#include "singlylist.h"

int main()
{
    create();
    printf("Original List: ");
    display();

    reverse();
    printf("\nReversed List: ");
    display();

    return 0;
}


