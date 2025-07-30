import heapq

# --- TEMPLATE START ---

# Min-Heap Functions
# heapq implements a min-heap by default.
# The heap is just a standard list.
def min_heap_push(h, item):
    heapq.heappush(h, item)

def min_heap_pop(h):
    return heapq.heappop(h)

# Max-Heap Functions (by storing negative values)
# This works for numbers. For tuples, negate the priority element.
def max_heap_push(h, item):
    heapq.heappush(h, -item)

def max_heap_pop(h):
    return -heapq.heappop(h)

def max_heap_top(h):
    return -h[0]

# --- TEMPLATE END ---

def solve():
    # --- Example 1: Min-Heap of integers ---
    min_h = []
    min_heap_push(min_h, 20)
    min_heap_push(min_h, 5)
    min_heap_push(min_h, 10)
    print(f"Min-Heap top: {min_h[0]}") # 5
    min_heap_pop(min_h)

    # --- Example 2: Max-Heap of integers ---
    max_h = []
    max_heap_push(max_h, 20)
    max_heap_push(max_h, 5)
    max_heap_push(max_h, 100)
    print(f"Max-Heap top: {max_heap_top(max_h)}") # 100
    max_heap_pop(max_h)

    # --- Example 3: Min-Heap of tuples (useful for Dijkstra) ---
    # Tuples are compared element by element, which is perfect.
    dijkstra_pq = []
    min_heap_push(dijkstra_pq, (10, 1)) # (distance, node)
    min_heap_push(dijkstra_pq, (5, 2))
    min_heap_push(dijkstra_pq, (10, 0))
    print(f"Dijkstra next node: {dijkstra_pq[0]}") # (5, 2)

    # --- Example 4: Max-Heap of custom data using tuples ---
    # To get max-heap behavior, negate the priority element of the tuple.
    item_max_h = []
    # Push as (-priority, data1, data2, ...)
    min_heap_push(item_max_h, (-50, 1, "Item A"))
    min_heap_push(item_max_h, (-100, 2, "Item B"))
    
    top_item = item_max_h[0]
    print(f"Max value item ID: {top_item[1]}") # 2
    print(f"Max value: {-top_item[0]}") # 100

solve()