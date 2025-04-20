#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    char c; cin>>c;
    string s; cin>>s;

    ll cnt=0;
    for(ll i=0; i<n; i++){
        if(s[i]!=c){
            cnt++;
            break;
        }
    }
    if(cnt==0){
        cout<<0<<'\n';
        return;
    }
    for(ll i=1; i<=n; i++){
        bool ok= true;
        for(ll j=i; j<=n; j+=i){
            if(s[j-1]!=c){
                ok=false;
                break;
            }
        }
        if(ok){   
            cout<<1<<'\n';
            cout<<i<<'\n';
            return;
        }
    }

    cout<<2<<'\n';
    cout<<n-1<<" "<<n<<'\n';
    

     





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

