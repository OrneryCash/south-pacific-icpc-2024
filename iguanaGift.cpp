#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string st = s;
  reverse(st.begin(), st.end());
  if (s == st) {
    cout << 0;
  } else {
    string bas = "";
    for (int i = s.size()-1; i >= 0; i--) {
      int ans = 1;
      bool d = true;
      string tmp = s;
      bas = st[i] + bas;
      tmp += bas;
      for (int j = 0; j < tmp.size()/2; j++) {
        if (tmp[j] != tmp[tmp.size()-j-1]) {
          d = false;
          break;
        } 
      }
      if (d) {
        cout << bas.size();
        break;
      }
    }
  }
}
