#include <stdio.h>

int main()
{
    float p,dis;
    printf("Enter the amount of purchased item:");
    scanf("%f",&p);
    if (p>=1000){
        p = p-(p*10)/100;
        printf("Total Price is %f\n",p);}
    else
        printf("Total Price is %f",p);
    return 0;
}

