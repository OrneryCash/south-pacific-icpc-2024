#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c;
  cin >> r >> c;
  string fs;
  cin >> fs;
  long long ans = 0;
  for (int i = 1; i < r; i++) {
    string ts;
    cin >> ts;
    for (int j = 0; j < c; j++) {
      if (fs[j] != ts[j]) {
        ans++;
      }
    }
    fs = ts;
  }
  cout << ans;
}
