// upsolved by reading editorial
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

const ll INF = 2e15 + 20, N = 2e5 + 20;
vector<ll> g[N];
vector<ll> a(N);

bool dfs(ll v, ll mid) {
    if (g[v].empty() && a[v] < mid)
        return false;

    if (!v) { // at root
        mid = max(0ll, mid - a[v]);
    } else if (a[v] < mid)
        mid = min(INF, mid + (mid - a[v]));

    for (ll child : g[v]) {
        if (!dfs(child, mid))
            return false;
    }

    return true;
}

void solve() {

    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 1; i < n; i++) {
        ll parent;
        cin >> parent;
        --parent;
        g[parent].push_back(i);
    }

    ll low = 0, high = INF;

    while (high - low > 1) {
        ll mid = (low + high) / 2;
        if (dfs(0, mid))
            low = mid;
        else
            high = mid;
    }

    cout << low << endl;
    for (ll i = 0; i < n; i++)
        g[i].clear();
}

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
}
