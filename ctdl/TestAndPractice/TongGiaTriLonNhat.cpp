#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	pair <int, int> pr[n+1];
	for(int i=1; i<=n; ++i){
		cin >> pr[i].first >> pr[i].second;
	}
	int dp[n+1][m+1];
	memset(dp, 0, sizeof(dp));
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			dp[i][j] = dp[i-1][j];
			if(j >= pr[i].first){
				dp[i][j] = max(dp[i][j], dp[i-1][j - pr[i].first] + pr[i].second);
			}
		}
	}
	cout << dp[n][m];
	return 0;
}
