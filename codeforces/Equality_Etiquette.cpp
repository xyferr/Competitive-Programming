#include<bits/stdc++.h>
#define ll long long

using namespace std;
//rohittt
int main() {
    int tt;
    cin >> tt;

    while (tt--) {
        int a, b;
        cin >> a >> b;
        if (a == b) { cout << 0 << endl; continue; }

        int difff = abs(b - a);
        int cur = 0;
        int ans = -1;

        int val = difff * 2;
        val = sqrt(val);

        for (int i = val; i <= val + 5; i++) {
            int curSum = i * (i + 1) / 2;
            int extra = curSum - difff;

            if (extra < 0) { continue; }

            if (extra % 2 != 0) { continue; }
            else { ans = i; break; }
        }
        cout << ans << endl;
    }

    return 0;
}