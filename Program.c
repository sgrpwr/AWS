#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int migratoryBirds(int n,int* ar) {
    int i,j,max=0,count[n],loc=0;
    for(i=0;i<n;i++){
        count[i]=0;
        for(j=0;j<n;j++){
            if(ar[i]==ar[j])
                count[i]++;
        }
    }
    
    for(i=0;i<n;i++) printf("%d\n",count[i]);
    for(i=0;i<n;i++) if(max<count[i]){ max=count[i]; loc=i;}
    printf("\nMax:%d\nLoc:%d",count[loc],loc);
    return (ar[loc]);
}

int main() {
    int n;
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
        scanf("%i",&ar[ar_i]);
    }
    int result = migratoryBirds(n, ar);
    printf("%d", result);
    return 0;
}

