import sys

# --- CP TEMPLATE START ---

# For faster I/O
# sys.stdin = open('in.txt', 'r')
# sys.stdout = open('out.txt', 'w')

# It's recommended to increase recursion limit for deep DFS/DSU problems
# sys.setrecursionlimit(10**6)

# --- Disjoint Set Union (DSU) / Union-Find ---
# Optimized with Path Compression and Union by Rank.
# Operations are nearly constant time on average (Amortized O(α(n))).
class DSU:
    def __init__(self, n):
        """
        Initializes n items, each in its own set.
        Using 1-based indexing for n nodes.
        """
        self.parent = list(range(n + 1))
        self.rank = [0] * (n + 1)

    def find(self, i):
        """Finds the representative of the set containing i, with path compression."""
        if self.parent[i] == i:
            return i
        # Path compression
        self.parent[i] = self.find(self.parent[i])
        return self.parent[i]

    def unite(self, i, j):
        """
        Merges the sets containing i and j, using union by rank.
        Returns True if they were merged, False if they were already in the same set.
        """
        root_i = self.find(i)
        root_j = self.find(j)

        if root_i != root_j:
            # Attach shorter tree to taller tree
            if self.rank[root_i] < self.rank[root_j]:
                self.parent[root_i] = root_j
            elif self.rank[root_i] > self.rank[root_j]:
                self.parent[root_j] = root_i
            else:
                # If ranks are same, break tie and increment rank
                self.parent[root_j] = root_i
                self.rank[root_i] += 1
            return True
        return False

# --- TEMPLATE END ---

def main():
    """Example Usage"""
    n = 7  # Number of items
    dsu = DSU(n)

    print(f"Initially, are 1 and 2 connected? {'Yes' if dsu.find(1) == dsu.find(2) else 'No'}")
    
    print("Uniting 1 and 2...")
    dsu.unite(1, 2)
    print(f"Now, are 1 and 2 connected? {'Yes' if dsu.find(1) == dsu.find(2) else 'No'}")

    print("Uniting 3 and 4...")
    dsu.unite(3, 4)
    
    print("Uniting 1 and 4...")
    dsu.unite(1, 4)

    print(f"Now, find(3) is: {dsu.find(3)}")
    print(f"And find(2) is: {dsu.find(2)}")
    print(f"Are 2 and 3 connected? {'Yes' if dsu.find(2) == dsu.find(3) else 'No'}")

    result = "Merged" if dsu.unite(1, 3) else "Already in same set"
    print(f"Trying to unite 1 and 3 (already connected): {result}")

if __name__ == "__main__":
    main()