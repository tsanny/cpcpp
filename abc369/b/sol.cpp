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
    queue<int> l, r;
    for (int i = 0; i < n; i++) {
        int a;
        char c;
        cin >> a >> c;
        if (c == 'L')
            l.push(a);
        if (c == 'R')
            r.push(a);
    }

    int res = 0;
    if (!l.empty()) {
        int L = l.front();
        l.pop();
        while (!l.empty()) {
            res += abs(L - l.front());
            L = l.front();
            l.pop();
        }
    }
    if (!r.empty()) {
        int R = r.front();
        r.pop();
        while (!r.empty()) {
            res += abs(R - r.front());
            R = r.front();
            r.pop();
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
