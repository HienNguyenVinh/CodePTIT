#include<bits/stdc++.h>

using namespace std;

int a[20][20], n;

void test(int *col, int &res, int &tmp, int i){
	for(int j=0; j<n; ++j){
		if(col[j] == 0){
			col[j] = 1;
			tmp += a[i][j];
			if(i == n-1){
				res = max(tmp, res);
			}else{
				test(col, res, tmp, i+1);
			}
			col[j] = 0;
			tmp -= a[i][j];
		}
	}
}
void handle(){
	cin >> n;
	int col[n] = {};
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			cin >> a[i][j];
		}
	}
	int res = 0, tmp = 0;;
	test(col, res, tmp, 0);
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
