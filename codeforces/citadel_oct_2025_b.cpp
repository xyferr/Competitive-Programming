#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;


bool vidita(long long T, int n, const map<int, int>& counts) {
    long long otm = 0;      
    long long intm = 0; 
    for (int i = 1; i <= n; ++i) {
        int count = 0;
        if (counts.count(i)) {
            count = counts.at(i);
        }
        if (count > T) {
            otm += (count - T);
        } else {
            intm += (T - count) / 2;
        }
    }
   return intm >= otm;
}


int getMinTime(int n, vector<int> cache) {

    int m = cache.size();
    map<int, int> counts;
    for (int it : cache) {
        counts[it]++;
    }
    long long low = 1;
    long long high = (long long)m * 2;
    int res = high;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        
        if (vidita(mid, n, counts)) {
            res = mid;
            high = mid - 1;
        } else {
            
            low = mid + 1;
        }
    }

    return res;
}

void solve(){
    int n,m; cin>>n>>m;
    vector<int> cache(m);
    for(int i=0; i<m; i++){
        cin>>cache[i];
    }
    cout<<getMinTime(n,cache)<<endl;
}













int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1;
    cin >> T;
    while (T--) {
        
        solve();
    }
    return 0;
}