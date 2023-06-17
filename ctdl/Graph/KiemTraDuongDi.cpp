#include<bits/stdc++.h>

using namespace std;

vector <vector <int>> g;
vector <bool> vs;
int v, e, s, t, q;

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
				vs[i] = true;
				qu.push(i);
			}
		}
	}
}

void handle(){
	cin >> v >> e;
	g.clear();
	g.resize(v+1);
	
	
	
	while(e--){
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	cin >> q;
	while(q--){
		vs.clear();
		vs.resize(v+1, 0);
		cin >> s >> t;
		bfs(s);
		cout << (vs[t] ? "YES" : "NO") << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		handle();
		
	}
	return 0;
}
