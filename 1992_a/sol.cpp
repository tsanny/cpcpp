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

    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());
    for (int i = 0; i < 5; i++) {
        if (v[0] < v[1])
            v[0]++;
        else if (v[1] < v[2])
            v[1]++;
        else
            v[2]++;
    }
    // printf("%d %d %d\n", v[0], v[1], v[2]);
    cout << v[0] * v[1] * v[2] << endl;
}

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
}
