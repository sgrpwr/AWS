#include<stdio.h>

int sum(int);

int sum(int a){
    int s;
    if(a==1) return a;
    s=a+sum(a-1);
    return s;
}

int main(){
    long long int k;
    k=sum(1000000);
    printf("%lld",k);
    
    return 0;
}
