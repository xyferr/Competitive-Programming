#include <bits/stdc++.h>
#define ll long long

using namespace std;
template <typename T>
void prv(const vector<T> &vec);


void solve()
{
    ll n;
    cin >> n;
    string v;
    cin >> v;

    ll res = 0;
    map<char, ll> s, s1;
    for (ll i = 0; i < n; i++)
    {
        s[v[i]]++;
    }
    for (ll i = 0; i < n; i++)
    {
        s[v[i]]--;
        s1[v[i]]++;
        if(s[v[i]] == 0)
            s.erase(v[i]);
        ll sz = s1.size() + s.size();
        res = max(res, sz);
    }
    cout << res << '\n';
}




template <typename T>
void prv(const vector<T> &vec)
{
    for (const auto &element : vec)
    {
        cout << element << "";
    }
    cout << '\n';
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
