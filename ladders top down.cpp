#include <bits/stdc++.h>
using namespace std;

int ladder_topdown(int n, int k, int dp[]){
    //base case
    if(n==0) return 1;
    
    // look up
    if(dp[n]!=0){
        return dp[n];
    }
    
    //recursive case
    int ways=0;
    for(int i=0; i<k;i++){
        if(n-i>=0){
            ways += ladder_topdown(n-i,k,dp);
        }
    }
    return dp[n]= ways;
}

int main(){
    int n,k;
    cin>>n>>k;
    int dp[100]={0};
    cout<<ladder_topdown(n,k,dp)<<endl;
    return 0;
}
