#include <stdio.h>

int main()
{
    float total,p;
    printf("Enter your total marks:\n");
    scanf("%f",&total);
    p=total/5;
    printf("Your percentage is: %f %\n",p);
    if (p>=60)
        printf("Your division is Ist:");
    else if(p>=50||p>=59)
        printf("Your division is IIst:");
    else if(p>=41||p>=49)
        printf("Your division is IIIst:");
    else
        printf("You failed this class:");
    return 0;
}

