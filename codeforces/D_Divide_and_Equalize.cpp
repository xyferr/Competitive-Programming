#include<bits/stdc++.h>
#define ll long long
using namespace std;


vector<int> prime_factorization(int n){
    vector<int> factors;
    while(n%2==0){
        factors.push_back(2);
        n=n/2;
    }

    for(int i=3; i*i<=n; i+=2){
        while(n%i==0){
            factors.push_back(i);
            n=n/i;
        }
    }

    if(n>2) factors.push_back(n);

    return factors;


}


void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];


    unordered_map<ll,ll> mp;

    for(auto it:v){
        
        vector<int> fill=prime_factorization(it);
        for(auto num: fill){
            mp[num]++;
        }
    }
    ll len = mp.size();
    for(auto it:mp){
        // cerr<<it.first<<"-"<<it.second<<" ";
        if(it.second%n!=0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    // cerr<<endl;
    



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

