#include <iostream>
using namespace std;

long long int countStrings(int n) 
{ 
    long long int a[n], b[n]; 
    a[0] = b[0] = 1; 
    for (long long int i = 1; i < n; i++) 
    { 
        a[i] = a[i-1] + b[i-1]; 
        b[i] = a[i-1]; 
    } 
    return a[n-1] + b[n-1]; 
} 

int main(){
	int t;
    cin>>t;
    while(t--){
    long long int n;
	cin>>n;
	long long int ans= countStrings(n);
	cout<<ans<<endl;
}
}
