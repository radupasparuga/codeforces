#include <iostream>

using namespace std;

int main() {
  std::ios::sync_with_stdio(false);
  int n, k, a[101], counter = 0, i = 0, saver = -1;
  cin >> n >> k;
  for(i; i < n; ++i) {
    cin >> a[i];
    if(a[i] > 0 && i < k-1) {
      counter++;
    } else if(i == k-1 && a[i] > 0) {
      saver = a[i]; 
      counter++;
    } else if(a[i] == saver) {
      counter++;
    } else break;
  }
  cout << counter;
  return 0;
}