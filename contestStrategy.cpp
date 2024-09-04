#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int correct = 0;
  int wrong = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a > 0) {
      correct++;
      wrong += a - 1;
    } else if (a < 0) {
      wrong += -a;
    }
  }

  if (correct > n / 2) {
    cout << "easy";
  } else if (correct < n * 0.2) {
    cout << "hard";
  } else if (wrong > correct * 2) {
    cout << "tricky";
  } else {
    cout << "medium";
  }
}
