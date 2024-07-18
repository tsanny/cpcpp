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
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    double ac2 = (xa - xc) * (xa - xc) + (ya - yc) * (ya - yc);
    double ab2 = (xa - xb) * (xa - xb) + (ya - yb) * (ya - yb);
    double cb2 = (xc - xb) * (xc - xb) + (yc - yb) * (yc - yb);

    if ((ac2 + ab2 == cb2) || (ac2 + cb2 == ab2) || (cb2 + ab2 == ac2)

    ) {
        cout << "Yes" << endl;
        return;
    }
    cout << "No" << endl;
}

int main() {
    int tc = 1;
    /* cin >> tc; */
    while (tc--)
        solve();
}
