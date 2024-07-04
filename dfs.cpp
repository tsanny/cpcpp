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
vector<bool> visited; // Global variable to keep track of visited nodes
vector<vector<int>> adjacency_list; // Adjacency list to represent the graph

// DFS function
void dfs(int node) {
  visited[node] = true;                     // Mark the current node as visited
  cout << "Visiting node " << node << endl; // For demonstration

  // Recur for all the vertices adjacent to this vertex
  for (int adjNode : adjacency_list[node]) {
    if (!visited[adjNode]) {
      dfs(adjNode);
    }
  }
}

void solve() {
  int n;
  cin >> n; // Number of nodes
  adjacency_list.resize(n);
  visited.resize(n, false); // Initialize visited vector with 'false'

  // Assuming the graph is undirected and the input is given as edge pairs
  int m; // Number of edges
  cin >> m;
  for (int i = 0; i < m; ++i) {
    int u, v; // vertices of an edge
    cin >> u >> v;
    // Assuming 0-based indexing. If input is 1-based, subtract 1 from u and v
    adjacency_list[u].push_back(v);
    adjacency_list[v].push_back(
        u); // Comment this line if the graph is directed
  }

  // Call dfs for each unvisited node (for disconnected graphs)
  for (int i = 0; i < n; ++i) {
    if (!visited[i]) {
      dfs(i);
    }
  }
}

int main() {
  /* int t; */
  /*    cin >> t; */
  /*    while (t--) */
  solve();
}
