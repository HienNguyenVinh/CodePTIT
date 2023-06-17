#include<bits/stdc++.h>

using namespace std;

void handle(int n){
	int dp[n+1];
	for(int i=0; i<=n; ++i){
		dp[i] = i;
		for(int j=1; j<=sqrt(i); ++j){
			dp[i] = min(dp[i], dp[i-j*j] + 1);
		}
	}
	cout << dp[n];
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		handle(n);
		cout << endl;
	}
}
