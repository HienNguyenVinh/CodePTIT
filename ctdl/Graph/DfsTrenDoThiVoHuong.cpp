#include<bits/stdc++.h>

using namespace std;

int v, e, u;
vector <vector <int>> g;
vector <bool> vs;

void dfs(int u){
	stack <int> st;
	st.push(u);
	
	while(!st.empty()){
		u = st.top();
		st.pop();
		if(vs[u] == false){
			cout << u << " ";
			vs[u] = true;
		}
		for(int i:g[u]){
			if(vs[i] == false){
				st.push(u);
				st.push(i);
				break;
			}
		}
	}
}
void handle(){
	cin >> v >> e >> u;
	g.clear();
	g.resize(v + 1);
	vs.clear();
	vs.resize(v + 1, 0);
	while(e--){
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}	
	dfs(u);
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
