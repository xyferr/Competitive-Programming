#include<bits/stdc++.h>
#define ll long long

using namespace std;
void prv(vector<ll>&vec);



void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    if(v[0]!=1){
        cout<<"NO\n";
        return;
    }
    long long sum = v[0];
    for(int i = 1; i < n; ++i) {
        if(sum < v[i]) {
            cout << "NO\n";
            return;
        }
        sum += v[i];
    }
    cout << "YES\n";




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

void prv(vector<ll>&vec){
    for(auto it: vec){
        cout<<it<<" ";
    }
    cout<<endl;
}