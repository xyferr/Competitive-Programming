#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
void prv(vector<ll> &vec);

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll k = 2;
    for(ll i=0; i<n; ++i){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll gcd = v[1]-v[0];
    for(ll i=2; i<n; i++){
        gcd = __gcd(gcd,v[i]-v[i-1]);
    }
    cout<<gcd*k<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}

void prv(vector<ll> &vec)
{
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;
}
//rohit