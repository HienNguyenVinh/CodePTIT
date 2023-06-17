#include<bits/stdc++.h>

using namespace std;

int V, E, u, v;
vector <int> g[1001];
bool vs[1001];
int degree[1001];
int color[1001];

bool Kahn(){
	int cnt = 0;
	queue <int> qu;
	for(int i=1; i<=V; ++i){
		if(degree[i] == 0){
			qu.push(i);
		}
	}
	while(!qu.empty()){
		u = qu.front();
		++cnt;
		for(int v:g[u]){
			if(!vs[v]){
				--degree[v];
				if(!degree[v]){
					qu.push(v);
				}
			}
		}
	}
	if(cnt == V){
		return false;
	}
	return true;
}

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
//		++degree[v];
	}
	
//	memset(vs, 0, sizeof(vs));
//	memset(degree, 0, sizeof(degree));
//	if(Kahn()){
//		cout << "YES";
//	}else{
//		cout << "NO";
//	}

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
