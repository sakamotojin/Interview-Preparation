
// Problem : Multiple of 3
// Contest : CodeChef - DSA Learning Series - Contest 1
// URL : https://www.codechef.com/LRNDSA01/problems/MULTHREE
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)
#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(nullptr);             \
  cout.tie(0);

int main() {
  fast;
  int t;
  cin >> t;
  while (t--) {
    ll k, d0, d1, sum = 0;
    cin >> k >> d0 >> d1;
    vector<ll> v = {
        (2 * (d0 + d1)) % 10,
        (4 * (d0 + d1)) % 10,
        (8 * (d0 + d1)) % 10,
        (6 * (d0 + d1)) % 10,
    };
    k -= 3;
    sum = (d0 + d1 + (d0 + d1) % 10) % 3;

    for (auto i : v) {
      sum = (sum + i * (k / 4 + bool(k % 4))) % 3;
      k -= bool(k % 4);
    }
    if (sum)
      cout << "NO\n";
    else
      cout << "YES\n";
  }
  return 0;
}
