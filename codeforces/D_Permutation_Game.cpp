#include<bits/stdc++.h>
#define ll long long
#define debug(x) cerr << #x << " = " << x << endl
#define debug2(x, y) cerr << #x << " = " << x << ", " << #y << " = " << y << endl

using namespace std;




void solve() {
    ll n , k , initial_bod , initial_sas ; 
    cin>>n>>k>>initial_bod>>initial_sas;
    vector<ll> p(n) , a(n);
    for(ll i=0; i<n; i++) cin>>p[i];
    for(ll i=0; i<n; i++) cin>>a[i];
    ll max_a = *max_element(a.begin() , a.end());
    ll bod =0 , sas = 0;
    int it = 0;
    while(it<min(n,k)){



        // debug(k);
        // debug2(bod , sas);
        it++;
        bod += a[initial_bod-1];
        sas += a[initial_sas-1];
        if(((bod+(max_a*(k-(it+1)))) >(sas+(max_a*(k-(it+1))))) && (a[initial_bod-1]*(k-(it+1)) < max_a*(k-(it+1)))) {
            initial_bod = p[initial_bod-1];
        }
        
        if(((sas+(max_a*(k-(it+1)))) >(bod+(max_a*(k-(it+1))))) && (a[initial_sas-1]*(k-(it+1)) < max_a*(k-(it+1)))) {
            initial_sas = p[initial_sas-1];
        }
        
        if(a[initial_bod-1]==max_a && a[initial_sas-1]==max_a){
            break;
        }

    }
    
    
    bod += (k-(it+1))*a[initial_bod-1];
    sas += (k-(it+1))*a[initial_sas-1];
    // cout<<bod<<" "<<sas<<"  - ";
    if(bod > sas){
        cout<<"Bodya"<<'\n';
    }
    else if(sas > bod){
        cout<<"Sasha"<<'\n';
    }
    else{
        cout<<"Draw"<<'\n';
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

