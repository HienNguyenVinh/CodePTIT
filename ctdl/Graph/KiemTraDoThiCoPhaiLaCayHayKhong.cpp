#include<bits/stdc++.h>

using namespace std;

int n, e, u, v, ok, cnt;
vector <int> g[1001];
bool vs[1001];
int par[1001];

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
				par[v] = u;
			}else{
				if(v != par[u]){
					ok = 1;
					continue;
				}
			}
		}
	}
}
void handle(){
	cin >> n;
	e = n - 1;
	for(int i=0; i<1001; ++i){
		g[i].clear();
	}
	memset(vs, 0, sizeof(vs));
	memset(par, 0, sizeof(par));
	while(e--){
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	cnt = 0; ok = 0;
	for(int i=1; i<=n; ++i){
		if(!vs[i]){
			++cnt;
			bfs(i);
		}
	}
	if(cnt != 1){
		cout << "NO";
		return;
	}
	if(ok){
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
