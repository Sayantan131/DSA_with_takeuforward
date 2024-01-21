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
        int start = 1;
        if(i%2==0) start = 1;
        else start = 0;
        for(int j=0;j<=i;j++){
            
           cout<<start;
           start=1-start; 
        }
        cout<<"\n";
    }
}

pattern12(int n){

for(int i=1;i<=n;i++){
    // numbers
for(int j=1;j<=i;j++){
    cout<<j;
}
    // space
for(int j=1;j<=2*(n-i);j++){
    cout<<" ";
}
    // numbers
    for(int j=i;j>=1;j--){
    cout<<j;
}
cout<<endl;
}
}

pattern13(int n){
    int a=1;
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<a<<" ";
            a=a+1;
        }
        cout<<"\n";
    }
}

pattern14(int n){
char ch = 65;
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<ch;
       ch++;
    }
     ch=65;
    cout<<"\n";
}
}


pattern15(int n){
    char ch=65;
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<ch<<" ";
            ch++;
        }

        cout<<"\n";
        ch = 65;
    }
}

pattern16(int n){
char ch = 65;
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<ch;
      
    }
     ch++;
    cout<<"\n";
}
}



pattern17(int n){
    
}



int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int n;
    cin>>n;
   pattern17(n);
    }
   
}