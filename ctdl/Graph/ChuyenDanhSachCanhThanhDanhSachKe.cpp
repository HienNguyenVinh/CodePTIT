#include<bits/stdc++.h>

using namespace std;

void handle(){
	int v, e;
	cin >> v >> e;
	vector <vector <int>> g(v + 1);
	while(e--){
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	for(int i=1; i<=v; ++i){
		cout << i << ": ";
		for(int j : g[i]){
			cout << j << " ";
		}
		cout << endl;
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
