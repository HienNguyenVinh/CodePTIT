#include <bits/stdc++.h>
using namespace std;

void handle(){
	int n, s;
	cin >> n >> s;
	int a[n], dp[s+1] = {};
	for(int &i:a){
		cin >> i;
	}
	for(int i=0; i<n; ++i){
		for(int j=s; j>=a[i]; --j){
			if(dp[j] == 0 && dp[j-a[i]] == 1){
				dp[j] = 1;
			}
		}
	}
	cout <<  dp[s] ? "YES" : "NO";
}

int main() {
    int T = 1; cin >> T;
    while (T--) {
        handle();
        cout << endl;
    }
    return 0;
} 
