#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    ll positve_el  = 0;
   ll negative_el = 0;
   ll last_positve_el = -1;
   ll last_negative_el = -1;
   ll res = 0;
   for(ll i=0; i<n; i++){
        if(v[i]>0){
            if(positve_el>0){
                ll inc = (i+1)-(last_positve_el)-1;
                ll times = positve_el;
                res += inc*(times);
                last_positve_el = i;


            }
            positve_el+=v[i];
            if(negative_el<0){
                ll inc = (i+1)-(last_negative_el+1)-1;
                ll times = min(positve_el,abs(negative_el));
                res += inc*(times);
                res += times;
                positve_el -= times;
                negative_el += times;




            }
            if(positve_el>0){
                last_positve_el = i;
            }
        }
        else if(v[i]<0){
            if(negative_el<0){
                ll inc = (i+1)-(last_negative_el)-1;
                ll times = abs(negative_el);
                res += inc*(times);
                last_negative_el = i;
            }
            negative_el+=v[i];
            
            if(positve_el>0){
                ll inc = (i+1)-(last_positve_el+1)-1;
                ll times = min(abs(positve_el),abs(negative_el));
                res += inc*(times);
                res += times;
                positve_el -= times;
                negative_el += times;
            }
            if(negative_el<0){
                last_negative_el = i;
            }
        }




   }
   cout<<res<<endl;
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

