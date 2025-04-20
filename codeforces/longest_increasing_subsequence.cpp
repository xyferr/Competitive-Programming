#include<bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    vector<int> pile;

    for(auto num: a){

        auto it = lower_bound(pile.begin(),pile.end(),num);
        if(it==pile.end()){
            pile.push_back(num);
        }
        else{
            *it = num;
        }
        for(auto x: pile) cout<<x<<" ";
        cout<<endl; 


    }
    cout<<pile.size()<<endl;
}