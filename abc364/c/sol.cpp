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

const ll INF = 2e18 + 1;
ll n, xweet, yalty;
vector<ll> A, B;
ll minn = INF;
ll sumA = 0, sumB = 0;

void solve() {
    cin >> n >> xweet >> yalty;
    A = vector<ll>(n);
    B = vector<ll>(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        sumA += A[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> B[i];
        sumB += B[i];
    }

    if (sumA <= xweet && sumB <= yalty) {
        cout << n << endl;
        return;
    }

    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());

    ll cnt = 0, x = 0, y = 0;
    for (auto a : A) {
        x += a;
        cnt++;
        if (x > xweet)
            break;
    }
    ll cnt2 = 0;
    for (auto b : B) {
        y += b;
        cnt2++;
        if (y > yalty)
            break;
    }

    cout << min(cnt, cnt2) << endl;
}

int main() {
    int tc = 1;
    /* cin >> tc; */
    while (tc--)
        solve();
}
