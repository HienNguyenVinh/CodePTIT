#include<bits/stdc++.h>

using namespace std;

int V, E, m, u, v;
vector <int> g[11];
int cl[11];

bool check(int u, int c){
	for(int v:g[u]){
		if(cl[v] == c){
			return false;
		}
	}
	return true;
}
int solving(int c){
	int tmp = 0;
	for(int i=1; i<=V; ++i){
		if(cl[i] == -1 and check(i, c)){
			cl[i] = c;
			++tmp;
		}
	}
	return tmp;
}
void handle(){
	cin >> V >> E >> m;
	for(int i=1; i<=V; ++i){
		g[i].clear();
	}
	memset(cl, -1, sizeof(cl));
	while(E--){
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	int cnt = 0, colors = 0;
	while(cnt < V){
		cnt += solving(colors);
		++colors;
	}
	cout << colors;
	if(m < colors){
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
