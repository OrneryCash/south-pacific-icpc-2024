#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<long long, long long>> v;
  for (int i = 0; i < n; i++) {
    long long r, f;
    cin >> r >> f;
    v.push_back({r, f});
  }
  sort(v.begin(), v.end());

  long long ans = 0;
  while (v.size() > 0) {
    pair<long long, long long> curr = v[0];
    long long ctime = curr.first;
    long long cfloor = curr.second;
    vector<pair<long long, long long>> vtmp;
    for (int i = 1; i < v.size(); i++) {
      pair<long long, long long> tmp = v[i];
      long long time = tmp.first;
      long long floor = tmp.second;
      if (time - ctime >= cfloor - floor && cfloor >= floor) {
        ctime = time;
        cfloor = floor;
      } else {
        vtmp.push_back(tmp);
      }
    }
    ans++;
    v = vtmp;
  }

  cout << ans;
}
