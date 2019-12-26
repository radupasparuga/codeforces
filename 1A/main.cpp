#include <iostream>

using namespace std;

int main() {
  std::ios::sync_with_stdio(false);
  unsigned long long m,n,a;
  cin >> m >> n >> a;
  cout << (m * n) / (a*a);
}