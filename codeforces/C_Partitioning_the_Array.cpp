#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);


vector<ll> nfact(ll n){
    vector<ll> ct;
    for(ll i=1; i<=n; i++){
        if(n%i==0) ct.push_back(i);
    }

    return ct;

}


void solve() {

    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll ct=0;
    vector<ll> fact= nfact(n);
   
    for(ll i=0; i<fact.size(); i++){
        
        ll lst; ll flag=1;
        ll cur=fact[i]-1;
        for(ll j=cur; j<v.size(); j+=fact[i] ){
            if(j==(cur)) lst=v[j]%(cur+1);
            else{
                if(v[j]%(cur+1)!=lst){
                    flag = 0;
                    break;
                }
                else{
                    lst=v[j]%(cur+1);
                }

            }
        }
        cout<<cur+1<<"-"<<flag<<"  ";
        ct+=flag;
    }
    cout<<'\n';
   // cout<<ct<<'\n';


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

