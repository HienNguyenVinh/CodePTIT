#include<bits/stdc++.h>

using namespace std;

int V, E, u, v;
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
				vs[v] = true;
				qu.push(v);
			}
		}
	}
}
void handle(){
	cin >> V >> E;
	for(int i=0; i<1001; ++i){
		g[i].clear();
	}
	memset(vs, false, sizeof(vs));
	while(E--){
		cin >> u >> v;
		g[u].push_back(v);
	}
	int cnt = 0;
	for(int i=1; i<=V; ++i){
		if(!vs[i]){
			bfs(i);
			++cnt;
		}
	}
	if(cnt > 1){
		cout << "NO";
	}else{
		cout << "YES";
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
