#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    ll ans,sum1,sum;
    sum1=0;
    ans=2;
    for(int i=2; i<=n; i++) {
        
        sum=0;
    
        for (int j = i; j<=n; j+=i)
        {
            sum+=j;
        }
        if(sum>sum1) {
            sum1=sum;
            ans=i;

        }
        // cout<<i<<" "<<sum<<" "<<sum1<<endl;
        
    }
    cout<<ans<<endl;




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

