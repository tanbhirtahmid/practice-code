#include <stdio.h>
#include <string.h>

struct marks{
    int english;
    int math;
};

struct student{
    char name[100];
    char id[7];
    char dis[4];
    struct marks mark;
};

int main() {
    struct student s;

    scanf("%s%s%s", s.name, s.id, s.dis);
    scanf("%d%d", &s.mark.english, &s.mark.math); 

    printf("%s%s%s", s.name, s.id, s.dis);
    printf("%d%d", s.mark.english, s.mark.math);

    return 0;
}