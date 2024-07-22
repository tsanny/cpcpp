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

long long ten(int x) { return x == 0 ? 1 : ten(x - 1) * 10; }

void solve() {
    ll n;
    cin >> n;
    if (n == 1) {
        cout << 0 << endl;
        return;
    }
    n--;

    for (int i = 1;; i++) {
        int di = (i + 1) / 2;
        if (n <= 9 * ten(di - 1)) {
            string s = to_string(ten(di - 1) + n - 1);
            s.resize(i, ' ');
            for (int j = di; j < i; j++)
                s[j] = s[i - 1 - j];
            cout << s << endl;
            return;
        } else {
            n -= 9 * ten(di - 1);
        }
    }
}

int main() {
    int tc = 1;
    /* cin >> tc; */
    while (tc--)
        solve();
}
