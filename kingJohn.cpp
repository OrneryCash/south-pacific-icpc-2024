#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, m;
  cin >> k >> m;
  vector<int> v(m);
  for (int i = 0; i < m; i++) {
    cin >> v[i];
  }

  long long ans = k * v[0];
  for (int i = 1; i < m; i++) {
    long long curr = 0;
    if (k % (i+1) == 0) {
      for (int j = 0; j <= i; j++) {
        curr += ((k / (i+1)) * v[j]);
      }
    } else {
      int ck = k - (k % (i+1)) + (i+1);
      for (int j = 0; j <= i; j++) {
        curr += ((ck / (i+1)) * v[j]);
      }
    }
    ans = min(ans, curr);
  }

  cout << ans;
}
