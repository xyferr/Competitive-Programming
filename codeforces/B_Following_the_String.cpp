#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    string s; 
    char c='a'; 
    char b='a';
    bool flag=true;
    ll lst;
    map<char,ll> mp;
    for(ll i=0; i<n; i++){
        if(v[i]==0){
            s+=c;
            c++;
        }
        else{
            flag=true;
            for(auto it:mp){
                if(it.second==v[i]-1){
                    s+=it.first;
                    mp[it.first]++;
                    flag=false;
                    break;
                }
            }
            if(flag){
                mp[b]++;
                s+=b;
                b++;
            }


        }
        if(c>'z') c='a';
        if(b>'z') c='a';
        
    }
    cout<<s<<'\n';




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

