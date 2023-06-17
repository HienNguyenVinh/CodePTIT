#include<bits/stdc++.h>

using namespace std;

int n, m;
vector <string> g;
int r[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int c[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void bfs(int i, int j){
	for(int k=0; k<8; ++k){
		int x = i + r[k];
		int y = j + c[k];
		if (x >= 0 and x < n and y >= 0 and y < m and g[x][y] == 'W'){
			g[x][y] = '.';
			bfs(x, y);
		}
	}
}
void handle(){
	cin >> n >> m;
	for(int i=0; i<n; ++i){
		string s;
		cin >> s;
		g.push_back(s);
	}
	int res = 0;
	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j){
			if(g[i][j] == 'W'){
				g[i][j] = '.';
				++res;
				bfs(i, j);
			}
		}
	}
	cout << res;
}
int main(){
	handle();
	cout << endl;
	return 0;
}
