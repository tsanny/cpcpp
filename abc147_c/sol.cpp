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
    vector<vector<int>> kind(n);
    vector<vector<int>> unkind(n);

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        for (int j = 0; j < a; j++) {
            int x, y;
            cin >> x >> y;
            --x;
            if (y == 0)
                unkind[i].push_back(x);
            else
                kind[i].push_back(x);
        }
    }

    int res = 0;
    for (int mask = 0; mask < (1 << n); mask++) {
        bool ok = true;
        int total = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                total++;
                for (int person : kind[i]) {
                    if (!(mask & (1 << person))) {
                        ok = false;
                    }
                }
                for (int person : unkind[i]) {
                    if (mask & (1 << person)) {
                        ok = false;
                    }
                }
            }
        }
        if (ok) {
            res = max(res, total);
        }
    }
    cout << res << endl;
}
int main() {
    int tc = 1;
    /* cin >> tc; */
    while (tc--)
        solve();
}
