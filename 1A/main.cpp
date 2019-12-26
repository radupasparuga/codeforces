#include <iostream>

using namespace std;

int main() {
  std::ios::sync_with_stdio(false);
  unsigned long long m,n,a;
  cin >> m >> n >> a;
  cout << ((n+a-1)) / a * ((m+a-1) / a);
}