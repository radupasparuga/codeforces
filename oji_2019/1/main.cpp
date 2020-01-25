#include <bits/stdc++.h> 
#include <fstream>

using namespace std;

ifstream in("conexidad.in");
ofstream out("conexidad.out");
int viz[102], a[102][5001], n, m, k;
int b[102][5001];
int c1[102], n1;//componente conexe cu 1 singur nod
int c2[102], n2;//componente conexe cu mai multe noduri


void DFS(int x) {
  viz[x] = 1;
  b[k][0] = b[k][0] + 1, b[k][b[k][0]] = x;
  for(int i = 1; i <=a[x][0]; ++i)
    if(!viz[a[x][i]])
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

  for (int i = 1; i <= n; ++i) viz[i] = 0;
  for (int i = 1; i <= k; ++i) {
    if (b[i][0] == 1) {
      n1++; // componenta conexa 1 nod
      c1[n1] = i;
    } else {
      n2++; // componenta conexa mai multe noduri
      c1[n2] = i;
      viz[i] = b[i][0]; // numar noduri in componenta conexa
    }
  }

  if (n2 == 0) { // daca avem doar noduri izolate
    out << "2\n" << k - 1 << "\n";
    for (int i = 1; i < n; ++i)
      out << i << " " << i + 1 << "\n"; //legam nodurile izolate
  } else {
    int max_elem;
    if (k == 1) max_elem = 0; // o singura componenta conexa
    else {
      if(n1 == 0) max_elem = 1;
      else if(n1 > n - n1 - 2 - (n2 - 2) * 2) max_elem = 2;
      else max_elem = 1;
    }
    out << max_elem << "\n" << k - 1 << "\n";
    // legam componentele conexe care au mai multe noduri
    for (int i = 1; i < n2; ++i) {
      x = b[c2[i]][viz[c2[i]]]; 
      y = b[c2[i + 1]][viz[c2[i + 1]]];
      out << x << " " << y << "\n";
      nr = nr - 1;
      viz[c2[i]] = viz[c2[i]] - 1;
      viz[c2[i + 1]] = viz[c2[i + 1]] - 1;
    }

    int izo = 0;
    for (int i = 1; (i <= n2) && (nr > 0); ++i) {
      for (int j = viz[c2[i]]; (j > 0) && (nr > 0); --j) {
        izo++;
        out << b[c2[i]][j] << " " << b[c1[izo]][1] << "\n";
        nr--;
        viz[c2[i]] = viz[c2[i]] - 1;
      }
    }
    while (nr > 0) {
      out << b[c1[izo]][1] << " " << b[c1[izo + 1]][1] << "\n";
      nr--;
      izo++;
    }
  }
  return 0;
}