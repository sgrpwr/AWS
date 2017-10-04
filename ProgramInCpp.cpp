#include<iostream>
using namespace std;
int main(){
    int a=11,largest=0;
    //cout<<"Hey there!,Enter a number:";
    //cin>>a;
    int arr[11]={12,234,1,42,53,43,12,0,4,-2,-4534};
    //for(int i=0;i<a;i++) cin>>arr[i];
    for(int i=0;i<a;i++){
        //cout<<arr[i]<<endl;
        if(largest<arr[i]) largest=arr[i];
    }
    cout<<largest;
    return 0;
}
