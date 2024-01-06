#include<bits/stdc++.h>
using namespace std;

//pass by value and reference

// dosomething(string s){
// s[0] = 'a';
// cout<<s<<endl;
// }

// int main(){
    
//     string s;
//     cin>>s;
//     dosomething(s);
//     cout<<s<<endl;
// return 0
// }

//pass by  reference
// void dosomething(string &s){
// s[0] = 'a';
// cout<<s<<endl;
// }

// int main(){
    
//     string s;
//     cin>>s;
//     dosomething(s);
//     cout<<s<<endl;
//  return 0;   
// }

void dosomething(int arr[], int n){

   arr[0] +=100;
   cout<<"Value inside the function: "<<arr[0]<<endl;

}

int main(){
    int n = 5;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    dosomething(arr,n);
    cout<<"Value inside the main: "<<arr[0]<<endl;
    return 0;
}