#include<bits/stdc++.h>

using namespace std;

int n, m, u, v;
vector <int> g[1001];
int vs[1001];

bool bfs(int s){
	queue <int> qu;
	qu.push(s);
	vs[s] = 0;
	while(!qu.empty()){
		u = qu.front();
		qu.pop();
		for(int v:g[u]){
			if(vs[v] == -1){
				vs[v] = 1 - vs[u];
				qu.push(v);
			}else if(vs[v] == vs[u]){
				return false;
			}
		}
	}
	return true;
}
bool dfs(int u, int pre){
	vs[u] = 1 - vs[pre];
	for(int v:g[u]){
		if(vs[v] == -1){
			vs[v] = 1 - vs[u];
			if(!dfs(v, u)){
				return false;
			}
		}else if(vs[v] == vs[u]){
			return false;
		}
	}
	return true;
}
void handle(){
	cin >> n >> m;
	for(int i=1; i<=n; ++i){
		g[i].clear();
	}
	memset(vs, -1, sizeof(vs));
	while(m--){
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	bool ok = true;
	vs[0] = 1;
	for(int i=1; i<=n; ++i){
		if(vs[i] == -1){
			if(!dfs(i, 0)){
				ok = false;
				break;
			}
		}
	}
	if(ok){
		cout << "YES";
	}else{
		cout << "NO";
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
