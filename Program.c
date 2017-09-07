#include <stdio.h>
int main()
{
    int n, i, sumo = 0,sume=0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    
    for(i=1; i <= n; ++i)
    {
        if(i%2==0){
            sume += i;   // sum = sum+i;
        }
        else{
            sumo += i;
        }
        
    }
    
    printf("Sum odd = %d and Sum even = %d",sumo,sume);
    
    return 0;
}
