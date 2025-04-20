    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;




    void solve() {
        ll n; cin>>n;
        string s;
        for(ll i=1; i<=n; i++){
            s="";
            for (ll j = 1; j <=n; j++)
            {
                if(i&1){
                    if(j&1) s+="##";
                    else s+="..";
                }
                else{
                    if(j&1) s+="..";
                    else s+="##";
                }
                
            }
            cout<<s<<'\n';
            cout<<s<<'\n';
            
            
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

