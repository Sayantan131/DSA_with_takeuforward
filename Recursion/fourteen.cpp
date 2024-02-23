#include<bits/stdc++.h>
using namespace std;

int f(int n){
    if(n <= 1) return n;
    int start = f(n-1);
    int last = f(n-2);
    return last+start;
}

int main(){
    cout<<f(4);
    return 0;
}


//Time complexity (2^n) exponential