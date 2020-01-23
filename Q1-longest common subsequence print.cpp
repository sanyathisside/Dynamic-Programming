#include<iostream>
using namespace std;
void lcs(string x,string y)
{
    int m=x.length();
    int n=y.length();
    int dp[1024][1024];
    for(int i=0;i<m;i++)
    dp[i][0]=0;
    for(int i=0;i<n;i++)
    dp[0][i]=0;    

    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[i-1]==y[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
        }
    }
    // return dp[m][n];

    string a=" ";
    int i=m,j=n;
    while(i>=0 && j>=0)
    {
            if(dp[i-1][j]==dp[i][j-1] && dp[i][j-1]!=dp[i][j]) {
                    a=x[i-1]+a;
                    i--;
                    j--;
            }
            else if (dp[i][j-1]<dp[i-1][j]) i--;
            else j--;

    }
    cout<<a;
}
int main() {
    string x,y;
    cin>>x>>y;
    lcs(x,y);

	return 0;
}
