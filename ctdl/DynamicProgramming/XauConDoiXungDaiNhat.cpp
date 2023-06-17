#include<bits/stdc++.h>

using namespace std;

bool dp[1001][1001];
void handle(){
	string s;
	cin >> s;
	int n = s.size();
	memset(dp, false, sizeof(dp));
	for(int i=0; i<n; ++i){
		dp[i][i] = true;
	}
	int res = 1;
	for(int k = 1; k<n; ++k){
		for(int i=0; i<n; ++i){
			int j = i+k;
			if(s[i] == s[j] && k==1){
				dp[i][j] = true;
			}else if(s[i] == s[j] && k > 1){
				dp[i][j] = dp[i+1][j-1];
			}else{
				dp[i][j] = 0;
			}
			if(dp[i][j]){
				res = max(res, k+1);
			}
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
