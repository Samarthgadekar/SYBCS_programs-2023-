#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int flag = 0, scode;
    char cname[20], s1[20];

    FILE *fp1;
    fp1 = fopen("city.txt", "r");

    if (fp1 == NULL) {
        printf("File is not found");
        exit(0);
    }

    printf("Enter city name to search: ");
    scanf("%s", s1);

    while (fscanf(fp1, "%s %d", cname, &scode) == 2) {
        if (strcmp(cname, s1) == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("City is found, std code = %d\n", scode);
    else
        printf("City is not in the list\n");

    fclose(fp1);
    return 0;
}
