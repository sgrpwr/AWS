#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number");
    scanf("%d",&num);
    if(num%2==0){
        printf("Your number %d is even",num);
    }
    else
        printf("Number was odd!");
    return 0;
}
