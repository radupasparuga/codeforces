#include <bits/stdc++.h> 

using namespace std;

int main() { 
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
  int t;
  cin >> t;
  for(int i = 0; i < t; ++i) {
    int n, k, L, R, b=0, a=0, b_sum = 0;
    cin >> n >> k;
    if(n%k == 0){
      cout << n << endl;
    }else {
      L = n/k;
      R = (n/k)+1;
      while(b < k/2) {
        b_sum += R;
        b++;
      }
      if((n-b_sum)%L == 0){ 
        if((n-b_sum)/L == k-b){
          cout << n << endl;
        } else {
          cout << b_sum + k-b << endl;
        }
      } else {
          cout << n-(n-b_sum)%L << endl;   
      }
    }
  }
  return 0;
}