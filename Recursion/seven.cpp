#include<bits/stdc++.h>
using namespace std;

void print(int i,int n){
    if(i>n){
        return;
    }
    
    print(i+1,n);
    cout<<i<<endl;

}
//break day
int main(){
    int n;
    cin>>n;
    print(1,n);
}

///chegg applied