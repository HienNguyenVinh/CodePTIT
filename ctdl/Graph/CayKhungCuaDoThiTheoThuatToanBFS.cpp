#include<bits/stdc++.h>

using namespace std;

int V, E, u, x, y;
vector <int> g[1001];
bool vs[1001];
vector <pair <int, int>> tree;

void bfs(int s){
	queue <int> qu;
	qu.push(s);
	while(!qu.empty()){
		x = qu.front();
		qu.pop();
		vs[x] = true;
		for(int y:g[x]){
			if(!vs[y]){
				vs[y] = true;
				qu.push(y);
				tree.push_back({x, y});
			}
		}
	}
}
void output(){
	if(tree.size() != V-1){
		cout << -1;
		return;
	}
	for(int i=1; i<=V; ++i){
		if(!vs[i]){
			cout << -1;
			return;
		}
	}
	for(auto p:tree){
		cout << p.first << " " << p.second;
		cout << endl;
	}
}
void handle(){
	cin >> V >> E >> u;
	for(int i=1; i<=V; ++i){
		g[i].clear();
	}
	tree.clear();
	memset(vs, 0, sizeof(vs));
	while(E--){
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	bfs(u);
	output();
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
