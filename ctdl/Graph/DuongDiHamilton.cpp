#include<bits/stdc++.h>

using namespace std;

int V, E, u, v, ok;
vector <int> g[11];
bool vs[11];

void dfs(int u, int i){
	if(i == V){
		ok = 1;
		return;
	}
	for(int v:g[u]){
		if(!vs[v]){
			vs[v] = true;
			dfs(v, i+1);
			vs[v] = false;
		}
	}
}
void handle(){
	ok = 0;
	cin >> V >> E;
	for(int i=0; i<11; ++i){
		g[i].clear();
	}
	while(E--){
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	for(int i=1; i<=v; ++i){
		memset(vs, false, sizeof(vs));
		vs[i] = true;
		dfs(i, 1);
		if(ok){
			break;
		}
	}
	cout << ok ? 1 : 0;
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
