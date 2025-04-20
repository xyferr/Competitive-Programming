#include<bits/stdc++.h>
#define ll long long
using namespace std;




bool is_pallindrome(string input) {
    string str = "";
  int n=input.size();
  for(int i=n-1; i>=0; i--){
    str+=input[i];
  }
  if(str==input) return true;
  else return false;
  
   
    
    




}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string word;
  cin>>word;
  bool result = is_pallindrome(word);
  cout<<result<<endl;
    return 0;
}

