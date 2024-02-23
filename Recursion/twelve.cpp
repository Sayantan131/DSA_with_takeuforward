#include<bits/stdc++.h>
using namespace std;

void reversenumber(int i, int arr[], int n){
    if(i >= n/2){
        return;
    }
    swap(arr[i], arr[n-i-1]);
    reversenumber(i+1, arr, n);
}

int main(){
    int n;
    cin >> n;

    int arr[n]; // Declare the array after taking the value of 'n'

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    reversenumber(0, arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }

    return 0;
}
