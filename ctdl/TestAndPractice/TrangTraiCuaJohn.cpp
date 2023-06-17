#include<bits/stdc++.h>

using namespace std;

const long long m = 1e9;
int main(){
	int n;
	cin >> n;
	pair <int, int> pr[n+1];
	for(int i=1; i<=n; ++i){
		cin >> pr[i].first >> pr[i].second;
	}
	long long dp[n+1][m+1];
	memset(dp, 0, sizeof(dp));
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			dp[i][j] = dp[i-1][j];
			if(j >= pr[i].first){
				dp[i][j] = max(dp[i][j], dp[i-1][j-pr[i].first] + pr[i].second);
			}
		}
	}
	cout << dp[n][m] << endl;
}
