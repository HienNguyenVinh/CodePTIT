#include<bits/stdc++.h>

using namespace std;

int v, e, s, t;
vector <vector <int>> g;
vector <bool> vs;
vector <int> truoc;

void dfs(int u){
	stack <int> st;
	st.push(u);
	
	while(!st.empty()){
		u = st.top();
		st.pop();
		vs[u] = true;
		if(u == t){
			return;
		}
		for(int i:g[u]){
			if(!vs[i]){
				st.push(u);
				st.push(i);
				truoc[i] = u;
				break;
			}
		}
	}
}
void trace(){
	if(vs[t] == false){
		cout << -1;
		return;
	}
	stack <int> way;
	int tmp = t;
	while(tmp != -1){
		way.push(tmp);
		tmp = truoc[way.top()];
	}
	while(!way.empty()){
		cout << way.top() << " ";
		way.pop();
	}
}
void handle(){
	cin >> v >> e >> s >> t;
	g.clear();
	g.resize(v+1);
	vs.clear();
	vs.resize(v+1, 0);
	truoc.clear();
	truoc.resize(v+1, -1);
	for(int i=0; i<e; ++i){
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	dfs(s);
	trace();
}
int main(){
	int test;
	cin >> test;
	while(test--){
		handle();
		cout << endl;
	}
	return 0;
}
