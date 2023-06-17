#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> k >> n;
		int cnt = 0;
		int a[k][n];
		int m = k*n;
		int b[m];
		for(int i=0; i<k; ++i){
			for(int j=0; j<n; ++j){
				cin >> a[i][j];
				b[cnt] = a[i][j];
				++cnt;
			}
		}
		sort(b,b+m);
		for(int i=0; i<m; ++i){
			cout << b[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
