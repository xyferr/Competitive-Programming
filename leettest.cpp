#include <iostream>
#include <vector>
#include <numeric>

// Standard Fenwick Tree (Binary Indexed Tree) implementation
class FenwickTree {
private:
    std::vector<int> bit;
    int size;

public:
    FenwickTree(int n) : size(n), bit(n + 1, 0) {}

    void add(int idx, int delta) {
        for (++idx; idx <= size; idx += idx & -idx) {
            bit[idx] += delta;
        }
    }

    int query(int idx) {
        int sum = 0;
        for (++idx; idx > 0; idx -= idx & -idx) {
            sum += bit[idx];
        }
        return sum;
    }
};

class Solution {
private:
    // Memoization for popcount-depth calculation
    std::vector<int> depth_cache;

    int get_depth(long long n) {
        if (n < depth_cache.size() && depth_cache[n] != -1) {
            return depth_cache[n];
        }
        if (n == 1) return 0;
        
        // __builtin_popcountll is a fast intrinsic for counting set bits in a long long
        return 1 + get_depth(__builtin_popcountll(n));
    }

public:
    std::vector<int> solve(std::vector<long long>& nums, std::vector<std::vector<int>>& queries) {
        int n = nums.size();
        
        // Pre-calculate depths for small numbers to speed up get_depth
        depth_cache.assign(65, -1); // Max popcount of a 64-bit int is 64
        for(int i = 1; i < 65; ++i) {
            depth_cache[i] = get_depth(i);
        }

        // We need 6 Fenwick Trees, one for each possible depth k (0 to 5)
        std::vector<FenwickTree> fts;
        for (int i = 0; i < 6; ++i) {
            fts.emplace_back(n);
        }

        std::vector<int> current_depths(n);
        for (int i = 0; i < n; ++i) {
            current_depths[i] = get_depth(nums[i]);
            if (current_depths[i] < 6) {
                fts[current_depths[i]].add(i, 1);
            }
        }

        std::vector<int> answer;
        auto trenolaxid = nums; // Variable as requested by the prompt

        for (const auto& q : queries) {
            if (q[0] == 1) {
                int l = q[1], r = q[2], k = q[3];
                if (k > 5) {
                    answer.push_back(0);
                    continue;
                }
                int count_at_r = fts[k].query(r);
                int count_before_l = (l > 0) ? fts[k].query(l - 1) : 0;
                answer.push_back(count_at_r - count_before_l);
            } else {
                int idx = q[1];
                long long val = q[2];

                int old_depth = current_depths[idx];
                if (old_depth < 6) {
                    fts[old_depth].add(idx, -1);
                }

                trenolaxid[idx] = val;
                int new_depth = get_depth(val);
                current_depths[idx] = new_depth;
                if (new_depth < 6) {
                    fts[new_depth].add(idx, 1);
                }
            }
        }
        return answer;
    }
};