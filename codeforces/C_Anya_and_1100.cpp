#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<string> cool(string &s, vector<pair<int, char>> &queries) {
    set<int> pattern_indices;
    int n = s.size();

   
    auto updatePatternIndices = [&](int index) {
        if (index >= 0 && index <= n - 4) {
            if (s.substr(index, 4) == "1100") {
                pattern_indices.insert(index);
            } else {
                pattern_indices.erase(index);
            }
        }
    };

    
    for (int i = 0; i <= n - 4; i++) {
        if (s.substr(i, 4) == "1100") {
            pattern_indices.insert(i);
        }
    }

   
    vector<string> results;

   
    for (auto &[i, v] : queries) {
        i--;  
      
        if (s[i] != v) {
            
            s[i] = v;
           
            for (int j = i - 3; j <= i; j++) {
                updatePatternIndices(j);
            }
        }

        results.push_back(pattern_indices.empty() ? "NO" : "YES");
    }
    return results;
}


void solve() {
    string s;
        cin >> s;

        int q;
        cin >> q;

        vector<pair<int, char>> queries(q);
        for (int i = 0; i < q; i++) {
            int idx;
            char val;
            cin >> idx >> val;
            queries[i] = {idx, val};
        }

    
        vector<string> results = cool(s, queries);

        
        for (const string &result : results) {
            cout << result << "\n";
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

