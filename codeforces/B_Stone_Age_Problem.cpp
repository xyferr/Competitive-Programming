#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n,q; cin>>n>>q;
    vector<ll> v(n);
    ll sum=0;
    for(ll i=0; i<n; i++){
        cin>>v[i];
        sum+=v[i];
    } 
    bool flag=1;
    ll lst2;
    vector<ll> ind;
    while(q--){
        ll f; cin>>f;
        if(f==2){
            ll x; cin>>x;
            cout<<n*x<<'\n';
            sum=n*x;
            ind.clear();
            lst2=x;
            flag=0;
        }
        else{
            if(flag){
                ll pos,x; cin>>pos>>x;
                sum-=v[pos-1];
                v[pos-1]=x;
                sum+=x;
                cout<<sum<<'\n';
            }
            else{
                ll pos,x; cin>>pos>>x;
                if(find(ind.begin(),ind.end(),pos)!=ind.end()){
                    sum-=v[pos-1];
                    sum+=x;
                    v[pos-1]=x;
                    cout<<sum<<'\n';
                }
                else{
                    ind.push_back(pos);
                    sum-=lst2;
                    sum+=x;
                    v[pos-1]=x;
                    cout<<sum<<'\n';

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
    int T = 1; //cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}

