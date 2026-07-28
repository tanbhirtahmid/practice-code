#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    float cgpa;
    int code;
};


int main() {
    struct student s[50];
    
    // freopen("input_student.md", "r", stdin);

    for (int i = 0; i < 50; i++)
    {
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strlen(s[i].name)-1]=0;
        scanf("%f%d", &s[i].cgpa, &s[i].code);
        int ch;
        while ((ch = getchar()) != '\n');
    }

    float high = 0;

    for (int i = 0; i < 50; i++)
    {
        if (s[i].code == 2)
        {
            (s[i].cgpa > high) ? high = s[i].cgpa : 0;
        }
        
    }

    printf("%f\n", high);

    for (int i = 0; i < 50; i++)
    {
        if (s[i].code==2 && s[i].cgpa==high)
        {
            printf("%s\n", s[i].name);
        }
    }
    
    return 0;
}