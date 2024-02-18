#include<bits/stdc++.h>
using namespace std;

void reversenumber(int i, int arr[], int n){
if(i>=n/2){
    return;
}
swap(arr[i],arr[n-i-1]);
reversenumber(i+1,arr,n);

}

int main(){
    int n,arr[n];
    cin>>n;
    cout<<"s";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<"s";
    }
    reversenumber(0,arr,n);
    for(int i=0;i<n;i++) cout<<arr[i] <<" "; 
}