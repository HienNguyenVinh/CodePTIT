#include<bits/stdc++.h>

using namespace std;

int v, e;
vector <vector <int>> g;

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
	
	int odd_deg = 0;
	for(int i=1; i<=v; ++i){
		odd_deg += (g[i].size() % 2 == 1);
	}
	if(odd_deg == 0){
		cout << 2;
	}else if(odd_deg == 2){
		cout << 1;
	}else{
		cout << 0;
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
