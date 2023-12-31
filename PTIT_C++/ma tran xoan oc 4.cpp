#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int b[n][n];
	int m = n*n;
	int a[m];
	for(int i=0; i<m; ++i){
		cin >> a[i];
	}
	sort(a,a+m);
	int h1=0, h2=n-1, c1=0, c2=n-1;
	int k=0;
	while(h1<=h2 && c1<=c2){
		for(int i=c1; i<=c2; ++i){
			b[h1][i] = a[k];
			++k;
		}
		++h1;
		for(int i=h1; i<=h2; ++i){
			b[i][c2] = a[k];
			++k;
		}
		--c2;
		for(int i=c2; i>=c1; --i){
			b[h2][i] = a[k];
			++k;
		}
		--h2;
		for(int i=h2; i>=h1; --i){
			b[i][c1] = a[k];
			++k;
		}
		++c1;
	}
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
