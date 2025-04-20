#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5+1;
vector<bool> primes(N,true);

vector<int> pref_prm (N,0);

void solve() {
    ll a,b; cin>>a>>b;
    ll count = pref_prm[b] - pref_prm[a-1];
    cout<<count<<endl;




}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; cin >> T;
    
    primes[0] = primes[1] = false;
    
    for(int i=2; i*i<=N; i++) {
        if(primes[i]) {
            for(int j=i*2; j<=N; j+=i) {
                primes[j] = false;
            }
        }
    }
    for(int i=1; i<=N; i++) {
        pref_prm[i] = pref_prm[i-1] + primes[i];
    }

    while(T--) {
        solve();
    }
    return 0;
}

