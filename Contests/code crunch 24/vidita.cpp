#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

#define int long long

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int max1 = 0, max2 = 0, maxIdx = -1;

    for (int i = 0; i < n; i++) {
        int currMax1 = INT_MIN, currMax2 = INT_MIN, currMaxIdx = -1;

        for (int j = 0; j < m; j++) {
            int currGain = grid[i][j];
            if (j == maxIdx) {
                currGain += max2;
            } else {
                currGain += max1;
            }

            if (currGain > currMax1) {
                currMax2 = currMax1;
                currMax1 = currGain;
                currMaxIdx = j;
            } else if (currGain > currMax2) {
                currMax2 = currGain;
            }
        }

        max1 = currMax1;
        max2 = currMax2;
        maxIdx = currMaxIdx;
    }

    cout << max1 << endl;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
