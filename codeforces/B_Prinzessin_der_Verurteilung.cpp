#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    string s; cin>>s;
  

    unordered_map<string,ll>mp;
    for(ll i=0; i<n; i++){
        for(ll j=1; j<=n-i; j++){
            string cur=s.substr(i,j);
          
            mp[cur]++;
        }
    }
    
    string ans="";
    for(char b='a'; b<='z'; b++){
        string cur=ans+b;
        if(mp.find(cur)==mp.end()){
            cout<<cur<<'\n';
            return;
        }
    }
    ans="";
    for(char a='a'; a<='z'; a++){
        for(char b='a'; b<='z'; b++){
            string cur=ans+a+b;
            if(mp.find(cur)==mp.end()){
                cout<<cur<<'\n';
                return;
            }
        }
    }

    ans="";
    for(char a='a'; a<='z'; a++){
        for(char b='a'; b<='z'; b++){
            for(char c='a'; c<='z'; c++){
                string cur=ans+a+b+c;
                if(mp.find(cur)==mp.end()){
                    cout<<cur<<'\n';
                    return;
                }
            }
        }
    }
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

