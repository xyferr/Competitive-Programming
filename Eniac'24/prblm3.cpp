#include<bits/stdc++.h>
#define ll long long
using namespace std;



int findSingleStudent(int students[], int n) {
        vector<int> bits(32, 0);
        for(int i = 0; i < n; i++) {
            int student= students[i];
            for(int j = 0; j <= 31; j++) {
                bits[j] += (student >> j) & 1;
                bits[j] %= 3;
            }
        }
        int res = 0;
        for(int i = 0; i <= 31; i++) {
            res |= (bits[i] << i);
        }
        return res;
    }
 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t ; 
	cin >> t ; 
	while (t--){
		int n ;
		cin >> n ; 
		int arr[n];
		for (int i= 0;i<n;i++){
			cin >> arr[i];
     }
	int ans = findSingleStudent(arr,n); 
	cout << ans << endl; 
}
	
}


