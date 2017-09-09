#include<stdio.h>
int main(){
    int i,j,k,n=7;
    for(i=n;i>=1;i--){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(k=n;k>=i;k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
