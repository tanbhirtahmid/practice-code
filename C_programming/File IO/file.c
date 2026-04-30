#include <stdio.h>

int main ()
{
    FILE *fh;
    fh=fopen("tester.md", "w");
    int name[5];
    scanf("%s", name);

    fprintf(fh, "%s", name);

    fclose(fh);

    return 0;
}