#include <stdio.h>
#include <stdbool.h>
struct student
{
    char name[100];
    int age;
    float gpa;
    bool isfulltime;
};

int main() {
    struct student student1={"Rmi", 12, 4.00, 1};
    printf ("%s\n", (student1.isfulltime) ? "true" : "false");
    return 0;
}