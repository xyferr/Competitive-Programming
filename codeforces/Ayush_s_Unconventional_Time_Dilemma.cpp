#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    string s; cin>>s;
    int ttime = stoi(s.substr(0,2));
    string minutes = s.substr(3,2);
    // string time = s.substr(0,2);
    
    string time="0";
    
    if(ttime<6){
        time+=to_string(ttime);
        cout<<time<<" "<<minutes<<" "<<"AM"<<'\n';
    }
    else if(ttime<12){
        time+=to_string(ttime-6);
        cout<<time<<" "<<minutes<<" "<<"PM"<<'\n';
    }
    else if(ttime<18){
        time+=to_string(ttime-12);
        cout<<time<<" "<<minutes<<" "<<"CM"<<'\n';
    }
    else{
        time+=to_string(ttime-18);
        cout<<time<<" "<<minutes<<" "<<"DM"<<'\n';
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

