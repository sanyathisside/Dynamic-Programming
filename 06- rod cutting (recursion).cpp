#include <iostream>
using namespace std;

int maxProfit(int arr[], int totalLen){
	if(totalLen == 0)
	 return 0;
	int best = 0;
	for(int len =1; len <= totalLen; len++){
		int netProfit = arr[len] + maxProfit(arr,totalLen - len);
		best = max(best,netProfit);
	}
	return best;
}

int main(){
	int priceOfEachLen[100];
	int totalLen;
	cin>> totalLen;

	for(int eachPiece=1; eachPiece <= totalLen; ++eachPiece){
		cin>> priceOfEachLen[eachPiece];
	}
	int ans = maxProfit(priceOfEachLen, totalLen);
	cout<< ans;
}
