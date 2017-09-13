#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,largest,i,j=0;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    largest=arr[0];
    for(i=1;i<n;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]==largest)
            j++;
    }
    printf("%d\n",j);
    return 0;
}
