#include<bits/stdc++.h>
using namespace std;

pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

pattern4(int n){
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<i<<" ";
    }
    cout<<endl;
}
}



pattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    } 
}

pattern6(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}


pattern7(int n){
    for(int i=0;i<n;i++){
        //space
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
        //star
    for(int j=0;j<2*i+1;j++){
        cout<<"*";
    }

        //space
        for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    cout<<"\n";
    }
}


pattern8(int n){
    for(int i=n;i>0;i--){
//space
// cout<<"sayantan";
for(int j=0;j<n*1-i;j++){
    // cout<<"s";
    cout<<" ";
}
//star
for(int j=0;j<2*i-1;j++){
    cout<<"*";
}
//space
for(int j=0;j<n*1-i;j++){
    // cout<<"s";
    cout<<" ";
}
cout<<"\n";
    }

}


pattern10(int n){
    for(int i=1;i<=2*n-1;i++){
        int star= i;
        if(i>n){
            star=2*n-i;
        }
        for(int j=0;j<star;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}



pattern11(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            
            if(i/2==0){
                cout<<"s";
                cout<<"1";
            }
            else{
                cout<<"a";
                cout<<"0";
            }
        }
        cout<<"\n";
    }
}






int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int n;
    cin>>n;
   pattern13(n);
    }
   
}