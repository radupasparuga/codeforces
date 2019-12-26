#include <iostream>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    int n;
    cin >> n;
    if( n >= 1 && n <= 100 ) {
      if(n == 2) cout << "NO";
      else if(n % 2 == 0) cout << "YES";
      else cout << "NO";
    }
    return 0;
}
