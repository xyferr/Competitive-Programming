import sys
import collections
import heapq

# --- CP TEMPLATE START ---

# For faster I/O
# sys.stdin = open('in.txt', 'r')
# sys.stdout = open('out.txt', 'w')

# It's recommended to increase recursion limit for deep DFS problems
# sys.setrecursionlimit(10**6)

# Adjacency list representation
# For unweighted graphs: adj = collections.defaultdict(list)
# For weighted graphs: adj = collections.defaultdict(list) where adj[u].append((v, w))

INF = float('inf')

# --- Disjoint Set Union (DSU) / Union-Find ---
class DSU:
    def __init__(self, n):
        # Using 1-based indexing for n nodes
        self.parent = list(range(n + 1))

    def find(self, i):
        if self.parent[i] == i:
            return i
        # Path compression
        self.parent[i] = self.find(self.parent[i])
        return self.parent[i]

    def unite(self, i, j):
        root_i = self.find(i)
        root_j = self.find(j)
        if root_i != root_j:
            self.parent[root_i] = root_j

# --- Breadth-First Search (BFS) ---
# Use for shortest path in unweighted graphs.
# Returns a list of distances from the start node.
def bfs(start_node, n, adj):
    # Using 1-based indexing
    dist = [-1] * (n + 1)
    q = collections.deque()

    dist[start_node] = 0
    q.append(start_node)

    while q:
        u = q.popleft()

        for v in adj[u]:
            if dist[v] == -1:
                dist[v] = dist[u] + 1
                q.append(v)
    return dist

# --- Depth-First Search (DFS) ---
# Use for connectivity, cycle detection, path finding, etc.
def dfs_util(u, visited, adj):
    visited[u] = True
    # Process node u here
    # print(f"Visiting node {u}")
    for v in adj[u]:
        if not visited[v]:
            dfs_util(v, visited, adj)

def dfs(start_node, n, adj):
    # Using 1-based indexing
    visited = [False] * (n + 1)
    dfs_util(start_node, visited, adj)

# --- Dijkstra's Algorithm ---
# Use for shortest path in weighted graphs with non-negative weights.
# Returns a list of shortest distances from the start node.
def dijkstra(start_node, n, adj):
    # Using 1-based indexing
    dist = [INF] * (n + 1)
    dist[start_node] = 0
    
    # Min-priority queue storing (distance, node)
    pq = [(0, start_node)]

    while pq:
        d, u = heapq.heappop(pq)

        if d > dist[u]:
            continue

        for v, weight in adj[u]:
            if dist[u] + weight < dist[v]:
                dist[v] = dist[u] + weight
                heapq.heappush(pq, (dist[v], v))
    return dist

# --- TEMPLATE END ---

def main():
    """Example Usage"""
    n = 5  # Number of nodes

    # --- DSU Example ---
    print("DSU Example:")
    dsu = DSU(n)
    dsu.unite(1, 2)
    dsu.unite(3, 4)
    print(f"Find(1): {dsu.find(1)}, Find(2): {dsu.find(2)}")
    print(f"Find(3): {dsu.find(3)}, Find(4): {dsu.find(4)}")
    print(f"Are 1 and 4 connected? {'Yes' if dsu.find(1) == dsu.find(4) else 'No'}")
    dsu.unite(1, 4)
    print(f"Are 1 and 4 connected now? {'Yes' if dsu.find(1) == dsu.find(4) else 'No'}")
    print("---")

    # --- BFS/DFS Example ---
    print("BFS/DFS Example:")
    adj_unweighted = collections.defaultdict(list)
    edges = [(1, 2), (2, 3), (3, 4), (4, 5)]
    for u, v in edges:
        adj_unweighted[u].append(v)
        adj_unweighted[v].append(u)

    bfs_dist = bfs(1, n, adj_unweighted)
    print(f"Shortest distance from 1 to 5 (BFS): {bfs_dist[5]}")
    print("---")

    # --- Dijkstra Example ---
    print("Dijkstra Example:")
    adj_weighted = collections.defaultdict(list)
    weighted_edges = [
        (1, 2, 10), (1, 3, 3), (2, 3, 1), (2, 4, 2),
        (3, 2, 4), (3, 4, 8), (3, 5, 2), (4, 5, 7), (5, 4, 9)
    ]
    for u, v, w in weighted_edges:
        adj_weighted[u].append((v, w))

    dijkstra_dist = dijkstra(1, n, adj_weighted)
    print(f"Shortest distance from 1 to 5 (Dijkstra): {dijkstra_dist[5]}") # Expected: 3+2=5

if __name__ == "__main__":
    main()