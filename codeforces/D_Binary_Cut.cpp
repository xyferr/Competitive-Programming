#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    string s; cin>>s;
    int count=0;
    bool flag=true;
    bool flag1=true;
    for(int i=1; i<s.size(); i++){
        if(s[i]!=s[i-1]){
            if(s[i]=='1' && s[i-1]=='0' && flag){
                flag = false;
            }
            else if(s[i]=='0' && s[i-1]=='1' && flag1 ){
                flag1 = false;
                count+=2;
            }
            else count++;
        }
    }
    
    cout<<(count==0? count+1:count)<<endl;




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

