#include <stdio.h>

int main()
{
    float gs,bs;
    printf("Enter your Basic Salary:\n");
    scanf("%f",&bs);
    if (bs<1500){
        gs = bs+(bs/10)+(bs*9)/10; //BS+HRA+DA
        printf("Your gross salary is %f:",gs);}
    else{
        gs = bs+500+(bs*9.8)/10;   //BS+HRA+DA
        printf("Your gross salary is %f:",gs);}
    return 0;
}

