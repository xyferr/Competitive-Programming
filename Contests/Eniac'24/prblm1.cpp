#include<bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
    int n; cin>>n;
    if(n==0) {
        cout<<1<<endl;
        return;
    }
    int res = 0;
    while(n>0){
        res ++;
        n/=10;
    }
    cout<<res<<endl;
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

/*
20
345
4352
4324
32432
23432
3432
23423
342
34509345
34534634
435345345
34423423
23424345
343465324
234234234
23423423423
3454
43
234
13
*/