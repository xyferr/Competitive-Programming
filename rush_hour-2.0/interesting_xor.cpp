#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    long long int n;
    cin>>n;
    long long int store=0;
    for(int i=0;i<30;i++){
        if(1&(n>>i)){
            store=i;
        }
    }
    long long int ans1=0;
    long long int ans2=0;
    for(int i=0;i<30;i++){
        if(i==store){
            ans1+=(1<<i);
            break;
        }
        else if((1&(n>>i))==0){
            ans1+=(1<<i);
            ans2+=(1<<i);
        }
        else{
            ans2+=(1<<i);
        }
    }
    cout<<ans1*ans2<<endl;



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







