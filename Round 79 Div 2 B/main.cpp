#include <bits/stdc++.h> 

using namespace std;

int main() { 
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
  int t;
  cin >> t;
  for(int i = 0; i < t; ++i) {
    int n,s,a[100000], sum = 0, max = 0, pos = 0;
    cin >> n >> s;
    for(int j = 0; j < n; ++j){
      cin >> a[j];
      sum += a[j];
    }
    if(sum <= s) cout << 0 << endl;
    else {
      for(int k = 0; k < n; ++k){
        sum = 0;
        for(int j = 0; j < n; ++j){
          if(sum > s){
            if(j-2 > max) {
              max = j-2;
              pos = k;
            }
            break;
          }
          else if(sum == s) {
            if(j-1 >= max) {
              max = j-1;
              pos = k;
            } 
            break;
          }
          if(j != k) sum += a[j];
        }
      }
      cout << pos+1 << endl;
    }
  }
  return 0;
}