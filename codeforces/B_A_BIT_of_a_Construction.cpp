#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,k; cin>>n>>k;
    if(n==1){
        cout<<k<<'\n';
        return;
    }

    ll power_of_2=1;
    while(power_of_2<=k){
        power_of_2*=2;
    }
    power_of_2/=2;
    cout<<power_of_2-1<<' ';
    n--;
    if(n>1){
        cout<<k-(power_of_2-1)<<' ';
        n--;
        while(n--){
            cout<<0<<' ';
        }
        cout<<endl;
    }
    else{
        cout<<k-(power_of_2-1)<<endl;
        // cout<<endl;
    }




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

