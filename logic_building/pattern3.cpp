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


    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for (int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint)ch++;
            else ch--;
        }
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}

pattern18(int n){
     char startChar = 'A' + n - 1;
    for(int i=0;i<n;i++){
        char ch = startChar;
        for(int j=0;j<=i;j++){
            cout<<ch;
            ch--;
        }
        cout<< "\n";
           }
}

pattern19(int n){
   int ints = 0;
 for(int i=0; i<n; i++){
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    for(int j=0;j<ints;j++){
        cout<<" ";
    }
     for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    cout<<"\n";
    ints = ints+2;
 }
 int in2 = ints-2;
 for(int i=0;i<n;i++){

for(int j=0;j<=i;j++){
    cout<<"*";
}
for(int j=0;j<in2;j++){
    cout<<" ";
}
for(int j=0;j<=i;j++){
    cout<<"*";
}
cout<<"\n";
in2 = in2-2;
 }


}

pattern20(int n){
   int space = 8;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        space=space-2;
        cout<<"\n";
    }
    int space1 = 2;
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<space1;j++){
            cout<<" ";
        }
         for(int j=1;j<n-i;j++){
            cout<<"*";
        }
        space1 = space1+2;
        cout<<"\n";
    }
}


pattern21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1){
                cout<<"*";
            }
             else
                    cout<<" ";
                
            
        }
        cout<<"\n";
    }
}

pattern22(int n){
    //i will do it later
    //health is not good enough
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int n;
    cin>>n;
   pattern22(n);
    }
   
}