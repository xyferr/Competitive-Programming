#include <iostream>
using namespace std;

int minHitsToDefeatBoss(int H, int X, int Y1, int Y2, int K) {
    int damage = 0;
    int hits = 0;
    int gun;
    if(H%X==0)  gun = H/X;
    else gun = H/X + 1;
    
    if(H%Y1==0) hits=H/Y1;
    else hits = H/Y1 + 1;
    hits = min(hits,K);

    if(hits*Y1>=H) return min(gun,hits);
    else{
        int rem = H - hits*Y1;
        if(rem%Y2==0) hits+=rem/Y2;
        else hits+=rem/Y2 + 1;
    }

    return min(gun,hits);
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int H, X, Y1, Y2, K;
        cin >> H >> X >> Y1 >> Y2 >> K;

        int result = minHitsToDefeatBoss(H, X, Y1, Y2, K);
        cout << result << endl;
    }

    return 0;
}
