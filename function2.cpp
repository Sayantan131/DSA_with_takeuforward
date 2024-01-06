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
void dosomething(string &s){
s[0] = 'a';
cout<<s<<endl;
}

int main(){
    
    string s;
    cin>>s;
    dosomething(s);
    cout<<s<<endl;
 return 0;   
}