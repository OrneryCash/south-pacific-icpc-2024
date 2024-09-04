#include <bits/stdc++.h>
using namespace std;

int main() {
  double hp;
  int n, m, l;
  cin >> hp >> n >> m >> l;
  vector<double> potions;
  vector<double> swords;

  double allSwords = 0;

  for (int i = 0; i < n; i++) {
    double a;
    cin >> a;
    potions.push_back(a);
  }
  for (int i = 0; i < m; i++) {
    double a;
    cin >> a;
    allSwords += a;
    swords.push_back(a);
  }

  double tmpHp = hp;
  sort(potions.begin(), potions.end());
  sort(swords.begin(), swords.end());

  if (l == 1) {
    double potDmg = abs(hp) * (potions[potions.size()-1] / 100.0);
    double swDmg = swords[swords.size()-1];

    if (potDmg >= swDmg) {
      hp -= potDmg;
    } else {
      hp -= swDmg;
    }
  } else {
      hp -= abs(hp) * (potions[potions.size()-1] / 100.0);
      l--;

      int i = n - 2;
      int j = m - 1;
      while (l > 0) {
        double potDmg, swDmg;
        if (i >= 0) {
          potDmg = abs(hp) * (potions[i] / 100.0);
        }
        if (j >= 0) {
          swDmg = swords[j];
        }
        if (i >= 0 && j >= 0) {
          if (potDmg >= swDmg) {
            hp = hp - potDmg;
            i--;
          } else {
            hp = hp - swDmg;
            j--;
          }
        } else if (i < 0) {
          hp -= swDmg;
          j--;
        } else if (j < 0) {
          hp -= potDmg;
          i--;
        }
        l--;
      }
  }

  tmpHp -= allSwords;

  printf("%.10lf", min(hp, tmpHp));
}
