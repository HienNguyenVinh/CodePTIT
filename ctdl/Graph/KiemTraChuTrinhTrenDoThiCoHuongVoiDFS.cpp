#include<bits/stdc++.h>

using namespace std;

int V, E, u, v;
vector <int> g[1001];
int color[1001];

bool dfs(int u){
	color[u] = 1;
	for(int v:g[u]){
		if(color[v] == 0){
			if(dfs(v)){
				return true;
			}
		}else if(color[v] == 1){
			return true;
		}
	}
	color[u] = 2;
	return false;
}
void handle(){
	cin >> V >> E;
	for(int i=0; i<1001; ++i){
		g[i].clear();
	}
	memset(color, 0, sizeof(color));
	while(E--){
		cin >> u >> v;
		g[u].push_back(v);
	}

	for(int i=1; i<=V; ++i){
		if(color[i] == 0){
			if(dfs(i)){
				cout << "YES";
				return;
			}
		}
	}
	cout << "NO";
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
