#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    unordered_map<char,ll>mp;
    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < 3; j++)
        {
            char c; cin>>c;
            mp[c]++;
        }
        
    }

    for(auto it:mp){
        if(it.second==2){
            cout<<it.first<<'\n';
            return;
        }
    }
    




}












template <typename T>
void prv(const vector<T>& vec) {
    for (const auto& element : vec) {
        cout << element << "";
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

