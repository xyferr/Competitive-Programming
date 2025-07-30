#include <iostream>
using namespace std;

long long fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    int prev1 = 0, prev2 = 1, current;
    for (int i = 2; i <= n; ++i) {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }
    return current;
}

int main() {
    int t; 
    cin >> t; 
    while(t--){
        int n ; 
        cin >> n; 
        cout << fibonacci(n)<<endl; 
    }

    return 0;
}