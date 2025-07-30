#include<bits/stdc++.h>
#define ll long long
using namespace std;
// --- CP TEMPLATE START ---

// Common type aliases

using pii = std::pair<int, int>;
using pll = std::pair<ll, ll>;

// Adjacency list representation
// For unweighted graphs: std::vector<std::vector<int>> adj;
// For weighted graphs: std::vector<std::vector<pii>> adj; (stores {neighbor, weight})

const int INF_INT = 1e9;
const ll INF_LL = 1e18;

// --- Disjoint Set Union (DSU) / Union-Find ---
struct DSU {
    std::vector<int> parent;
    DSU(int n) {
        parent.resize(n + 1);
        std::iota(parent.begin(), parent.end(), 0); // Fills with 0, 1, 2, ...
    }
    int find(int i) {
        if (parent[i] == i)
            return i;
        return parent[i] = find(parent[i]); // Path compression
    }
    void unite(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);
        if (root_i != root_j) {
            parent[root_i] = root_j;
        }
    }
};

// --- Breadth-First Search (BFS) ---
// Use for shortest path in unweighted graphs.
// Returns a vector of distances from the start node.
std::vector<int> bfs(int start_node, int n, const std::vector<std::vector<int>>& adj) {
    std::vector<int> dist(n + 1, -1);
    std::queue<int> q;

    dist[start_node] = 0;
    q.push(start_node);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    return dist;
}

// --- Depth-First Search (DFS) ---
// Use for connectivity, cycle detection, path finding, etc.
void dfs_util(int u, std::vector<bool>& visited, const std::vector<std::vector<int>>& adj) {
    visited[u] = true;
    // Process node u here
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs_util(v, visited, adj);
        }
    }
}

void dfs(int start_node, int n, const std::vector<std::vector<int>>& adj) {
    std::vector<bool> visited(n + 1, false);
    dfs_util(start_node, visited, adj);
}

// --- Dijkstra's Algorithm ---
// Use for shortest path in weighted graphs with non-negative weights.
// Returns a vector of shortest distances from the start node.
std::vector<ll> dijkstra(int start_node, int n, const std::vector<std::vector<pll>>& adj) {
    std::vector<ll> dist(n + 1, INF_LL);
    dist[start_node] = 0;
    
    // Min-priority queue storing {distance, node}
    std::priority_queue<pll, std::vector<pll>, std::greater<pll>> pq;
    pq.push({0, start_node});

    while (!pq.empty()) {
        ll d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d > dist[u]) {
            continue;
        }

        for (auto& edge : adj[u]) {
            int v = edge.first;
            ll weight = edge.second;
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}

// --- TEMPLATE END ---

void solve() {
    // Example Usage
    int n = 5; // Number of nodes
    
    // --- DSU Example ---
    std::cout << "DSU Example:" << std::endl;
    DSU dsu(n);
    dsu.unite(1, 2);
    dsu.unite(3, 4);
    std::cout << "Find(1): " << dsu.find(1) << ", Find(2): " << dsu.find(2) << std::endl;
    std::cout << "Find(3): " << dsu.find(3) << ", Find(4): " << dsu.find(4) << std::endl;
    std::cout << "Are 1 and 4 connected? " << (dsu.find(1) == dsu.find(4) ? "Yes" : "No") << std::endl;
    dsu.unite(1, 4);
    std::cout << "Are 1 and 4 connected now? " << (dsu.find(1) == dsu.find(4) ? "Yes" : "No") << std::endl;
    std::cout << "---" << std::endl;

    // --- BFS/DFS Example ---
    std::cout << "BFS/DFS Example:" << std::endl;
    std::vector<std::vector<int>> adj_unweighted(n + 1);
    adj_unweighted[1].push_back(2);
    adj_unweighted[2].push_back(1);
    adj_unweighted[2].push_back(3);
    adj_unweighted[3].push_back(2);
    adj_unweighted[3].push_back(4);
    adj_unweighted[4].push_back(3);
    adj_unweighted[4].push_back(5);
    adj_unweighted[5].push_back(4);

    std::vector<int> bfs_dist = bfs(1, n, adj_unweighted);
    std::cout << "Shortest distance from 1 to 5 (BFS): " << bfs_dist[5] << std::endl;
    std::cout << "---" << std::endl;

    // --- Dijkstra Example ---
    std::cout << "Dijkstra Example:" << std::endl;
    std::vector<std::vector<pll>> adj_weighted(n + 1);
    adj_weighted[1].push_back({2, 10});
    adj_weighted[1].push_back({3, 3});
    adj_weighted[2].push_back({3, 1});
    adj_weighted[2].push_back({4, 2});
    adj_weighted[3].push_back({2, 4});
    adj_weighted[3].push_back({4, 8});
    adj_weighted[3].push_back({5, 2});
    adj_weighted[4].push_back({5, 7});
    adj_weighted[5].push_back({4, 9});

    std::vector<ll> dijkstra_dist = dijkstra(1, n, adj_weighted);
    std::cout << "Shortest distance from 1 to 5 (Dijkstra): " << dijkstra_dist[5] << std::endl; // Expected: 3+2=5
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
