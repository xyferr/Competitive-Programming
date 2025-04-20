#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    string s; cin>>s;

    ll ans=n+1;

    for(char c='a'; c<='z'; ++c){
        ll l=0 , r = n-1;
        ll cnt=0;
        while(l<r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            else if(s[l]==c){
                l++;
                cnt++;
            }
            else if(s[r]==c){
                r--;
                cnt++;
            }
            else{
                cnt=n+1;
                break;
            }
        }
        ans=min(ans,cnt);
    }
    cout<<(ans>n?-1:ans)<<'\n';




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

