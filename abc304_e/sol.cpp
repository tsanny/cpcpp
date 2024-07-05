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
vector<vector<int>> g(1000000);
vector<int> colors(1000000, -1);

const int INF = 1e9;

void solve() {

    int n, m, a, b, k, q;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        --a, --b;

        g[a].push_back(b);
        g[b].push_back(a);
    }

    queue<int> que;

    int color = 0;
    for (int i = 0; i < n; i++) {
        // printf("curr: %d\n", i);
        if (colors[i] != -1)
            continue;
        que.push(i);
        while (!que.empty()) {
            int v = que.front();
            colors[v] = color;
            // printf("color of %d: %d\n", v, color);
            que.pop();
            for (int adj : g[v])
                if (colors[adj] == -1)
                    que.push(adj);
        }
        color++;
    }

    cin >> k;
    map<pair<int, int>, bool> forbidden;
    for (int i = 0; i < k; i++) {
        cin >> a >> b;
        --a;
        --b;

        forbidden[{colors[a], colors[b]}] = true;
        forbidden[{colors[b], colors[a]}] = true;
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> a >> b;
        --a;
        --b;

        if (forbidden[{colors[a], colors[b]}])
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    // identify disjoint sets, assign vertices to each set
    // for each good condition, note which set cant connect to what
    // other set
}

int main() {
    int tc = 1;
    /* cin >> tc; */
    while (tc--)
        solve();
}
