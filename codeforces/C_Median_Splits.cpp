#include <bits/stdc++.h>
using namespace std;

bool partition(vector<int>& a, int k) {
    int cnt = 0, cur_s = 0;
    int ind = -1;

    for (int i = 0; i < a.size(); i++) {
        cur_s++;
        if (a[i] <= k) cnt++;
        if (cnt >= (cur_s + 1) / 2) {
            ind = i;
            if(ind + 1 < a.size() && a[ind+1]>k){
                cur_s++;
                if(cnt>=(cur_s+1)/2){
                    ind++;
                }
            }
            
            break;
        }
    }

    if (ind == -1) return false;

    cnt = 0;
    cur_s = 0;
    int found_second = -1;
    for (int i = ind + 1; i < a.size(); i++) {
        cur_s++;
        if (a[i] <= k) cnt++;
        if (cnt >= (cur_s + 1) / 2) {
            found_second = i;
            break;
        }
    }

    if (found_second == -1) return false;

    return (found_second + 1 < a.size());
}

bool part2(vector<int>& a, int k) {
    int cnt = 0, cur_s = 0;
    int ind = -1;

    for (int i = 0; i < a.size(); i++) {
        cur_s++;
        if (a[i] <= k) cnt++;
        if (cnt >= (cur_s + 1) / 2) {
            ind = i;
            break;
        }
    }

    if (ind == -1) return false;

    cnt = 0;
    cur_s = 0;
    int found_second = -1;
    for (int i = a.size()-1; i>=0; i--) {
        cur_s++;
        if (a[i] <= k) cnt++;
        if (cnt >= (cur_s + 1) / 2) {
            found_second = i;
            break;
        }
    }
    if(ind < found_second-1){
        return true;
    }
    return false;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> b = a;
    reverse(b.begin(), b.end());

    if (partition(a, k) || partition(b, k)) {
        cout << "YES\n";
    }else if(part2(a,k)){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
