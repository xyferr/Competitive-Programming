#include<bits/stdc++.h>

#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);

long long setBits(long long res, ll ind) {
    long long x = 0;
    
    for (int i = 0; i <= ind; ++i) {
        if ((res >> i) & 1) {
            x |= (1LL << i);
        }
    }
    
    return x;
}
ll setBitNumber(ll n)
{
    if (n == 0)
        return 0;
 
    ll msb = 0;
    n = n / 2;
    while (n != 0) {
        n = n / 2;
        msb++;
    }
 
    return msb;
}

void solve() {
    ll a,b,r; cin>>a>>b>>r;
    ll ans=abs(a-b);
    ll ind=setBitNumber(r);
    // cout<<ind<<'\n';
    // ll x = setBits(ans, ind);

    // cout<<x<<'\n';
    ll pr=INT_MAX;
    for (ll i = 0; i <=r; i++)
    {
        pr=min(pr,(ans^i));
    }
    cout<<pr<<'\n'; 
    
    
    // cout<<pr<<'\n';


    





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

