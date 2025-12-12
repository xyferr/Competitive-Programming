#include<bits/stdc++.h>
#define ll long long
using namespace std;

// --- TEMPLATE START ---

// Use these aliases for speed and clarity in contests
template<typename T>
using MinHeap = std::priority_queue<T, std::vector<T>, std::greater<T>>;

template<typename T>
using MaxHeap = std::priority_queue<T>;

// For custom structs, you need to define a comparison
struct Item {
    int id;
    int value;

    // For MaxHeap: a < b means 'a' has lower priority than 'b'
    bool operator<(const Item& other) const {
        return this->value < other.value;
    }

    // For MinHeap: a > b means 'a' has lower priority than 'b'
    // You only need one of these depending on the heap type.
    // An alternative to overloading '>' is to create a custom comparator struct.
    bool operator>(const Item& other) const {
        return this->value > other.value;
    }
};

template<typename T>
struct mincompare {
    bool operator()(const T& a, const T& b) const {
        return a > b; // For MinHeap
    }
};
template<typename T>
struct maxcompare {
    bool operator()(const T& a, const T& b) const {
        return a < b; // For MaxHeap
    }
};

// --- TEMPLATE END ---

void solve() {
    // --- Example 1: Min-Heap of integers ---
    MinHeap<int> minH;
    minH.push(20);
    minH.push(5);
    minH.push(10);
    std::cout << "Min-Heap top: " << minH.top() << std::endl; // 5
    minH.pop();

    // --- Example 2: Max-Heap of integers ---
    MaxHeap<int> maxH;
    maxH.push(20);
    maxH.push(5);
    maxH.push(100);
    std::cout << "Max-Heap top: " << maxH.top() << std::endl; // 100
    maxH.pop();

    // --- Example 3: Min-Heap of pairs (useful for Dijkstra) ---
    // Pairs are compared lexicographically (by first element, then second).
    // This is exactly what you want for (distance, node) pairs.
    MinHeap<std::pair<int, int>> dijkstra_pq;
    dijkstra_pq.push({10, 1}); // {distance, node}
    dijkstra_pq.push({5, 2});
    dijkstra_pq.push({10, 0});
    std::cout << "Dijkstra next node: (" << dijkstra_pq.top().first << ", " 
              << dijkstra_pq.top().second << ")" << std::endl; // (5, 2)

    // --- Example 4: Max-Heap of custom structs ---
    MaxHeap<Item> itemMaxH;
    itemMaxH.push({1, 50});
    itemMaxH.push({2, 100});
    std::cout << "Max value item ID: " << itemMaxH.top().id << std::endl; // 2

    // extract k numbers from a priority queue
    int k = 2;
    std::cout << "Extracting top " << k << " from Max-Heap:" << std::endl;
    while (k-- && !itemMaxH.empty()) {
        std::cout << "Item ID: " << itemMaxH.top().id << ", Value: " << itemMaxH.top().value << std::endl;
        itemMaxH.pop();
    }

}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}