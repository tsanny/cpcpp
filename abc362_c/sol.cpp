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

    int n;
    cin >> n;
    vector<vector<ll>> v(n);
    ll sumL = 0;
    ll sumR = 0;
    for (int i = 0; i < n; i++) {
        ll l, r;
        cin >> l >> r;
        v[i] = {l, r};
        sumL += v[i][0];
        sumR += v[i][1];
    }
    if (sumR < 0 || sumL > 0) {
        cout << "No" << endl;
        return;
    }
    cout << "Yes" << endl;
    ll sumX = 0;
    vector<ll> x;
    for (auto p : v) {
        x.push_back(p[0]);
        sumX += p[0];
    }
    for (int i = 0; i < n; i++) {
        ll d = min(v[i][1] - v[i][0], -sumX);
        x[i] += d;
        sumX += d;
    }
    for (ll xi : x)
        cout << xi << ' ';
    cout << endl;
}

int main() {
    int tc = 1;
    /* cin >> tc; */
    while (tc--)
        solve();
}
