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

const int INF = 1e9;
void bfs(int start, vector<vector<int>> &adjacency_list) {
  int n = adjacency_list.size();  // Number of vertices in the graph
  vector<bool> visited(n, false); // Keep track of visited vertices
  queue<int> q;                   // Queue for BFS

  // Start BFS from the given starting node
  visited[start] = true;
  q.push(start);

  while (!q.empty()) {
    int current = q.front();
    q.pop();
    cout << "Visiting node: " << current << endl; // Example operation

    // Go through all adjacent vertices
    for (int next : adjacency_list[current]) {
      if (!visited[next]) {
        visited[next] = true;
        q.push(next);
      }
    }
  }
}

void solve() {
  int n;
  cin >> n; // Number of vertices
  vector<vector<int>> adjacency_list(n);

  // Assuming edges are provided as input pairs
  for (int i = 0; i < n - 1; ++i) {
    int u, v;
    cin >> u >> v; // Input is 0-based index
    adjacency_list[u].push_back(v);
    adjacency_list[v].push_back(u); // Uncomment if graph is undirected
  }

  // Perform BFS starting from node 0 (or any other node as required)
  bfs(0, adjacency_list);
}

int main() {
  /* int t; */
  /*    cin >> t; */
  /*    while (t--) */
  solve();
}
