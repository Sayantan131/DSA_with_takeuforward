#include<bits/stdc++.h>
using namespace std;

// int factorial(int n){
//     if(n == 0 || n==1){
//         return 1;
//     }else{
//         return n*factorial(n-1);
//     }
// }

// int main(){
//     int num;
//     cin>>num;
//     cout<<"fac: "<<num<<"  " <<factorial(num);
// }

countDigit(int n){
    int cnt = 0;
    while(n>0){
       int  lastdigit = n%10;
        cnt = cnt+1;
        n = n/10;
    }
    return cnt;
}



int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int n;
    cin>>n;
   problem1(n);
   //break for today
    }
   
}
//done up to divisor but divisor i have to see again break day time waste