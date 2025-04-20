#include<bits/stdc++.h>
#define ll long long
using namespace std;

///rohit/////


void solve() {
    ll n; cin>>n;
    n*=2;
    char gd; cin>>gd;
    vector<string> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    ll tr=0;
    ll c,d,s,h; c=d=s=h=0;
    vector<string> cc,dd,ss,hh , trr;
    for(ll i=0; i<n; i++){
        if(v[i][1]=='C' && v[i][1]!=gd){
            c++;
            cc.push_back(v[i]);

        } 
        else if(v[i][1]=='D' && v[i][1]!=gd) {
            d++;
            dd.push_back(v[i]);
        }
        else if(v[i][1]=='S' && v[i][1]!=gd) {
            s++;
            ss.push_back(v[i]);
        }
        else if(v[i][1]=='H' && v[i][1]!=gd) {
            h++;
            hh.push_back(v[i]);
        
        }
        if(v[i][1]==gd){
            tr++;
            trr.push_back(v[i]);
        }
    }

    sort(cc.begin(),cc.end());
    sort(dd.begin(),dd.end());
    sort(ss.begin(),ss.end());
    sort(hh.begin(),hh.end());
    sort(trr.begin(),trr.end());
   
    ll odc =0;
    if(c&1 && c>0) odc++;
    if(d&1 && d>0) odc++;
    if(s&1 && s>0) odc++;
    if(h&1 && h>0) odc++;
    tr-=odc;
    if((tr&1) || tr<0){
        cout<<"IMPOSSIBLE"<<'\n';
        return;
    }
    vector<string> resid;
    if(gd!='C'){
        for(ll i=0; i+1<cc.size(); i+=2){
            cout<<cc[i]<<" "<<cc[i+1]<<'\n';
        }
        if(cc.size()&1){
            resid.push_back(cc[cc.size()-1]);
        }
    }
    if(gd!='D'){
        for(ll i=0; i+1<dd.size(); i+=2){
            cout<<dd[i]<<" "<<dd[i+1]<<'\n';
        }
        if(dd.size()&1){
            resid.push_back(dd[dd.size()-1]);
        }
    }
    if(gd!='S'){
        for(ll i=0; i+1<ss.size(); i+=2){
            cout<<ss[i]<<" "<<ss[i+1]<<'\n';
        }
        if(ss.size()&1){
            resid.push_back(ss[ss.size()-1]);
        }
    }
    if(gd!='H'){
        for(ll i=0; i+1<hh.size(); i+=2){
            cout<<hh[i]<<" "<<hh[i+1]<<'\n';
        }
        if(hh.size()&1){
            resid.push_back(hh[hh.size()-1]);
        }
    }
    ll i=0;
    for(i; i<resid.size(); i++){
        cout<<resid[i]<<" "<<trr[i]<<'\n';
    }
    for(i; i+1<trr.size(); i+=2){
        cout<<trr[i]<<" "<<trr[i+1]<<'\n';
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

