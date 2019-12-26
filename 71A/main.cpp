#include <iostream>
#include <cstring>

using namespace std;

int main() {
  std::ios::sync_with_stdio(false);
  int n;
  cin >> n;
  for(int i = 0; i < n; ++i) {
    char word[100];
    cin >> word;
    int size = strlen(word);
    if(size > 10) {
      cout << word[0] << size-2 << word[size-1] << endl;
    } else {
      cout << word << endl;
    }
  }
  return 0;
}