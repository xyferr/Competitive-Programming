#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isbin(ll m){
    bool flag = true;
    while(m){
        ll rem = m%10;
        if(rem!=1 && rem!=0){
            flag = false;
            break;
        }
        m/=10;

    }
    if(flag){
        return true;
    }
    else{
        return false;
    }
}

void solve() {
    ll n; cin>>n;
    if(isbin(n)){
        cout<<"YES\n";
        return;
    }
    vector<ll> ans;
    ll two = 0;
    ll five =0;
    for(ll i=2; i*i<=n; i++){
        if(n%i==0){
            if(i==2){
                if(five>0){
                    five--;
                    ans.push_back(10);
                }
                else two++;
            }
            else if(i==5){
                if(two>0){
                    two--;
                    ans.push_back(10);
                }
                else five++;
            }
            else ans.push_back(i);

            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n>1){
        ans.push_back(n);
    }
    for(auto x: ans){
        if(!isbin(x)){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    // cout<<'\n';


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

