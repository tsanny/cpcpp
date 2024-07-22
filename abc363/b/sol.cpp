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

    int n, t, p;
    cin >> n >> t >> p;

    vector<int> h(n);
    for (int i = 0; i < n; i++)
        cin >> h[i];
    sort(h.begin(), h.end());
    // printf("t=%d, h[n-1-p]=%d, t-h[n-1-p]=%d\n", t, h[n - p], t - h[n - p]);
    cout << max(0, t - h[n - p]) << endl;
}

int main() {
    int tc = 1;
    /* cin >> tc; */
    while (tc--)
        solve();
}
