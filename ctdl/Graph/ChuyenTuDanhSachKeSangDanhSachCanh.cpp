#include<bits/stdc++.h>

using namespace std;

void handle(){
	int n;
	cin >> n;
	cin.ignore();
	int g[n+1][n+1];
	for(int i=1; i<=n; ++i){
		string s;
		getline(cin, s);
		stringstream ss(s);
		int tmp;
		while(ss >> tmp){
			g[tmp][i] = 1;
			g[i][tmp] = 1;
		}
	}
	for(int i=1; i<=n; ++i){
		for(int j=i+1; j<=n; ++j){
			if(g[i][j] == 1){
				cout << i << " " << j << endl;
			}
		}
	}
}
int main(){
	handle();
	return 0;
}
