#include<stdio.h>
//#define size 100
int top=-1,A[100];

void Push(int x){
    if(top == 100){
        printf("\nOverflow");return;
    }
    A[++top]=x;
}

void Pop(){
    if(top == -1){
        printf("\nAlready Empty!");return;
    }
    top--;
}

void Top(){
    return A[top];
}

void Print(){
    printf("Stack :");
    for(int i=0; i<=top; i++)
        printf("%d\n",A[i]);
}

int main(){
    Push(2);Print();
    Push(5);Print();
    Push(10);Print();
    Pop();Print();
    Push(12);Print();
    
}
