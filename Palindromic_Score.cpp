#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll a,b,c; cin>>a>>b>>c;
    vector<ll>v(3);
    v[0]=a;
    v[1]=b;
    v[2]=c;
    ll count_odd = 0;
    ll count_zero=0;
    for(auto it:v){
        if(it==0) count_zero++;
        if(it&1) count_odd++;
    }
    
    if(count_odd>=2){
        if(count_zero==1){
            ll max_m = max_element(v.begin(),v.end())-v.begin();
        ll res = a+b+c-v[max_m];
        cout<<res<<endl;
        return;
    }else{
        cout<<0<<endl;
        return;
    }
        
    }
    else{
        

        ll max_m = max_element(v.begin(),v.end())-v.begin();
        ll res = a+b+c-v[max_m];
        cout<<res<<endl;

    }


    

    // cout<<res<<endl;




}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; 
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}

