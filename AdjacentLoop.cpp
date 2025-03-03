#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 5;  // Number of nodes
    vector<vector<pair<int, int>>> adj(n); // Adjacency list (Weighted Graph)

    // Adding edges (node, weight)
    adj[0].push_back({1, 10});  // Edge 0 -> 1 with weight 10
    adj[0].push_back({2, 5});   // Edge 0 -> 2 with weight 5
    adj[1].push_back({3, 7});   // Edge 1 -> 3 with weight 7
    adj[1].push_back({4, 8});   // Edge 1 -> 4 with weight 8
    adj[2].push_back({4, 2});   // Edge 2 -> 4 with weight 2

    int u = 1;  // Choosing node 1

    cout << "Neighbors of node " << u << ":\n";
    for (auto &neighbor : adj[u]) {
        int v = neighbor.first;  // Neighboring node
        int weight = neighbor.second; // Edge weight
        cout << "Node: " << v << ", Weight: " << weight << endl;
    }

    return 0;
}
