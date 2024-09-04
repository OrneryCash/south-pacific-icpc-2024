#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long long> v;
  for (int i = 0; i < n; i++) {
    long long a;
    cin >> a;
    v.push_back(a);
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < n/2; i++) {
    cout << v[i] << ' ' << v[n-i-1] << ' ';
  }
  if (n % 2 == 1) {
      cout << v[n/2];
    }
}
