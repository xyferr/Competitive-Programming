#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    unordered_map<ll,ll> m;
    for(ll i=0; i<n; i++){
        m[v[i]]++;
    }
    if(m.size()==1){
        cout<<"No"<<endl;
        return;
    }
   ll max_el = *max_element(v.begin(), v.end());
   bool flag = true;
   cout<<"Yes"<<endl;
   for(ll i=0; i<n; i++){
        if(v[i]==max_el && flag){
            cout<<2<<" ";
            flag = false;

        }
        else{
            cout<<1<<" ";
        }

   }
   cout<<endl;






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

