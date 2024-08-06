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
vector<ll> a;
ll m;

bool cond(ll x) {
    ll s = 0;
    for (auto ai : a) {
        s += min(x, ai);
    }
    return s <= m;
}

void solve() {

    int n;
    cin >> n;
    cin >> m;
    a = vector<ll>(n);

    ll sum = 0, ok = 0, mxx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        mxx = max(mxx, a[i]);
    }

    if (sum <= m) {
        cout << "infinite" << endl;
        return;
    }

    while (ok + 1 < mxx) {
        ll mid = (ok + mxx) / 2;
        if (cond(mid))
            ok = mid;
        else
            mxx = mid;
    }

    cout << ok << endl;
}

int main() {
    int tc = 1;
    /* cin >> tc; */
    while (tc--)
        solve();
}
