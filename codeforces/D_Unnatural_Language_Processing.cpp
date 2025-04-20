#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);

bool isvow(char c){
    if(c=='a'||c=='e') return true;
    return false;
}




void solve() {
    ll n; cin>>n;
    string s; cin>>s;
    string ans="";
    for(ll i=0; i+2<n; i++){
        if(!(isvow(s[i]))){
            ans+=s[i];
        }
        else{
            if(isvow(s[i+2])){
                ans+=s[i];
                ans+='.';
            }
            else{
                ans+=s[i];
                ans+=s[i+1];
                ans+='.';
                i++;
            }
        }
    }
    ans+=s[n-2];
    ans+=s[n-1];
    cout<<ans<<'\n';




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

