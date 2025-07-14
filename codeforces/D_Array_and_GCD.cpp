#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 400000;
bitset<6000005> isComposite;
vector<int> primes;
ll P[MAXN+1];

void solve() {
    int n;
    cin >> n;
    
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin >> a[i];

    sort(a.begin(), a.end(), greater<ll>());
    vector<ll> B(n+1,0);
    for(ll i=1;i<=n;i++)
        B[i] = B[i-1] + a[i-1];

    ll best = 0;
    for(ll m=1; m<=n; m++){
        if(B[m] >= P[m]) 
            best = m;
        else 
            break;
    }
    cout << (n - best) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int limit = 6000000;
    isComposite[0] = isComposite[1] = 1;
    for(int i=2; i*i<=limit; i++){
        if(!isComposite[i]){
            for(int j=i*i; j<=limit; j+=i)
                isComposite[j] = 1;
        }
    }
    for(int i=2; i<=limit && (int)primes.size()<MAXN; i++){
        if(!isComposite[i]) primes.push_back(i);
    }
    P[0]=0;
    for(int i=1; i<=MAXN; i++){
        P[i] = P[i-1] + primes[i-1];
    }

    int t;
    cin >> t;
    while (t--) solve();
}
