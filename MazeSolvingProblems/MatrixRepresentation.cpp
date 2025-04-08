//Representation using adjecency list.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    
    // Input: number of nodes (n) and edges (m)
    cout << "Enter number of nodes (n) and edges (m): ";
    cin >> n >> m;

    // Adjacency list representation
    vector<vector<int>> adj(n + 1);

    cout << "Enter " << m << " edges (u v):" << endl;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        // Adding edge to the adjacency list
        adj[u].push_back(v);
        adj[v].push_back(u); // For undirected graph
    }

    // Printing the adjacency list
    cout << "Adjacency List:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " -> ";
        for (int neighbor : adj[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    return 0;
}
