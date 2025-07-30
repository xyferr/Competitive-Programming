#include<bits/stdc++.h>
#define ll long long
using namespace std;



int count(string a){
    vector<int> v(26,0);
    for(auto it: a){
        v[it-'a']++;
    }
    int res = 0;
    for(auto it: v){
        if(it&1) continue;
        else res++;
    }
    return res;
}




void solve() {
    ll m,n; cin>>m>>n;
    string a,b; cin>>a>>b;


    int kritika_cnt = count(a);
    int trapti_cnt = count(b);
   
    if(kritika_cnt==trapti_cnt) cout<<"draw"<<endl;
    else{
        cout<<((kritika_cnt>trapti_cnt)? "kritika":"trapti");
        cout<<endl;
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