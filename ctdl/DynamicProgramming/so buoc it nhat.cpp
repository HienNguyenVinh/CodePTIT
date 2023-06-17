#include<bits/stdc++.h>

using namespace std;

void handle(int *a, int n){
	int res = 0;
	int dp[n];
	for(int i=0; i<n; ++i){
		dp[i] = 1;
		for(int j=0; j<i; ++j){
			if(a[i] >= a[j]){
				dp[i] = max(dp[i], dp[j]+1);
			}
		}
	}
	cout << n - *max_element(dp, dp+n) << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; ++i){
			cin >> a[i];
		}
		handle(a, n);
	}
	return 0;
}
