#include<bits/stdc++.h>
#define ll long long
using namespace std;

double findm(vector<int>& a, vector<int>& b) {
        
    int n1 = a.size(), n2 = b.size();
   
    if (n1 > n2) return findm(b, a);

    int n = n1 + n2;
    int left = (n1 + n2 + 1) / 2; 
   
    int low = 0, high = n1;
    while (low <= high) {
        int mid1 = (low + high) >> 1;
        int mid2 = left - mid1;
       
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
        if (mid1 < n1) r1 = a[mid1];
        if (mid2 < n2) r2 = b[mid2];
        if (mid1 - 1 >= 0) l1 = a[mid1 - 1];
        if (mid2 - 1 >= 0) l2 = b[mid2 - 1];

        if (l1 <= r2 && l2 <= r1) {
            if (n % 2 == 1) return max(l1, l2);
            else return ((double)(max(l1, l2) + min(r1, r2))) / 2.0;
        }

       
        else if (l1 > r2) high = mid1 - 1;
        else low = mid1 + 1;
    }
    return 0; 
}



void solve() {
    ll n,m; cin>>n>>m;
    vector<int> a(n),b(m);
    for(ll i=0; i<n; i++) cin>>a[i];
    for(ll i=0; i<m; i++) cin>>b[i];
    cout<<fixed<<setprecision(2)<<findm(a,b)<<endl;




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

