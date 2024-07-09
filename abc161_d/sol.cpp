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
    int k;
    cin >> k;
    queue<ll> q;
    for (int i = 1; i <= 9; i++)
        q.push(i);
    ll x;
    for (int i = 0; i < k; i++) {
        x = q.front();
        if (x % 10 != 0) {
            q.push(10 * x + (x % 10) - 1);
        }
        q.push(10 * x + (x % 10));
        if (x % 10 != 9)
            q.push(10 * x + (x % 10) + 1);
        q.pop();
    }
    cout << x << endl;
}

int main() {
    int tc = 1;
    /* cin >> tc; */
    while (tc--)
        solve();
}
