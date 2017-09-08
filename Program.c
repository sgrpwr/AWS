#include <stdio.h>
int main()
{
    int i,size,a[50];
    printf("Enter size of array:");
    scanf("%d",&size);
    printf("Enter Numbers:\n");
    for(i=0;i<=size-1;++i){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=size-1;++i){
        printf("Number %d: %d\n",i,a[i]);
        if(a[0]<a[i])
            a[0]=a[i];
    }
    printf("And the largest number is : %d\n",a[0]);
    return 0;
}
