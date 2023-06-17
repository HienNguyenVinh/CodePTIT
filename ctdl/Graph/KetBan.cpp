#include<bits/stdc++.h>

using namespace std;

int N, M, u, v, ans, k;
vector <int> g[100001];
bool vs[100001];

void bfs(int s){
	queue <int> qu;
	qu.push(s);
	++k;
	while(!qu.empty()){
		u = qu.front();
		qu.pop();
		vs[u] = true;
		for(int v:g[u]){
			if(!vs[v]){
				vs[v] = true;
				qu.push(v);
				++k;
			}
		}
	}
}
void handle(){
	cin >> N >> M;
	for(int i=1; i<=N; ++i){
		g[i].clear();
	}
	memset(vs, 0, sizeof(vs));
	while(M--){
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	ans = 0;
	for(int i=1; i<=N; ++i){
		if(!vs[i]){
			k = 0;
			bfs(i);
			ans = max(ans, k);
		}
	}
	cout << ans;
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
