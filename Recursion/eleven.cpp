#include<bits/stdc++.h>
using namespace std;

void f(int i, int arr[], int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    cout<<"Say";
    f(i+1, arr, n);
}
int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    f(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }   
    return 0;
}