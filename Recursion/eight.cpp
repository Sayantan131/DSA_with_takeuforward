#include<bits/stdc++.h>
using namespace std;

sum1(int i, int sum){
    if(i<1){
        cout<<sum;
        return 1;
    }
    sum1(i-1,sum+i);
}



int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    
    sum1(n,0);
    return 0;
}