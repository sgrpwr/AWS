#include<stdio.h>
int main(){
    int n,i,arr[n],count1=0,count2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++){
        if(arr[i]>arr[i+1]){
            arr[i+1]=arr[i];
            count1++;
        }
    }
    
    for(i=1;i<n;i++){
        if(arr[i]<arr[i+1]){
            arr[i+1]=arr[i];
            count2++;
        }
    }
    
    
    printf("%d %d",count1,count2);
    
    return 0;
}
