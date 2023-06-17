#include<bits/stdc++.h>

using namespace std;

int n, m;
int a[501][501];
bool vs[501][501];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

struct point{
	int x, y, weight;
};
struct cmp{
	bool operator() (point a, point b){
		return a.weight > b.weight;
	}
};
void bfs(){
	priority_queue <point, vector <point>, cmp> pq;
	pq.push({1, 1, a[1][1]});
	vs[1][1] = true;
	while(!pq.empty()){
		point c = pq.top();
		pq.pop();
		
		for(int k=0; k<4; ++k){
			int i = c.x + dx[k];
			int j = c.y + dy[k];
			if(i == n and j == m){
				cout << c.weight + a[i][j];
				return;
			}
			if(i>0 and i<=n and j>0 and j<=m and !vs[i][j]){
				vs[i][j] = true;
				pq.push({i, j, c.weight + a[i][j]});
			}
		}
	}
}
void handle(){
	cin >> n >> m;
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			cin >> a[i][j];
		}
	}
	memset(vs, 0, sizeof(vs));
	bfs();
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
