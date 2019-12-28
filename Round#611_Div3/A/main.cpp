#include <bits/stdc++.h> 

using namespace std;

int main() { 
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
  int t;
  cin >> t;
  for(int i = 0; i < t; ++i) {
    int h,m, hours_in_minutes;
    cin >> h >> m;
    hours_in_minutes = 24-h;
    if(hours_in_minutes <= 1) hours_in_minutes = 0;
    else {
      hours_in_minutes = (24-h-1)*60;
    }
    cout << 60-m+hours_in_minutes << endl;
  }
  return 0;
}