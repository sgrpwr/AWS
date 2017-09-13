#include <stdio.h>

int main()
{
    int n=5,i,j,max=0,min=0;
    int sum[n];
    int arr[n][n],inp[n];
    for(i=0;i<n;i++){
        scanf("%d",&inp[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            arr[i][j]=inp[j];
        }
    }
    sum[0]=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j) continue;
            sum[i]=sum[i]+arr[i][j];
        }
    }
    
    max=sum[0];
    min=sum[0];
    for(i=1;i<n;i++){
        if(max<sum[i]) max=sum[i];
        if(min>sum[i]) min=sum[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\n",arr[i][j]);
        }
    }
    //for(i=0;i<n;i++) printf("%d\n",sum[i]);
    printf("%d  %d",min,max);
    return 0;
}
