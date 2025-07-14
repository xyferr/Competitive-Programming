#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;


void flip(string &a){
    for(auto it:a){
        if(it=='1') it='0';
        else it='1';
    }
}

void solve() {
    int n;
    string a, b;
    cin >> n >> a >> b;
    a.push_back('0');
    b.push_back('0');
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cnt += (a[i] == '1') - (a[i] == '0');
        if((a[i] == b[i]) != (a[i + 1] == b[i + 1]) && cnt != 0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";







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

