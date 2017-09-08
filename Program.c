#include <stdio.h>
int main()
{
    int i,num,a[5];
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=2;i>=0;i--){
        a[i]=num%10;
        num/=10;
    }
    for(i=2;i>=0;i--){
        printf("Splitted %dst element is %d\n",i,a[i]);
    }
    return 0;
}
