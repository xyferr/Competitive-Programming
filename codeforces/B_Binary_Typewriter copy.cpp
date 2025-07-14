#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    int sz;
    string str;
    cin >> sz >> str;

    int tr = 0;
    if(str[0] == '1') tr++;

    for(int i = 1; i < sz; i++) {
        if(str[i] != str[i-1]) tr++;
    }

    int res = sz + tr;
    if(tr > 2) res -= 2;
    else if(tr == 2) res -= 1;

    cout << res << '\n';







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

