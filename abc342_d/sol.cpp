#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <functional>
#include <iterator>
#include <queue>
#include <set>
#include <string>
#include <utility>
using namespace std;

#define ll long long
#define llu long long unsigned
#define pii pair<int, int>

const int INF = 1e9;
ll f[200005];

void solve() {
    ll n;
    cin >> n;
    ll res = 0;
    for (int i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        for (ll j = 2; (j * j) <= x; j++) {
            while (x % (j * j) == 0) {
                x /= (j * j);
            }
        }
        res += f[x];
        f[x]++;
    }
    cout << res + f[0] * (n - f[0]) << endl;
}

int main() {
    int tc = 1;
    /* cin >> tc; */
    while (tc--)
        solve();
}
