#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll getMEX(vector < ll > & a) {
  int n = 2*1e5;
  unordered_set < int > hash(a.begin(), a.end());
  for (int i = 0; i <= n + 1; i++) {
    if (hash.find(i) == hash.end()) {
      return i;
    }
  }
}


void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

  

    map<ll,ll> mp;
    for(auto it: v){
        mp[it]++;
    }
    sort(v.begin(),v.end());
    ll len = v[n-1];
    ll miss_element;
    for(ll i=0; i<=len+1; i++){
        if(mp[i]==0){
            miss_element = i;
            break;
        }
    }


    vector<ll> ans;
    ll flag=0;

    for(auto it: mp){
        if(it.second==1){
            flag++;
            ans.push_back(it.first);
        }
        if(flag==2){
            break;
        }
    }

    if(flag==2){
        if(miss_element<ans[1]){
            cout<<miss_element<<'\n';
        }
        else{
            cout<<ans[1]<<'\n';
        }
    }
    else{
        cout<<miss_element<<'\n';
    }




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

