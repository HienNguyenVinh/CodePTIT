#include<bits/stdc++.h>

using namespace std;

vector <vector <int>> g;
vector <bool> vs;
vector <int> tr;
int v, e, s, t;

void bfs(int start){
	queue <int> qu;
	qu.push(start);
	vs[start] = true;
	while(!qu.empty()){
		int u = qu.front();
		qu.pop();
		if(u == t){
			return;
		}
		for(int i:g[u]){
			if(!vs[i]){
				qu.push(i);
				vs[i] = true;
				tr[i] = u;
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
	bfs(s);
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
