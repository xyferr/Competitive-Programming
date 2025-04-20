#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll knight_x, knight_y, king_x, king_y, queen_x, queen_y;
    cin>>knight_x>>knight_y>>king_x>>king_y>>queen_x>>queen_y;


    map<pair<ll,ll>,ll> mp;

    mp[{king_x + knight_x,king_y+knight_y}]++;
    mp[{king_x - knight_x,king_y-knight_y}]++;
    mp[{king_x + knight_x,king_y-knight_y}]++;
    mp[{king_x - knight_x,king_y+knight_y}]++;

    mp[{queen_x+knight_x,queen_y+knight_y}]++;
    mp[{queen_x-knight_x,queen_y-knight_y}]++;
    mp[{queen_x+knight_x,queen_y-knight_y}]++;
    mp[{queen_x-knight_x,queen_y+knight_y}]++;

    if(knight_x!=knight_y){
        mp[{king_x + knight_y,king_y+knight_x}]++;
        mp[{king_x - knight_y,king_y-knight_x}]++;
        mp[{king_x + knight_y,king_y-knight_x}]++;
        mp[{king_x - knight_y,king_y+knight_x}]++;

        mp[{queen_x+knight_y,queen_y+knight_x}]++;
        mp[{queen_x-knight_y,queen_y-knight_x}]++;
        mp[{queen_x+knight_y,queen_y-knight_x}]++;
        mp[{queen_x-knight_y,queen_y+knight_x}]++;
    }

    ll res = 0;
    for(auto x:mp){
        if(x.second==2) res++;
    }
    cout<<res<<endl;
    
    


   
    






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

