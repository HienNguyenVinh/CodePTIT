#include<bits/stdc++.h>

using namespace std;

int k, n, m, u, v;
vector <int> vt;
vector <vector <int>> g;
vector <bool> vs;
vector <int> cnt;

void dfs(int u){
	vs[u] = true;
	++cnt[u];
	for(int v:g[u]){
		if(!vs[v]){
			dfs(v);
		}
	}
}
void handle(){
	cin >> k >> n >> m;
	cnt.assign(n+1, 0);
	g.assign(n+1, {});
	vt.clear();
	for(int i=1; i<=k; ++i){
		int x;
		cin >> x;
		vt.push_back(x);
	}
	while(m--){
		cin >> u >> v;
		g[u].push_back(v);
	}
	int res = 0;
	for(int v:vt){
		vs.assign(n+1, 0);
		dfs(v);
	}
	for(int i=1; i<=n; ++i){
		if(cnt[i] == k){
			++res;
		}
	}
	cout << res;
}
int main(){
	handle();
	cout << endl;
	return 0;
}
