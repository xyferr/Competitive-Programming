#include<bits/stdc++.h>
#define ll long long
using namespace std;



ll getMaxMST(ll n, ll m) {
    ll low = 0, high = n - 1, res = 0;
    while (low <= high) {
        ll mid = (low + high) / 2;
        ll total = mid * n - (mid * (mid + 1)) / 2;
        if (total <= m) {
            res = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return res;
}

void solve() {
    ll n,m; cin>>n>>m;
    ll edges = n*(n-1)/2;
    ll zero_edge = edges - m;
    ll min_mst = (n-1) - zero_edge;
    ll cnt = 0;
    ll mix = 0;
    ll inc = 1;
    // while(true){
        
    //     mix += (n-inc++);
    //     if(mix<=m){
    //         cnt++;
    //     }
    //     else{
    //         break;
    //     }
    //     if(n-inc<=0){
    //         break;
    //     }
    // }
    // // cerr<<cnt<<"cnt"<<endl;

    // ll max_mst = cnt;
    cnt = getMaxMST(n,m);
    min_mst--;
    min_mst = max(0LL,min_mst);
    ll ans = cnt*(cnt+1)/2 - (min_mst*(min_mst+1)/2);
    cout<<ans<<endl;





}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; 
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}

