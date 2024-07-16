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

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v;
    for (int i = n; i >= k; i--) {
        v.push_back(i);
    }
    for (int i = m + 1; i < k; i++) {
        v.push_back(i);
    }
    for (int i = 1; i <= m; i++) {
        v.push_back(i);
    }

    for (int i : v) {
        cout << i << ' ';
    }
    cout << endl;
}

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
}
