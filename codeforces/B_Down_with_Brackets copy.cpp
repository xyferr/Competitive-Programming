#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;




void solve() {
    string s; cin >> s;
    bool flag = false;
    stack<char> st;
    for(int i=0; i<s.size()-1; i++) {
        if(s[i]=='('){
            st.push(s[i]);
        }
        else{
            st.pop();
        }
        if(st.empty()){
            cout<<"YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;




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

