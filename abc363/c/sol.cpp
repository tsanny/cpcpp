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
    string s;
    cin >> s;
    int res = 0;
    sort(s.begin(), s.end());
    do {
        bool ok = true;
        // cout << "current: " << s;
        for (int i = 0; i + k <= n; i++) {
            string ss = s.substr(i, k);
            string rss = ss;
            // cout << "--" << ss;
            reverse(ss.begin(), ss.end());
            if (ss == rss) {
                // cout << " palindrome" << endl;
                ok = false;
                break;
            }
            // cout << endl;
        }
        res += ok;
    } while (next_permutation(s.begin(), s.end()));
    cout << res << endl;
}

int main() {
    int tc = 1;
    /* cin >> tc; */
    while (tc--)
        solve();
}
