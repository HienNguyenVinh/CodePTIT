#include<bits/stdc++.h>

using namespace std;

int n, m;
char a[1001][1001];
int rx[] = {1, -1, 0, 0};
int ry[] = {0, 0, 1, -1};
void dfs(int x, int y){
	for(int i=0; i<4; ++i){
		int dx = x + rx[i];
		int dy = y + ry[i];
		if(dx >= 1 && dx <=n && dy >= 1 && dy <= m && a[dx][dy] == '#'){
			a[dx][dy] = '.';
			dfs(dx, dy);
		}
	}
}
int main(){
	cin >> n >> m;
	int s = 0;
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			cin >> a[i][j];
		}
	}
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			if(a[i][j] == '#'){
				a[i][j] = '.';
				++s;
				dfs(i, j);
			}
		}
	}
	cout << s;
	return 0;
}
