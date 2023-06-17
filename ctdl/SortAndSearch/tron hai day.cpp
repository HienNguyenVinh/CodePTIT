#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n], b[m];
		for(int i=0; i<n; ++i){
			cin >> a[i];
		}
		for(int i=0; i<m; ++i){
			cin >> b[i];
		}
		sort(a,a+n);
		sort(b,b+m);
		int i=0, j=0, cnt=0, c[n+m];
		while(i<n && j<m){
			if(a[i] < b[j]){
				c[cnt++] = a[i];
				++i;
			}else{
				c[cnt++] = b[j];
				++j;
			}
		}
		while(i<n){
			c[cnt++] = a[i++];
		}
		while(j<m){
			c[cnt++] = b[j++];
		}
		for(int i=0; i<cnt; ++i){
			cout << c[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
