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
    int r = n - 1;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (!flag && (s[n - 1 - i] == '0' || s[n - 1 - i] == '.'))
            r--;
        else
            flag = true;
        if (s[n - 1 - i] == '.')
            break;
    }

    cout << s.substr(0, r + 1) << endl;
}

int main() {
    int tc = 1;
    /* cin >> tc; */
    while (tc--)
        solve();
}
