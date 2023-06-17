#include<bits/stdc++.h>

using namespace std;

int v, e, u;
vector <vector <int>> g;
vector <bool> vs;

void bfs(int u){
	queue <int> qu;
	qu.push(u);
	
	while(!qu.empty()){
		u = qu.front();
		qu.pop();
		
		if(vs[u] == false){
			cout << u << " ";
			vs[u] = true;
		}
		for(int i:g[u]){
			if(vs[i] == false){
				qu.push(i);
			}
		}
	}
}
void handle(){
	cin >> v >> e >> u;
	g.clear();
	g.resize(v+1);
	vs.clear();
	vs.resize(v+1, 0);
	while(e--){
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}	
	bfs(u);
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
