#include <bits/stdc++.h> 
#include <fstream>

using namespace std;

ifstream in("conexidad.in");
ofstream out("conexidad.out");
int viz[102], a[102][5001], n, m, k;
int b[102][5001];


void DFS(int x) {
  viz[x] = 1;
  b[k][0]++, b[k][b[k][0]] = x;
  for(int i = 1; i <=a[x][0]; ++i)
    if(!viz[A[x][i]])
      DFS(a[x][i]);
}

int main() { 
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);

  in >> n >> m;

  int x, y;
  for (int i = 1; i <= m; ++i) {
    in >> x >> y;
    a[x][0]++, a[x][a[x][0]] = y;
    a[y][0]++, a[y][a[y][0]] = x;
  }

  for (int i = 1; i <= n; ++i) {
    if (viz[i] == 0) {
      k++;
      DFS(i);
    }
  }
  
  int nr = k - 1;

  for(int i = 1; i <= n; ++i) viz[i] = 0;
  return 0;
}