#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  long long ans = 1e18 - 5;
  for (int i = 2; i <= 10; i++) {
    long long tmp = n;
    long long curr = 0;
    while (tmp > 0) {
      curr += tmp % i;
      tmp /= i;
    }
    ans = min(ans, curr);
  }
  cout << ans;
}
