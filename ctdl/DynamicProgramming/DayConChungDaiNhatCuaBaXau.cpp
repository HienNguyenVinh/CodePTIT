#include<bits/stdc++.h>

using namespace std;
int m, n, p;
string a, b, c;
int d[101][101][101];

void handle(){
	cin >> m >> n >> p;
	cin >> a >> b >> c;
	memset(d, 0, sizeof(d));
	int res = 0;
	for(int i=1; i<=a.size(); ++i){
		for(int j=1; j<=b.size(); ++j){
			for(int k=1; k<=c.size(); ++k){
				if(a[i-1] == b[j-1] && a[i-1] == c[k-1]){
					d[i][j][k] = d[i-1][j-1][k-1] + 1;
				}else{
					d[i][j][k] = max(d[i-1][j][k], max(d[i][j-1][k], d[i][j][k-1]));
				}
				res = max(res, d[i][j][k]);
			}
			
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
