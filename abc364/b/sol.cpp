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

    int h, w, sy, sx;
    cin >> h >> w >> sy >> sx;
    vector<string> grid(h);

    for (int i = 0; i < h; i++) {
        cin >> grid[i];
    }

    string x;
    cin >> x;

    --sy;
    --sx;
    for (int i = 0; i < (int)x.size(); i++) {

        if (x[i] == 'L') {
            if (sx - 1 >= 0 && grid[sy][sx - 1] == '.')
                sx--;
        } else if (x[i] == 'R') {
            if (sx + 1 < w && grid[sy][sx + 1] == '.')
                sx++;
        } else if (x[i] == 'U') {
            if (sy - 1 >= 0 && grid[sy - 1][sx] == '.')
                sy--;
        } else if (x[i] == 'D') {
            if (sy + 1 < h && grid[sy + 1][sx] == '.')
                sy++;
        }
    }

    cout << ++sy << ' ' << ++sx << endl;
}

int main() {
    int tc = 1;
    /* cin >> tc; */
    while (tc--)
        solve();
}
