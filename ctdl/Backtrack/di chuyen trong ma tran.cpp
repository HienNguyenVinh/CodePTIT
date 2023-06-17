#include<bits/stdc++.h>

using namespace std;

int nChooseK(int n, int k) {
    vector<vector<int>> dp(n+1, vector<int>(k+1, 0));
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= min(i, k); j++) {
            if (j == 0 || j == i) {
                dp[i][j] = 1;
            } else {
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            }
        }
    }
    return dp[n][k];
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n][m];
		for(int i=0; i<n; ++i){
			for(int j=0; j<m; ++j){
				cin >> a[i][j];
			}
		}
		cout << nChooseK(n+m-2, n-1) << endl;
	}
	return 0;
}
