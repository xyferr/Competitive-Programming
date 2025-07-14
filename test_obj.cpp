#include <bits/stdc++.h>
using namespace std;
int main(){
    

    const int MAXK = 26;
    vector<long long> dp(MAXK+1);
    dp[0] = 1; 
    dp[1] = 2; 
    for(int i = 2; i <= MAXK; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    int T;
    if(!(cin >> T)) return 0;
    while(T--){
        long long N;
        cin >> N;
        int ans = -1;
        for(int k = 1; k <= MAXK; k++){
           
            if(dp[k] - 1 >= N){
                ans = k;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
