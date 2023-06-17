#include<bits/stdc++.h>

using namespace std;

int V, E, u, v;
vector <int> g[1001];
bool vs[1001];
int par[1001];

bool Bfs(int s){
	queue <int> qu;
	qu.push(s);
	vs[s] = true;
	while(!qu.empty()){
		u = qu.front();
		qu.pop();
		for(int v:g[u]){
			if(!vs[v]){
				vs[v] = true;
				qu.push(v);
				par[v] = u;
			}else if(v != par[u]){
				return true;
			}
		}
	}
	return false;
}
void handle(){
	cin >> V >> E;
	for(int i=0; i<1001; ++i){
		g[i].clear();
	}
	memset(vs, 0, sizeof(vs));
	memset(par, 0, sizeof(par));
	while(E--){
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	for(int i=1; i<=V; ++i){
		if(!vs[i]){
			if(Bfs(i)){
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
