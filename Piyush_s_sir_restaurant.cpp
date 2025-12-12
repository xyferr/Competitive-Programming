#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;




void solve() {
    int n;
    cin>>n;

    map<int,int> mp;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        for(int j=x;j<=y;j++){
            mp[j]++;
        }
    }

    int res=INT_MIN;
    for(auto it:mp){
        res = max(res,it.second);
    }

    cout<<res<<endl;


}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; 
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}

