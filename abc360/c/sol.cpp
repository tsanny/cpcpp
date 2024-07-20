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

    vector<vector<int>> box(n);
    vector<int> A(n);
    vector<int> W(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        --A[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> W[i];
    }
    for (int i = 0; i < n; i++) {
        box[A[i]].push_back(W[i]);
    }
    int res = 0;
    for (auto v : box) {
        if (v.size() > 0) {
            sort(v.begin(), v.end());
            for (int i = 0; i < (int)v.size() - 1; i++)
                res += v[i];
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
