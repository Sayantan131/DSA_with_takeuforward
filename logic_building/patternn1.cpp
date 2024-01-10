#include<bits/stdc++.h>
using namespace std;

/*
print the pattern-->
* * * *
* * * *
* * * *
* * * *
*/

// int main(){
//     for(int i=0;i<=3;i++){
//         for(int j=0;j<=3;j++){
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }
// }

pattern1(int n){
for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cin>>n;
    pattern1(n);
}