#include<stdio.h>
int main(){
    long long int n,k,i,j,count=0;
    scanf("%lld %d",&n,&k);
    int arr[n];
    int sum[100];
    for(i=0;i<n;i++) scanf("%d",arr[i]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            sum[i]=0;
            if(i<j){
                sum[i]=arr[i]+arr[j];
                if(sum[i]%k==0) count++;
            }
        }
    printf("%d",count);
    return 0;
}
