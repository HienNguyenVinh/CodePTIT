#include<bits/stdc++.h>

using namespace std;

const int inf = 1e9;
int n, m, u, v, c, q;
int d[101][101];
 
int main(){
	cin >> n >> m;
	memset(d, 100, sizeof(d));
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j){
			if(i==j){
				d[i][j] = 0;
			}else{
				d[i][j] = inf;
			}
		}
	}
	while(m--){
		cin >> u >> v >> c;
		d[u][v] = d[v][u] = c;
	}
	for(int k=1; k<=n; ++k){
		for(int i=1; i<=n; ++i){
			for(int j=1; j<=n; ++j){
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
	cin >> q;
	while(q--){
		cin >> u >> v;
		cout << d[u][v] << endl;
	}
	return 0;
}
