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

// countDigit(int n){
//     int cnt = 0;
//     while(n>0){
//        int  lastdigit = n%10;
//         cnt = cnt+1;
//         n = n/10;
//     }
//     return cnt;
// }



// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//     int n;
//     cin>>n;
//    problem1(n);
//    //break for today
//     }
   
// }




#include<bits/stdc++.h>

using namespace std;

bool isPrime(int N) {
  for (int i = 2; i < N; i++) {
    if (N % i == 0) {
      return false;
    }
  }
  return true;
}
int main() {

  int n;
  cin>>n;

  bool ans = isPrime(n);
  if (n != 1 && ans == true) {
    cout << "Prime Number";
  } else {
    cout << "Non Prime Number";
  }
  return 0;
}

//done up to divisor but divisor i have to see again break day time waste