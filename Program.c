#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int s,count1=0,count2=0,i;
    int t;
    scanf("%d %d",&s,&t);
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int m;
    int n;
    scanf("%d %d",&m,&n);
    int *apple = malloc(sizeof(int) * m);
    for(int apple_i = 0; apple_i < m; apple_i++){
        scanf("%d",&apple[apple_i]);
    }
    int *orange = malloc(sizeof(int) * n);
    for(int orange_i = 0; orange_i < n; orange_i++){
        scanf("%d",&orange[orange_i]);
    }
    for(i = 0; i < m; i++){
        apple[i]=a+apple[i];
        if(apple[i]>=s&&apple[i]<=t) count1++;
    }
    for(i = 0; i < n; i++){
        orange[i]=b+orange[i];
        if(orange[i]>=s&&orange[i]<=t) count2++;
    }
    printf("%d\n%d",count1,count2);
    return 0;
}
