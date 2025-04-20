#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    string s; cin>>s;
  ll ori=0;
    ll left =0;
    ll right=s.size()-1;
    ll sum=0;
    while(left<=right){
        if(left==right){
            sum+=abs(s[left]-'0');
            break;
        }
        sum+=abs(s[left]-'0'+s[right]-'0');
        left++;
        right--;
    }
    for(int i=0; i<s.size(); i++){
        ori=ori*10+(s[i]-'0');
    }

    cout<<__gcd(ori,sum)<<'\n';



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

