#include<bits/stdc++.h>

using namespace std;

int isExist(int *b, int n, int x){
	for(int i=0; i<n; ++i){
		if(b[i] == x){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n][n];
		for(int i=0; i<n; ++i){
			for(int j=0; j<n; ++j){
				cin >> a[i][j];
			}
		}
		int x = 0;
		int b[n], dem = 0;
		for(int i=0; i<n; ++i){
			if(isExist(b,dem,a[0][i])){
				b[dem++] = a[0][i];
				int cnt = 0;
				for(int j=1; j<n; ++j){
					for(int k=0; k<n; ++k){
						if(a[0][i] == a[j][k]){
							++cnt;
							break;
						}
					}
				}
				if(cnt == n-1){
					++x;
				}
			}
		}
		cout << x << endl;
	}
	return 0;
}
