#include<bits/stdc++.h>
using namespace std;

void print(int i,int n){
    if(n<i){
        return;
    }
    cout<<n<<endl;
    print(i,n-1);

}

int main(){
    int n;
    cin>>n;
    print(1,n);
}