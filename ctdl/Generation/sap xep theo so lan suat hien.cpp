#include<bits/stdc++.h>

using namespace std;

void dem(int *a, int *b, int *c, int n, int &cnt){
	int x = 0;
	a[n] = -1;
	for(int i=0; i<n; ++i){
		++x;
		if(a[i] != a[i+1]){
			b[cnt] = a[i];
			c[cnt] = x;
			x = 0; ++cnt;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1];
		for(int i=0; i<n; ++i){
			cin >> a[i];
		}
		sort(a,a+n);
		int b[n],c[n],cnt = 0;
		dem(a,b,c,n,cnt);
		for(int i=0; i<cnt; ++i){
			for(int j=0; j<cnt-1; ++j){
				if(c[j] < c[j+1]){
					swap(c[j],c[j+1]);
					swap(b[j],b[j+1]);
				}
			}
		}
		for(int i=0; i<cnt; ++i){
			for(int j=0; j<c[i]; ++j){
				cout << b[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
