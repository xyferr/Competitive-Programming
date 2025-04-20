#include<bits/stdc++.h>
#define ll long long
#define debug(x) cerr << #x << " = " << x << endl
#define debug2(x, y) cerr << #x << " = " << x << ", " << #y << " = " << y << endl

using namespace std;




void solve() {
    ll n,m,k; cin>>n>>m>>k;
    string s; cin>>s;
    
    s="L" + s+"L";
    // debug(s);
    n+=2;

    bool ok = true;
    int inc = 0;
    while(inc<n-1){
        if(s[inc]=='L'){
            bool found = false;
            for(int i = inc+1; i<n && i<=inc+m; i++){
                if(s[i]=='L'){
                    found = true;
                    inc = i;
                    break;
                }
            }
            if(!found){
                inc+=m;
                if(s[inc] == 'C'){
                    ok=false;
                    // debug(inc);
                    break;
                }
            }
        }
        else{
            inc++;
            if(s[inc]=='C'){
                ok=false;
                // debug(inc);
                break;
            }
            k--;
        }   
    }
    if(ok && k>=0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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

