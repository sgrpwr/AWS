#include <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k, vector <int> ar) {
    int i,j,count=0;
    int temp[15];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            temp[i]=0;
            if(i<j){
                temp[i]=ar[i]+ar[j];
                //cout<<temp[i];
                if(temp[i]%k==0)
                    count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
        cin >> ar[ar_i];
    }
    int result = divisibleSumPairs(n, k, ar);
    cout << result << endl;
    return 0;
}
