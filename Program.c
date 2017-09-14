#include <stdio.h>

struct student{
    char name[20];
    int age;
    int roll_no;
}s1,s2;

int main()
{
    struct student person;
    s1.age=22;
    s1.roll_no=13;
    s2=s1;
    printf("%d\n%d\n\n",s1.age,s1.roll_no);
    printf("%d\n%d",s2.age,s2.roll_no);
    return 0;
}
