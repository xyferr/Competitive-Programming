#include<bits/stdc++.h>
#define ll long long
using namespace std;



int count(int num){
    int cnt=0;
    while(num){
        cnt+=num%10;
        num/=10;
    }
    if(cnt>9) return count(cnt);
    else return cnt;
}


void solve() {
    ll n; cin>>n;
    cout<<count(n)<<'\n';
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

