#include<bits/stdc++.h>
#define ll long long

using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    string s; cin>>s;
    vector<pair<char,ll>>ans;
    vector<pair<char,ll>> up,llw;
    
    for (ll i = 0; i < s.length(); i++)
    {
        if(s[i]=='B'){
            if(!(up.empty())){
                up.pop_back();
            }
        }
        else if(s[i]=='b'){
            if(!(llw.empty())){
                llw.pop_back();
            }
        }
        else if(islower(s[i])){
            llw.push_back({s[i],i});
        }
        else{
            up.push_back({s[i],i});
        }
    }
    for(auto it: up){
        ans.push_back(it);
    }
    for(auto it: llw){
        ans.push_back(it);
    }
    sort(ans.begin(),ans.end(),[](pair<char,ll> a, pair<char,ll> b){
        return a.second<b.second;
        });
    
    for(auto it:ans){
        cout<<it.first;
    }
    cout<<'\n';
   




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



