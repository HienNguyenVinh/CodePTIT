#include<bits/stdc++.h>

using namespace std;

int v, e, m, n, x, y, lienThong;
vector <vector <int>> g;
vector <bool> vs;
vector <pair <int, int>> canh;

void bfs(int a){
	queue <int> qu;
	qu.push(a);
	while(!qu.empty()){
		a = qu.front();
		qu.pop();
		if(!vs[a]){
			vs[a] = true;
		}
		for(int i:g[a]){
			if((a == x && i == y) || (a == y && i == x)){
				continue;
			}
			if(!vs[i]){
				qu.push(i);
			}
		}
	}
}
void canhCau(){
	vs.clear();
	vs.resize(v+1, 0);
	int new_lienThong = 0;
	for(int i=1; i<=v; ++i){
		if(!vs[i]){
			bfs(i);
			++new_lienThong;
		}
	}
	if(new_lienThong > lienThong){
		cout << x << " " << y << " ";
	}
}
void handle(){
	cin >> v >> e;
	g.clear(); g.resize(v+1);
	vs.clear(); vs.resize(v+1, 0);
	canh.clear(); canh.resize(e+1);
	for(int i=1; i<=e; ++i){
		cin >> m >> n;
		canh[i] = {m, n};
		g[m].push_back(n);
		g[n].push_back(m);
	}
	
	lienThong = 0;
	x = y = -1;
	for(int i=1; i<=v; ++i){
		if(!vs[i]){
			bfs(i);
			++lienThong;
		}
	}
	for(int i=1; i<=e; ++i){
		x = canh[i].first;
		y = canh[i].second;
		canhCau();
	}
	cout << endl;
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
