#include<bits/stdc++.h>
using namespace std;

pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cin>>n;
    pattern2(n);
}