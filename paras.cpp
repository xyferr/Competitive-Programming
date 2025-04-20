#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t-->0){
        string x;
        cin>>x;
        
        
        int sum=0;
        bool even = false;
        
        long long temp = stoi(x);
        while(temp!=0){
            int rem = temp%10;
            sum+= rem;
            temp/=10;
            if(rem%2==0){
                even = true;
            }
        }
        
        if(sum%3==0 && even){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
