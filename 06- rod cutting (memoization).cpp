#include <iostream>
using namespace std;

int memo[100];
int maxProfit(int arr[], int totalLen){
	if(totalLen == 0)
	 return 0;
	if(memo[totalLen] != -1){
		return memo[totalLen];
	}
	int best = 0;
	for(int len =1; len <= totalLen; len++){
		int netProfit = arr[len] + maxProfit(arr,totalLen - len);
		best = max(best,netProfit);
	}
	memo[totalLen] = best;
	return best;
}

int main(){
	int priceOfEachLen[100];
	int totalLen;
	cin>> totalLen;

	for(int eachPiece=1; eachPiece <= totalLen; ++eachPiece){
		cin>> priceOfEachLen[eachPiece];
	}

    // reset memopad
    for(int i=0; i<=totalLen;i++)
	  memo[i] =-1;
      
	int ans = maxProfit(priceOfEachLen, totalLen);
	cout<< ans;
}
