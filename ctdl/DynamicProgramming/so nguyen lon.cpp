#include<bits/stdc++.h>

using namespace std;

int f[1001][1001];
void handle(){
	string s1, s2;
	cin >> s1 >> s2;
	int n = s1.size(), m = s2.size();
	memset(f, 0, sizeof(f));
	int res = 0;
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			if(s1[i-1] == s2[j-1]){
				f[i][j] = f[i-1][j-1] + 1;
			}else{
				f[i][j] = max(f[i-1][j], f[i][j-1]);
			}
			res = max(res, f[i][j]);
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
