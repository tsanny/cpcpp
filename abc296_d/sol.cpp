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

const ll INF = 1e12 + 1;

void solve() {
    ll n, m;
    cin >> n >> m;

    ll res = INF;
    for (ll a = 1; a <= n; a++) {
        ll b = (m + a - 1) / a; // adding a - 1 to obtain ceil
        if (b <= n)
            res = min(res, a * b);
        if (a > b) // M / a
            break;
    }
    if (res != INF)
        cout << res << endl;
    else
        cout << -1 << endl;
}

int main() {
    int tc = 1;
    /* cin >> tc; */
    while (tc--)
        solve();
}
