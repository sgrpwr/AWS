#include <stdio.h>
int main()
{
    int n,i,sum5=0,sumo=0;
    printf("Enter an integer: ");
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        if(i%5==0) sum5+=i;
        else sumo+=i;
    }
    printf("sum of d5=%d and sumo=%d",sum5,sumo);
    return 0;
}
