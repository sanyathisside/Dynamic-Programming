// sliding window kind of thing to store last k elements instead of having the whole dp array
// dp[n+1] = 2*dp[n]-dp[n-k]  ---> O(1), no loop



#include <bits/stdc++.h>
using namespace std;

int ladder_optimized(int n, int k){
        int dp[100]={0};
        
        dp[0]=dp[1]=1; 
        for(int i=2; i<=k; i++){
            dp[i]=2*dp[i-1];
        }
        for(int i=k+1; i<=n; i++){
            dp[i]= 2*dp[i-1] - dp[i-k-1];
        }
    return dp[n];
}

int main(){
    int n,k;
    cin>>n>>k;
    cout<<ladder_optimized(n,k)<<endl;
}
