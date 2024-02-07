#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
void print(){

if(cnt == 4){
    return;
}
    cout<<cnt<<endl;
    cnt++;
    print();
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    print();
    return 0;
}