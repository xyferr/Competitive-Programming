#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    vector<pair<int,int>> v(4);
    for(int i=0; i<4; i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    ll sq_area = (v[3].first-v[0].first)*(v[3].second-v[0].second);
    cout<<sq_area<<endl;
    




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

