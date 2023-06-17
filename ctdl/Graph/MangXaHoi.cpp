#include<bits/stdc++.h>

using namespace std;

int N, M, u, v;
vector <int> g[100001];
bool vs[100001];

void dfs(int u){
	stack <int> st;
	st.push(u);
	while(!st.empty()){
		u = st.top();
		st.pop();
		vs[u] = true;
		for(int v:g[u]){
			if(!vs[v]){
				vs[v] = true;
				st.push(u);
				st.push(v);
				break;
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
	dfs(1);
	for(int i=2; i<=N; ++i){
		if(!vs[i]){
			cout << "NO";
			return;
		}
	}
	cout << "YES";
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
