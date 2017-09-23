#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int bonAppetit(int n, int k, int b, int ar_size, int* ar) {
    int i,result,sum=0;
    ar[k]=0;
    for(i=0;i<n;i++){
        sum+=ar[i];
    }
    //printf("%d",sum);
    if(sum>b){
        result=b-(sum/2);
        return result;
    }
    else return 0;
    
}

int main() {
    int n;
    int k;
    char name[25]="Bon Appetit";
    scanf("%i %i", &n, &k);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
        scanf("%i",&ar[ar_i]);
    }
    int b;
    scanf("%i", &b);
    int result = bonAppetit(n, k, b, n, ar);
    if(result==0)
        printf("%s\n", name);
    else printf("%d\n", result);
    return 0;
}
