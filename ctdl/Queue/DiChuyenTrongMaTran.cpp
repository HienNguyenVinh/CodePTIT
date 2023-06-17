#include<bits/stdc++.h>

using namespace std;
struct data {
	int r, c;   		// row and column
	int cnt;
	data(int r, int c, int cnt){
		this->r = r;
		this->c = c;
		this->cnt = cnt;
	}
};

void handle(){
	int n, m;
	cin >> n >> m;
	vector <vector<int>> a(n+1, vector <int>(m+1));
	vector <vector<bool>> vs(n+1, vector <bool>(m+1, 0));
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			cin >> a[i][j];
		}
	}	
	
	queue <data> qu;
	qu.push(data(1, 1, 0));
	while(!qu.empty()){
		data tmp = qu.front();
		qu.pop();
		
		int i = tmp.r, j = tmp.c;
		if(i == n && j == m){
			cout << tmp.cnt;
			return;
		}
		
		if(i + a[i][j] <= n && vs[i + a[i][j]][j] == 0){
			vs[i + a[i][j]][j] = 1;
			qu.push(data(i + a[i][j], j, tmp.cnt + 1));
		}
		if(j + a[i][j] <= m && vs[i][j + a[i][j]] == 0){
			vs[i][j + a[i][j]] = 1;
			qu.push(data(i, j + a[i][j], tmp.cnt + 1));
		}
	}
	cout << -1;
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
