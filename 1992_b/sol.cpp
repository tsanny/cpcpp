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
    int n, k;
    cin >> n >> k;

    vector<int> pieces(k);
    for (int i = 0; i < k; i++) {
        cin >> pieces[i];
    }

    sort(pieces.begin(), pieces.end());
    int res = 0;
    for (int i = 1; i < k; i++) {
        res += (2 * (pieces[k - i - 1] - 1)) * (pieces[k - i - 1] > 1) + 1;
        printf("--%d", pieces[k - i - 1]);
    }
    cout << endl;

    cout << res << endl;
}

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
}
