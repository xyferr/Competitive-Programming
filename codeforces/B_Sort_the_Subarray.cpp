#include<bits/stdc++.h>
#define ll long long
#define debug(x) cerr << #x << " = " << x << endl
#define debug2(x, y) cerr << #x << " = " << x << ", " << #y << " = " << y << endl

using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n),a(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    for(ll i=0; i<n; i++) cin>>a[i];

    ll left, right;
    for(ll i=0; i<n; i++){
        if(v[i]!=a[i]){
            left = i;
            break;
        }
    }
    for(ll i=n-1; i>=0; i--){
        if(v[i]!=a[i]){
            right = i;
            break;
        }
    }
    while(left>0 && a[left-1]<=a[left]) left--;
    while(right<n-1 && a[right+1]>=a[right]) right++;

    // debug2(count,high);
    cout<<left+1<<" "<<right+1<<endl;
    



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
