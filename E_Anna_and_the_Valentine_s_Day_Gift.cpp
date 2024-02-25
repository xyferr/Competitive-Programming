#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);


ll count_dig(ll n){
    ll res=log10(n)+1;
    return res;
}

ll count_zero(ll n){
    ll cnt=0;
    while(n%10==0){
        cnt++;
        n/=10;
    }
    return cnt;
}


void solve() {
    ll n,m; cin>>n>>m;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll max_dig=0;

    for(ll i=0; i<n; i++){
        max_dig+=count_dig(v[i]);
    }

    vector<ll> zero_count;
    for(ll i=0; i<n; i++){
        zero_count.push_back(count_zero(v[i]));
    }
    sort(zero_count.rbegin(),zero_count.rend());
    
    ll dif=0; 
    for(ll i=0; i<n; i+=2){
        dif+=zero_count[i];
        if(zero_count[i]==0){
            break;
        }
    }

    if(max_dig - dif > m){
        cout<<"Sasha\n";
    } else{
        cout<<"Anna\n";
    }


    /*

    1 2007 800 1580
    1 2007 8 1580
    1 15802007 8
   



    
    */




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

