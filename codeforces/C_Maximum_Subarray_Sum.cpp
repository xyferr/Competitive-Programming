#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

const ll neg = -1e18;

void solve() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        if (s[i] == '0') v[i] = neg;
    }

    ll max_sum = 0, cur = 0;
   
    for (ll i = 0; i < n; i++) {
        cur+= v[i];
        max_sum = max(max_sum, cur);
        if (cur < 0) cur = 0;
    }
    if(max_sum > k){
        cout << "No" << endl;
        return;
    }

    if (max_sum == k) {
        cout << "Yes" << endl;
        for (ll i = 0; i < n; i++) cout << v[i] << " ";
        cout << endl;
        return;
    }

    for(ll i=0; i<n; i++){
        if(s[i]=='0'){
            ll sum1 = 0;
            ll sum2=0;
            ll cur = 0;
            for(ll j=i-1; j>=0; j--){
                if(s[j]=='0'){
                    break;
                }
                cur += v[j];
                sum1=max(sum1,cur);
            }
            cur = 0;
            for(ll j=i+1; j<n; j++){
                if(s[j]=='0'){
                    break;
                }
                cur += v[j];
                sum2=max(sum2,cur);
            }
            v[i] = k - sum1 - sum2;
            cout<<"Yes" << endl;
            for (ll i = 0; i < n; i++) cout << v[i] << " ";
            cout<< endl;
            return;
        }
    }



    cout << "No" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
