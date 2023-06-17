#include<bits/stdc++.h>

using namespace std;

int v, e;
vector <pair <int, int>> g;

void handle(){
	cin >> v >> e;
	g.clear();
	g.resize(v+1);
	while(e--){
		int x, y;
		cin >> x >> y;
		++g[x].first;
		++g[y].second;
	}
	
	for(int i=1; i<=v; ++i){
		if(g[i].first != g[i].second){
			cout << 0;
			return;
		}
	}
	cout << 1;
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
