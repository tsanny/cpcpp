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
    string s, t;
    cin >> s >> t;

    map<char, vector<int>> ti;
    for (int slice = 1; slice < (int)s.size(); slice++) {


        for (int j = 0; j < slice; j++) {
            string cut = "";


            for (int i = j; i < (int)s.size(); i+=slice) {
                cut += s[i];
                // if (i + slice + j >= s.size()) break;
                // printf("currently slicing per %d, i=%d, j=%d", slice, i, j);
            }
            // cout << cut << endl;





            if (cut == t) {
                cout << "Yes" << endl;
                return;
            }
        }
        // cout << endl;
    }

    cout << "No" << endl;
}

int main() {
    int tc = 1;
    /* cin >> tc; */
    while (tc--)
        solve();
}

