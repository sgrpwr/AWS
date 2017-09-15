#include<stdio.h>

int main(){
    int T,rem,i;
    scanf("%d",&T);
    int grade[T];
    for(i=0;i<T;i++){
        scanf("%d",&grade[i]);
    }
    
    for(i=0;i<T;i++){
        if(grade[i]<38) grade[i]=grade[i];
        if(grade[i]>=38){
            if(grade[i]%5>=3){
                rem = grade[i]%5;
                grade[i]=grade[i]+(5-rem);
            }
        }
    }
    for(i=0;i<T;i++){
        printf("%d\n",grade[i]);
    }
    return 0;
}
