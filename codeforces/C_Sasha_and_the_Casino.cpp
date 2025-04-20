#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll k,x,a; cin>>k>>x>>a;

    ll fn = a - x ;
     // cout<<fn+n<<"-"<<x<<"\n";
    if(x>=a){
    cout<<"NO\n";
    return;
    }
    
    ll tot_a = a;
    ll dif=1;
    while(a>0 && x>0){
        a-=dif;
        dif*=2;
        x--;
    }
    if(((fn+(k*(tot_a-x)))<=tot_a) && (a<0 && ((a)*k <= tot_a))){
        cout<<"NO\n";
        return;

    }
    // if(a>0 && ((a)*k > tot_a) ){
    //     cout<<"YES\n";
    //     return;

    // }

    cout<<"YES\n";
    






}












template <typename T>
void prv(const vector<T>& vec) {
    for (const auto& element : vec) {
        cout << element << " ";
    }
    cout <<'\n';
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

