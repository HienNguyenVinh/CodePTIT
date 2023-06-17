#include<bits/stdc++.h>

using namespace std;

int V, E, u, v, st, en;
vector <int> g[1001];
bool vs[1001];
int par[1001];
vector <int> cycle;

void dfs(int u, int pre, vector <int> path){
	vs[u] = true;
	for(int v:g[u]){
		if(v == 1 and v != pre and cycle.empty()){
			path.push_back(v);
			cycle = path;
			return;
		}
		if(!vs[v]){
			path.push_back(v);
			dfs(v, u, path);
			path.pop_back();
		}
	}
}
void handle(){
	cin >> V >> E;
	for(int i=1; i<=V; ++i){
		g[i].clear();
	}
	cycle.clear();
	memset(vs, 0, sizeof(vs));
	memset(par, 0, sizeof(par));
	while(E--){
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	for (auto &i : g) {
        sort(i.begin(), i.end());
    }
    dfs(1, -1, {1});
	if(cycle.empty()){
		cout << "NO";
	}else{
		for(int i:cycle){
			cout << i << " ";
		}
	}
	
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
