//Count digits in an integer

#include<bits/stdc++.h>

using namespace std;
countDigit(int n) {

  int cnt = 0;
  while (n > 0) {
    int lastdigit = n % 10;
    cnt = cnt + 1;
    n = n / 10;

  }
  return cnt;
}

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif

  int n;
  cin >> n;

  cout << countDigit(n);
  return 0;
}