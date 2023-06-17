#include<bits/stdc++.h>

using namespace std;

int main(){
	int c, n;
	cin >> c >> n;
	int a[n+1];
	for(int i=1; i<=n; ++i){
		cin >> a[i];
	}
	int dp[n+1][c+1];
	memset(dp, 0, sizeof(dp));
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=c; ++j){
			dp[i][j] = dp[i-1][j];
			if(j >= a[i]){
				dp[i][j] = max(dp[i][j], dp[i-1][j-a[i]] + a[i]);
			}
		}
	}
	cout << dp[n][c];
	return 0;
}
