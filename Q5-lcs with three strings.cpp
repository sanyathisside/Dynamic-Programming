#include <iostream>
#include <cstring>
using namespace std;

int lcs(char X[], char Y[], char Z[]){
	int m= strlen(X);
	int n= strlen(Y);
    int p= strlen(Z);
	int dp[300][300][300];

	//base cases
	for(int i=0; i<=m; ++i) dp[i][0][0] = 0;
		for(int j=0; j<=n; ++j) dp[0][j][0] = 0;
           for(int k=0; k<=p; ++k) dp[0][0][k] = 0;
    

			for(int i=1; i<=m; ++i) {
				for(int j=1; j<=n; ++j) {
                    for(int k=1; k<=p; ++k){
					int q=0;
					if((X[i-1] == Y[j-1]) && (Y[j-1] == Z[k-1])) {
						q=1+dp[i-1][j-1][k-1];
					}
					else{
						q=max(dp[i-1][j][k], max(dp[i][j-1][k], dp[i][j][k-1]));
					}
					dp[i][j][k]=q;
				}
			}
            }
return dp[m][n][p];
}

int main() {
	char str1[300], str2[300], str3[300];
	cin>>str1 >> str2 >> str3;
	int ans= lcs(str1, str2, str3);
	cout<<ans;
}
