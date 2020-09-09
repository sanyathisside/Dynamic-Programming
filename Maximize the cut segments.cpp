#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
 {
    ll t,n,m,k,i,j;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    ll a[3];
	    ll x,y,z;
	    cin>>x>>y>>z;
	    ll dp[n+1];
	    memset(dp,-1,sizeof(dp));
	    dp[0]=0;
	    for(i=1;i<=n;i++)
	    {
	        if(i>=x && dp[i-x]!=-1)
	        dp[i]=max(dp[i-x]+1,dp[i]);
	        if(i>=y && dp[i-y]!=-1)
	        dp[i]=max(dp[i-y]+1,dp[i]);
	        if(i>=z && dp[i-z]!=-1)
	        dp[i]=max(dp[i-z]+1,dp[i]);
	    }
	    cout<<dp[n]<<endl;
	}
	return 0;
}
