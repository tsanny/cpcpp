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
    int a, b;
    cin >> a >> b;

    int gap = abs(a - b);
    if (gap == 0) {
        cout << 1 << endl;
    } else if ((gap - 1) % 2 == 0) {
        cout << 2 << endl;
    } else {
        cout << 3 << endl;
    }
    return;
}

int main() {
    int tc = 1;
    /* cin >> tc; */
    while (tc--)
        solve();
}
