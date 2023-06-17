#include<bits/stdc++.h>

using namespace std;

int V, E, u, v, tplt;
vector <int> g[1001];
bool vs[1001];

void bfs(int s){
	queue <int> qu;
	qu.push(s);
	while(!qu.empty()){
		u = qu.front();
		qu.pop();
		vs[u] = true;
		for(int v:g[u]){
			if(!vs[v]){
				vs[u] = true;
				qu.push(v);
			}
		}
	}
}
void dinhTru(int s){
	int tplt_N = 0;
	memset(vs, 0, sizeof(vs));
	vs[s] = true;
	for(int i=1; i<=V; ++i){
		if(!vs[i]){
			bfs(i);
			++tplt_N;
		}
	}
	if(tplt_N > tplt){
		cout << s << " ";
	}
}
void handle(){
	cin >> V >> E;
	for(int i=0; i<1001; ++i){
		g[i].clear();
	}
	while(E--){
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	tplt = 0;
	memset(vs, false, sizeof(vs));
	for(int i=1; i<=V; ++i){
		if(!vs[i]){
			bfs(i);
			++tplt;
		}
	}
	for(int i=1; i<=V; ++i){
		dinhTru(i);
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
