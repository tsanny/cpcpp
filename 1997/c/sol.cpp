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
    string s;
    cin >> n >> s;
    if (s[0] == '_')
        s[0] = '(';

    stack<pair<char, int>> stk;
    stk.push({s[0], 0});

    int res = 0;
    int i = 1;
    while (i < n) {
        if (s[i] == '_') {
            if (!stk.empty()) {
                res += abs(stk.top().second - i);
                stk.pop();

            } else {
                stk.push({'(', i});
            }
        } else if (s[i] == ')') {
            res += abs(stk.top().second - i);
            stk.pop();
        } else if (s[i] == '(') {
            stk.push({'(', i});
        }
        i++;
    }

    cout << res << endl;
}

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
}
