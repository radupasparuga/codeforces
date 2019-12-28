#include <bits/stdc++.h> 

using namespace std;

int main() { 
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
  int t, g[10000], r[10000], j = 1;
  cin >> t;
  for(int i = 1; i <= t; ++i) {
    cin >> g[i];
    r[g[i]] = 1;
  }
  int saver = -1, aux = -1;
  for(int i = 1; i <= t; ++i) {
    if(g[i] == 0) {
      while(r[j] == 1 && j <= t) j++;
      if(i != j) {
        if(saver == -1)
          g[i] = j;
        else {
          g[aux] = j;
          g[i] = saver;
          saver = -1;
          aux = -1;
        }
      }else {
        cout << i << " " << j;
        saver = j;
        aux = i;
      }
      ++j;
    }
  }
  for(int i = 1; i <= t; ++i) cout << g[i] << ' ';
  return 0;
}