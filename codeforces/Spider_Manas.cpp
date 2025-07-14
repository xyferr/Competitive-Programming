#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int prime(int n){
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        double a = sqrt(n);
        if((double)a != (int)a){
            cout<<"NO"<<endl;
            continue;
        }
        if(prime(a)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}
