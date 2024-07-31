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
    vector<string> s(2);
    cin >> s[0] >> s[1];

    int res = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 1; j < n - 1; j++) {
            res += (

                (s[i][j] == '.' && s[i][j - 1] == '.' && s[i][j + 1] == '.') &&
                (s[!i][j] == '.' && s[!i][j - 1] == 'x' && s[!i][j + 1] == 'x')

            );
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
