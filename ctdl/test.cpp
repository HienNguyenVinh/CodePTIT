#include<bits/stdc++.h>
#define pii pair <int, int>

using namespace std;

int V, E, s, u, v, w;
vector <vector <pii>> g;
bool vs[1001];
vector <int> d;

struct cmp{
	bool operator() (pii a, pii b){
		return a.second > b.second;
	}
};

void dijkstra(int s){
	priority_queue <pii, vector <pii>, cmp> pq;
	pq.push({s, 0});
	d[s] = 0;
	while(!pq.empty()){
		u = pq.top().first;
		vs[u] = true;
		w = pq.top().second;
		pq.pop();
		for(pii a:g[u]){
			v = a.first;
			if(!vs[v]){
				d[v] = min(d[v], w + a.second);
				pq.push({v, d[v]});
			}
		}
	}
	for(int i=1; i<=V; ++i){
		cout << d[i] << " ";
	}
}
void handle(){
	cin >> V >> E >> s;
	g.assign(V+1, {});
	memset(vs, 0, sizeof(vs));
	d.assign(V+1, INT_MAX);
	while(E--){
		cin >> u >> v >> w;
		g[u].push_back({v, w});
		g[v].push_back({u, w});
	}
	dijkstra(s);
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
