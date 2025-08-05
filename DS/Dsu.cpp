#include <iostream>
#include <vector>
#include <numeric>

// --- CP TEMPLATE START ---

// For fast I/O
void setup_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}

// --- Disjoint Set Union (DSU) / Union-Find ---
// Optimized with Path Compression and Union by Rank.
// Operations are nearly constant time on average (Amortized O(α(n))).
struct DSU {
    std::vector<int> parent;
    std::vector<int> rank;

    // Constructor: Initializes n items, each in its own set.
    // Using 1-based indexing for n nodes.
    DSU(int n) {
        parent.resize(n + 1);
        // Fills the parent array such that parent[i] = i
        std::iota(parent.begin(), parent.end(), 0);
        rank.assign(n + 1, 0);
    }

    // Find operation with Path Compression
    int find(int i) {
        if (parent[i] == i) {
            return i;
        }
        // Recursively find the root and apply path compression
        return parent[i] = find(parent[i]);
    }

    // Unite operation with Union by Rank
    // Returns true if they were merged, false if they were already in the same set.
    bool unite(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);
        if (root_i != root_j) {
            // Attach shorter tree to taller tree
            if (rank[root_i] < rank[root_j]) {
                parent[root_i] = root_j;
            } else if (rank[root_i] > rank[root_j]) {
                parent[root_j] = root_i;
            } else {
                // If ranks are same, break tie and increment rank
                parent[root_j] = root_i;
                rank[root_i]++;
            }
            return true;
        }
        return false;
    }
};

// --- TEMPLATE END ---

void solve() {
    // Example Usage
    int n = 7; // Number of items
    DSU dsu(n);

    std::cout << "Initially, are 1 and 2 connected? " << (dsu.find(1) == dsu.find(2) ? "Yes" : "No") << std::endl;
    
    std::cout << "Uniting 1 and 2..." << std::endl;
    dsu.unite(1, 2);
    std::cout << "Now, are 1 and 2 connected? " << (dsu.find(1) == dsu.find(2) ? "Yes" : "No") << std::endl;

    std::cout << "Uniting 3 and 4..." << std::endl;
    dsu.unite(3, 4);
    
    std::cout << "Uniting 1 and 4..." << std::endl;
    dsu.unite(1, 4);

    std::cout << "Now, find(3) is: " << dsu.find(3) << std::endl;
    std::cout << "And find(2) is: " << dsu.find(2) << std::endl;
    std::cout << "Are 2 and 3 connected? " << (dsu.find(2) == dsu.find(3) ? "Yes" : "No") << std::endl;

    std::cout << "Trying to unite 1 and 3 (already connected): " << (dsu.unite(1, 3) ? "Merged" : "Already in same set") << std::endl;
}

int main() {
    setup_io();
    solve();
    return 0;
}