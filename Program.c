#include <stdio.h>

int main()
{
    int n[3],i;
    printf("Enter any 3 numbes");
    for( i=0;i<3;i++)
        scanf("%d",&n[i]);
    for( i=0;i<3;i++)
        printf("%d\n",n[i]);
    
    return 0;
}

