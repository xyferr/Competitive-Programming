#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    string s; cin>>s;
    stack<char> st;
    for(int i=0; i<s.size(); i++) {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[') {
            st.push(s[i]);
        }
        else {
            if(st.empty()) {
                cout<<"false"<<endl;
                return;
            }
            if(s[i]==')' && st.top()=='(') {
                st.pop();
            }
            else if(s[i]=='}' && st.top()=='{') {
                st.pop();
            }
            else if(s[i]==']' && st.top()=='[') {
                st.pop();
            }
            else {
                cout<<"false"<<endl;
                return;
            }
        }
    }

    if(st.empty()) {
        cout<<"true"<<endl;
    }
    else {
        cout<<"false"<<endl;
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

