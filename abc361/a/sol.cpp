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

    int n, k, x;
    cin >> n >> k >> x;
    for (int i = 1; i <= n; i++) {
        int p;
        cin >> p;
        cout << p << ' ';
        if (i == k)
            cout << x << ' ';
    }
    cout << endl;
}

int main() {
    int tc = 1;
    /* cin >> tc; */
    while (tc--)
        solve();
}
