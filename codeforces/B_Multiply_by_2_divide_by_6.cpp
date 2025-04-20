#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> prime_factor(ll num){
    vector<ll> factors;
    for(ll i=2; i*i<=num; i++){
        while(num%i==0){
            factors.push_back(i);
            num/=i;
        }
    }
    if(num>1) factors.push_back(num);
    return factors;
}


void solve() {
    ll n; cin>>n;
    vector<ll> prime_factors = prime_factor(n);
    ll cnt2 = 0 , cnt3 = 0;
    
    for(auto it: prime_factors){
        if(it==2) cnt2++;
        else if(it==3) cnt3++;
    }
    ll res = 0;
    if(cnt2==cnt3){

        
    }
    else if(cnt2<cnt3){
        cout<<cnt3+(cnt3-cnt2)<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    




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

