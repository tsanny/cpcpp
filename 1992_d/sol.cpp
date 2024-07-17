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

    int n, mx_jmp, k_swims;
    cin >> n >> mx_jmp >> k_swims;

    string s;
    cin >> s;

    vector<int> logs;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') {
            logs.push_back(i);
        }
    }
    logs.push_back(n + 1);

    int l = -1;
    int next_log = 0;
    while (l < n - 1) {
        // jump to any reachable log
        if (mx_jmp >= logs[next_log] - l) {
            l = logs[next_log];
        } else {
            // only water or crocodiles on range
            l += mx_jmp;     // try jumping furthest
            if (l > n - 1) { // check if reached land
                cout << "Yes" << endl;
                return;
            }
            while (l < n && l < logs[next_log]) { // swim until next log
                if (s[l] != 'C' && k_swims > 0) {
                    l++;
                    k_swims--;
                } else { // Crocodile encountered: not possible!
                    cout << "No" << endl;
                    return;
                }
            }
        }
        next_log++;
    }
    cout << "Yes" << endl;
}

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
}
