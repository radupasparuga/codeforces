#include <bits/stdc++.h> 

using namespace std;

int main() { 
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
  int t;
  cin >> t;
  for(int i = 0; i < t; ++i) {
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr+3);
    if(arr[2] - arr[1] - arr[0] > 1) cout << "NO" << endl;
    else cout << "YES" << endl;
  }
  return 0;
}