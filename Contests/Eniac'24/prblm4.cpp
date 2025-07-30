#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool canPlaceGamers(vector<int>& positions, int dist, int k) {
    int count = 1, lastPosition = positions[0];
    for (int i = 1; i < positions.size(); i++) {
        if (positions[i] - lastPosition >= dist) {
            count++;
            lastPosition = positions[i];
        }
        if (count == k) return true;
    }
    return false;
}


void solve() {
    int n, k; cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    int low = 1, high = v.back() -v[0];
    int result = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (canPlaceGamers(v, mid, k)) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout<<result<<endl;   
}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}

