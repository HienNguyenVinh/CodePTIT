#include<bits/stdc++.h>

using namespace std;

struct Node{
	int u, v, w;
	
	Node(int u, int v, int w){
		this->u = u;
		this->v = v;
		this->w = w; 
	}
};

bool cmp(Node a, Node b){
	if(a.w == b.w){
		if(a.u == b.u){
			return a.v < b.v;
		}
		return a.u < b.u;
	}
	return a.w < b.w;
}

void Kruskal(vector <Node> g, int V){
	vector <bool> vs(V+1, false);
	vector <pair <int, int>> tree;
	int tmp = 0;
	
	sort(g.begin(), g.end(), cmp);
	for(Node i:g){
		if(!vs[i.u] or !vs[i.v]){
			tmp += i.w;
			vs[i.u] = vs[i.v] = true;
			tree.push_back({i.u, i.v});
		}
	}
	cout << tmp;
}
void handle(){
	int V, E;
	cin >> V >> E;
	vector <Node> g;
	while(E--){
		int u, v, w;
		cin >> u >> v >> w;
		g.push_back(Node(u, v, w));
	}
	Kruskal(g, V);
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
