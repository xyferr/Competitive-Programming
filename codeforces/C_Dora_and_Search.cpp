#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    
    vector<ll> v(n);
    set<ll> s;
    for(ll i=0; i<n; i++){
        cin>>v[i];
        s.insert(v[i]);

    }
     

    ll low=0, up=n-1;
    
    while(low<up){
        ll minm=*(s.begin());
        ll maxm=*(s.rbegin());
        // for (ll i = low; i <= up; i++)
        // {
        //     minm=min(minm,v[i]);
        //     maxm=max(maxm,v[i]);
            
        // }
        if(v[low]!=minm && v[low]!=maxm && v[up]!=minm && v[up]!=maxm){
            cout<<low+1<<" "<<up+1<<'\n';
            return;
        }
        else if(v[low]==minm){
            s.erase(minm);
            ++low;
        }
        else if(v[low]==maxm){
            s.erase(maxm);
            ++low;
        }
        else if(v[up]==minm){
            s.erase(minm);
            --up;
        }
        else if(v[up]==maxm){
            s.erase(maxm);
            --up;
        }
        
    }
    cout<<"-1\n";




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

