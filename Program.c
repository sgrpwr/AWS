#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            printf("*");
            if(i<=j){
                printf("\n");
                break;
            }
        }
    }
    return 0;
}
