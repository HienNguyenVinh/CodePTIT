#include<bits/stdc++.h>

using namespace std;

void handle(){
	string n, m;
	cin >> n >> m;
	int a = n.size(), b = m.size();
	int dp[a+1][b+1];
	memset(dp, 0, sizeof(dp));
	int res = 0;
	for(int i=1; i<=a; ++i){
		for(int j=1; j<=b; ++j){
			if(n[i-1] == m[j-1]){
				dp[i][j] = dp[i-1][j-1] + 1;
			}else{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
			res = max(res, dp[i][j]);
		}
	}
	cout << res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		handle();
		cout << endl;
	}
	return 0;
}
