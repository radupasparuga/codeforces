#include <bits/stdc++.h> 

using namespace std;

int main() {
  std::ios::sync_with_stdio(false);
  int f;
  cin >> f;
  for(int i = 0; i < f; ++i) {
    long long a, b, c, r;
    cin >> a >> b >> c >> r;
    int L = max(min(a, b), c - r);
    int R = min(max(a, b), c + r);
    cout << max(a, b) - min(a, b) - max(0, R-L) << endl;
  }
  return 0;
}