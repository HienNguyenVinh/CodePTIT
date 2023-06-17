#include<bits/stdc++.h>

using namespace std;

void test(int *col, int *d1, int *d2, int &cnt, int i, int n){
	for(int j=1; j<=n; ++j){
		if(col[j] == 1 && d1[i-j+n] == 1 && d2[i+j-1] == 1){
			col[j] = d1[i-j+n] = d2[i+j-1] = 0;
			if(i == n){
				++cnt;
			}else{
				test(col, d1, d2, cnt, i+1, n);
			}
			col[j] = d1[i-j+n] = d2[i+j-1] = 1;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int col[50], d1[50], d2[50];
		for(int i=1; i<50; ++i){
			col[i] = d1[i] = d2[i] = 1;
		}
		int cnt = 0;
		test(col, d1, d2, cnt, 1, n);
		cout << cnt << endl;
	}
	
	return 0;
}
