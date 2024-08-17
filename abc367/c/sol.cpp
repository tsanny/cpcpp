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
set<vector<int>> grid;
set<vector<int>> cache;
vector<int> tmp;
vector<int> R;
int k, n;

int calc_sum() {
    int sum = 0;
    for (int i : tmp) {
        sum += i;
    }
    return sum;
}

void dfs(int i) {
    int sum = calc_sum();
    if (sum % k == 0) {
        grid.insert(tmp);
    }

    if (i == n) {
        return;
    }

    for (int ri = 1; ri <= R[i]; ri++) {
        tmp[i] = ri;
        dfs(i + 1);
    }
}

void solve() {

    cin >> n >> k;

    R = vector<int>(n);
    for (int i = 0; i < n; i++) {
        int r;
        cin >> r;
        R[i] = r;
    }

    tmp = vector<int>(n, 1);

    for (int i = 1; i <= R[0]; i++) {
        tmp[0] = i;
        dfs(1);
        tmp = vector<int>(n, 1);
    }

    for (auto v : grid) {
        for (auto i : v) {
            cout << i << ' ';
        }
        cout << endl;
    }
}

int main() {
    int tc = 1;
    /* cin >> tc; */
    while (tc--)
        solve();
}
