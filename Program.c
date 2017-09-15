#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* kangaroo(int x1, int v1, int x2, int v2) {
    int sum1,sum2,i;
    sum1=x1;
    sum2=x2;
    for(i=0;i<10000;i++){
        sum1=sum1+v1;
        sum2=sum2+v2;
        if(sum1==sum2) break;
    }
    
    if(sum1==sum2) return ("YES");
    else return("NO");
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    scanf("%i %i %i %i", &x1, &v1, &x2, &v2);
    int result_size;
    char* result = kangaroo(x1, v1, x2, v2);
    printf("%s\n", result);
    return 0;
}
