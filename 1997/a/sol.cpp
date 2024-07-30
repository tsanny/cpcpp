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
    string s;
    cin >> s;
    int n = s.size();
    bool ok = false;
    string res = "";
    res += s[0];
    for (int i = 1; i < n; i++) {
        if (s[i - 1] == s[i] && !ok) {
            if (s[i] == 'z') {
                res += (char)(s[i] - 1);
            } else {
                res += (char)(s[i] + 1);
            }
            ok = true;
        }
        res += s[i];
    }
    if (!ok) {
        if (s[n - 1] == 'z') {
            res += (char)(s[n - 1] - 1);
        } else {
            res += (char)(s[n - 1] + 1);
        }
    }
    cout << res << endl;
}

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
}
