#include<bits/stdc++.h>
using namespace std;


mul(int n){
    if(n<1){
        return 1;
    }
    return n*mul(n-1);
}
















int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
    #endif
   
    int n;
    cin>>n;
    cout<< mul(n);
    return 0;
}