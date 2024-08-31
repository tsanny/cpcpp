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

void solve() {

    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<ll> d(n - 1);
    for (int i = 0; i < n - 1; i++) {
        d[i] = v[i + 1] - v[i];
    }

    ll res = n, combo = 0;
    for (int i = 0; i < n - 1; i++) {
        if (i > 0 && d[i] == d[i - 1]) {
            combo++;
        } else {
            combo = 1;
        }
        res += combo;
    }

    cout << res << endl;
}

int main() {
    int tc = 1;
    /* cin >> tc; */
    while (tc--)
        solve();
}
