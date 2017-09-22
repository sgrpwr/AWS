#include<stdio.h>
int main(){
    int n,i,count1=0,count2=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0];
    for(i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
            count1++;
        }
    }
    for(i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
            count2++;
        }
    }
    printf("%d %d",count1,count2);
    return 0;
}
