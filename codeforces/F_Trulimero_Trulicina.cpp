#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,m,k; cin>>n>>m>>k;

    
        int total = n * m;
        
        int T = total / k;
 
        vector<vector<int>> matrix(n, vector<int>(m, 0));
   
        if(n % k != 0) {
 
            for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++){
                    int x = j * n + i;
                    matrix[i][j] = (x % k) + 1;;
                }
            }
        }
        else if(m % k != 0) {
            
            for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++){
                    int x = i * m + j; 
                    matrix[i][j] = (x % k) + 1;
                }
            }
        }
        else {
 
            for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++){
                    matrix[i][j] = ((i + j) % k) + 1;
                }
            }
        }
 
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cout << matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        // cout<<endl;





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

