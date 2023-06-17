#include<bits/stdc++.h>

using namespace std;

void handle(){
	int v, e;
	cin >> v >> e;
	vector <vector <int>> g(v+1);
	int x, y;
	while(e--){
		cin >> x >> y;
		g[x].push_back(y);
	}
	for(int i=1; i<=v; ++i){
		cout << i << ": ";
		for(int j:g[i]){
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
