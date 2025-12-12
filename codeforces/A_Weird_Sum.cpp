#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;

ll calculate_distance_sum(vector<ll>& coords) {
    if (coords.size() <= 1) {
        return 0;
    }
    sort(coords.begin(), coords.end());
    ll total_dist = 0;
    ll prefix_sum = 0;
    for (ll i = 0; i < coords.size(); ++i) {
         
        total_dist += (i * coords[i]) - prefix_sum;
        prefix_sum += coords[i];
    }
    return total_dist;
}

void solve() {
    int n, m; 
    cin >> n >> m;
    
    // Map to store coordinates for each color
    // Key: color, Value: pair of vectors {row_coords, col_coords}
    map<int, pair<vector<ll>, vector<ll>>> colors;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int color;
            cin >> color;
            colors[color].first.push_back(i);
            colors[color].second.push_back(j);
        }
    }

    ll total_weird_sum = 0;
    for (auto const& [color, coords_pair] : colors) {
        // The vectors are copied here, which is fine for this problem size.
        auto row_coords = coords_pair.first;
        auto col_coords = coords_pair.second;
        
        total_weird_sum += calculate_distance_sum(row_coords);
        total_weird_sum += calculate_distance_sum(col_coords);
    }

    cout << total_weird_sum << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; 
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}

