#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int getTotalX(int a_size, int* a, int b_size, int* b) {
    int min=b[0],i,j,count=0;
    for(i=0;i<b_size;i++){
        if(b[i]<min) min=b[i];
    }
    
    for(j=min;j<=min;j--){
        if(min%j==0) {
            for(i=1;i<b_size;i++){
                if(b[i]%j==0) count++;
            }
        }
    }
    //printf("\n%d",min);
    return count;
    
}

int main() {
    int n=2;
    int m=3;
    int a[]={2,4},b[]={16,32,96};
    //scanf("%i %i", &n, &m);
    /*int *a = malloc(sizeof(int) * n);
     for (int a_i = 0; a_i < n; a_i++) {
     scanf("%i",&a[a_i]);
     }
     int *b = malloc(sizeof(int) * m);
     for (int b_i = 0; b_i < m; b_i++) {
     scanf("%i",&b[b_i]);
     }*/
    int total = getTotalX(n, a, m, b);
    printf("%d\n", total);
    return 0;
}
