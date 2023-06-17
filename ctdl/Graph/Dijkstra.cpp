#include<bits/stdc++.h>
#define pii pair<int, int>

using namespace std;

int V, E, s, u, v, w;
vector <vector <pii>> G;
vector <bool> vs;;
vector <int> d;

struct cmp {
	bool operator() (pii a, pii b){
		return a.second > b.second;
	}
};
void Dijkstra(int s){
	priority_queue <pii, vector <pii>, cmp> q;
	q.push({s, 0});
	d[s] = 0;
	while(!q.empty()){
		u = q.top().first; w = q.top().second;
		q.pop();
		vs[u] = true;
		for(pii p:G[u]){
			v = p.first;
			if(!vs[v]){
				d[v] = min(d[v], w + p.second);
				q.push({v, d[v]});
			}
		}
	}
	for(int i=1; i<=V; ++i){
		cout << d[i] << " ";
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> V >> E >> s;
		G.assign(V+1, {});
		vs.assign(V+1, false);
		d.assign(V+1, INT_MAX);
		while(E--){
			cin >> u >> v >> w;
			G[u].push_back({v, w});
			G[v].push_back({u, w});
		}
		Dijkstra(s);
		cout << endl;
	}
	return 0;
}
