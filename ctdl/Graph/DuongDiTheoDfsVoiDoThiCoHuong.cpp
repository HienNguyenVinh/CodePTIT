#include<bits/stdc++.h>

using namespace std;

vector <vector <int>> g;
vector <bool> vs;
vector <int> tr;
int v, e, s, t;

void dfs(int start){
	stack <int> st;
	st.push(start);
	
	while(!st.empty()){
		int u = st.top();
		st.pop();
		vs[u] = true;
		if(u == t){
			return;
		}
		for(int i:g[u]){
			if(!vs[i]){
				st.push(u);
				st.push(i);
				tr[i] = u;
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
		tmp = tr[way.top()];
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
	tr.clear();
	tr.resize(v+1, -1);
	
	while(e--){
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
	}
	dfs(s);
	trace();
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
