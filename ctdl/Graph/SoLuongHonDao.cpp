#include<bits/stdc++.h>

using namespace std;

int n, m;
int g[500][500];
int r[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int c[8] = {-1, -1, -1, 0, 1, 1, 1, 0};

void bfs(int i, int j){
	for(int k=0; k<8; ++k){
		int x = i + r[k];
		int y = j + c[k];
		if(x >= 0 and y >= 0 and x < n and y < m and g[x][y] == 1){
			g[x][y] = 0;
			bfs(x, y);
		}
	}
}
void handle(){
	cin >> n >> m;
	memset(g, 0, sizeof(g));
	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j){
			cin >> g[i][j];
		}
	}
	int res = 0;
	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j){
			if(g[i][j] == 1){
				g[i][j] = 0;
				++res;
				bfs(i, j);
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
