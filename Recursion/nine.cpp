#include<bits/stdc++.h>
using namespace std;

sum2(int n){
    if(n==0){
        return 0;
    }
return  n+sum2(n-1);
}











int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;


    
    cout<< sum2(n);
    
    return 0;
}