#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		long *a = new long[n];
		long *b = new long[m];
		long *c = new long[m+n];
		int cnt = 0;
		for(int i=0; i<n; ++i){
			cin >> c[cnt++];
		}
		for(int i=0; i<m; ++i){
			cin >> c[cnt++];
		}
		sort(c,c+cnt);
		for(int i=0; i<cnt; ++i){
			cout << c[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
