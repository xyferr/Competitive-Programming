#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n,m,k; cin>>n>>m>>k;
    vector<ll> a(n),b(m);
    for(ll i=0; i<n; i++) cin>>a[i];
    for(ll i=0; i<m; i++) cin>>b[i];

    unordered_map<ll,ll> mpa , mpb;
    for(ll i=0; i<n; i++){
        if(a[i]<=k) mpa[a[i]]++;
    }
    for(ll i=0; i<m; i++){
        if(b[i]<=k) mpb[b[i]]++;
    }


    for(ll i=1; i<=k; i++){
        if(mpa.find(i)==mpa.end() && mpb.find(i)==mpb.end()){
            cout<<"NO\n";
            return;
        }
    }
 
    

    for(ll i=1; i<=k; i++){
        if(mpa.find(i)!=mpa.end() && mpb.find(i)!=mpb.end()){
            if(mpa.size()<mpb.size()){
                mpb.erase(i);
            }
            else{
                mpa.erase(i);
            }
        }
    }
    // for(auto it:mpa){
    //     cout<<it.first<<" ";
    // }
    // cout<<'\n';
    // for(auto it:mpb){
    //     cout<<it.first<<" ";
    // }
    // cout<<'\n';
    if(mpa.size()>= (k/2) && mpb.size()>=(k/2)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }





}












template <typename T>
void prv(const vector<T>& vec) {
    for (const auto& element : vec) {
        cout << element << " ";
    }
    cout <<'\n';
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

