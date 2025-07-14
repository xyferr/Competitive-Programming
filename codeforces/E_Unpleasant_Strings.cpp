#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,k; 
    cin >> n >> k;
    string s;
    cin >> s;
    s = " " + s;           

    
    vector<vector<int>> nxt(n+2, vector<int>(k, n+1));
    for(int c=0;c<k;c++) nxt[n+1][c] = n+1;
    for(int i=n;i>=1;i--){
        for(int c=0;c<k;c++)
            nxt[i][c] = nxt[i+1][c];
        nxt[i][s[i]-'a'] = i;
    }
    const int INF = 1e9;
    vector<int> dp(n+2, 0);
    dp[n+1] = 1;
    for(int i=n;i>=1;i--){
        int best = INF;
        for(int c=0;c<k;c++){
            int j = nxt[i][c];
            if(j > n) {
                best = 1;
                break;
            } else {
                best = min(best, 1 + dp[j+1]);
            }
        }
        dp[i] = best;
    }

    ll q; 
    cin >> q;
    while(q--){
        string t;
        cin >> t;
        int pos = 1;
        bool ok = true;
        for(char ch : t){
            pos = nxt[pos][ch - 'a'];
            if(pos > n){
                ok = false;
                break;
            }
            pos++;
        }
        cout << (ok ? dp[pos] : 0) <<endl;
    }
    return 0;
}
