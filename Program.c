#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int a0,a1,a2,A=0,B=0;
    scanf("%d %d %d", &a0, &a1, &a2);
    int b0,b1,b2;
    scanf("%d %d %d", &b0, &b1, &b2);
    
    if(a0>b0) A++;
    if(a1>b1) A++;
    if(a2>b2) A++;
    if(b0>a0) B++;
    if(b1>a1) B++;
    if(b2>a2) B++;
    printf("%d %d",A,B);
    return 0;
}
