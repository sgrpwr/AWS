#include<stdio.h>
void main(){
    int num,r,base=1,d=0;
    printf("Enter a binary number");
    scanf("%d",&num);
    while(num>0){
        r=num%10;
        num/=10;a
        d=d+r*base;
        base*=2;
    }
    printf("Decimal conversion is %d",d);
}
