#include<bits/stdc++.h>
#define ll long long
using namespace std;




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
		for (int i= 0;i<n;i++)  cin >> arr[i];
        unordered_map<int,int> mp;
        for(auto it: arr) mp[it]++;
        for(auto it: mp){
            if(it.second==1){
                cout<<it.first<<endl;
                break;
            }
        } 
     }
	
}
	



